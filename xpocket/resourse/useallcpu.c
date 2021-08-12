
#include <pthread.h>

const int num = 2;

int fun2()
{
      while(1) {}
}

int fun1()
{
    fun2();
}


void *func(void* arg) {
	fun1();
	return ((void *)0);
}

int main(int argc, char* argv[]) {
	int i,j;

	pthread_t threads[num];
	for ( i = 0; i < num; i++) {
		pthread_create(&threads[i], NULL, func, NULL);
	}
	for (i = 0; i < num; i++) {
		pthread_join(threads[i], NULL);
	}
	return 0;
}


