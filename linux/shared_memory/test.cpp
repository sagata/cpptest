#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/shm.h>

void del_mem()
{
    shmctl(65536, IPC_RMID, 0);
}
int create_mem()
{
	int shmid = shmget((key_t)1234, 100, 0666|IPC_CREAT);
	printf("shmid %d\n", shmid);
    return shmid;
}
void * attach_mem(int shmid)
{
	void *shm = shmat(shmid, 0, 0);
    return shm;
}
void detach_mem(void *shm)
{
	shmdt(shm);
}
int main()
{
    //del_mem();	
	int id = create_mem();
    void * shm = attach_mem(id);
    detach_mem(shm);
    getchar();
    return 0;
}
