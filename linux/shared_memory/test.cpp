#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/shm.h>

int main()
{
	int shmid = shmget((key_t)1234, 100, 0666|IPC_CREAT);
	printf("shmid %d\n", shmid);
	
	return 0;
}