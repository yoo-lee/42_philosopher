
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>

static int data;

void * main_thread(void *arg) 
{
        usleep(200000);
        data=1000;
        pthread_exit(NULL);
        return NULL;
}

/* int main(void)
{
		pthread_t tid;
    	pthread_create(&tid, NULL, main_thread, NULL);
		printf("main:%d\n", data);
        ///...
		pthread_join(tid, NULL);
		printf("main end:%d\n", data);
		return 0;
}
 */
int main(void)
		{
			int res;
		pthread_t tid;
		res = getpid(tid);
		printf("pid:%d", res);
		pthread_create(&tid, NULL, &main_thread, NULL);
		printf("main end:%d\n", data);
		pthread_join(tid, NULL);
		printf("main:%d\n" , data);
		return 0;
		}