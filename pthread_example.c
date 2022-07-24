#include <stdio.h>
#include<pthread.h>
#include <unistd.h>
void* thread1();
void* thread2();

int main() {
	pthread_t t1; // id thread one
	pthread_t t2; // id thread two
	/* 
		first parm to get id thread to OS Th 2th to change sitting to thread for example size stake and attrubute flags the 3th param if a routin which is being called when we use the p thread 		create right so we'll write the routine in such a way that the return type will be the 	same as well as we will usin * don't know what our data we are passing 4th parma to send arg 		function thread 
	*/
	pthread_create(&t1, NULL, (void*)&thread1, NULL);
	pthread_create(&t2, NULL, (void*)&thread2, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	printf("Hello,I am main process\n");

	return 0;
}

void* thread1() {
	sleep(5);
	printf("Hello,I am thread 1\n");
}
void* thread2() {
	sleep(5);
	printf("Hello,I am thread 2\n");
}