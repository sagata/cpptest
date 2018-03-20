#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/shm.h>
#define TEST_SIZE 2048

typedef struct _BOX
{
	int  flag;
	char szMsg[TEST_SIZE];
}Box;

int main()
{
	int shmid = shmget((key_t)1234, sizeof(Box), 0666|IPC_CREAT);
	void *shm = shmat(shmid, (void*)0, 0);
	Box *pBox = (Box*)shm;
	pBox->flag = 0;

	int i = 0;
	while(1)
	{
		while(pBox->flag == 0)
		{
			getchar();
			snprintf(pBox->szMsg, sizeof(pBox->szMsg), "hello %d", ++i);
			printf("write msg is [%s]\n", pBox->szMsg);
			pBox->flag = 1;
		}
	}
	
	shmdt(shm);
	return 0;
}