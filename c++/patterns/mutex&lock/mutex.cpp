#include <iostream>
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<pthread.h> 


using namespace std;


pthread_mutex_t  mutexLock;
int counter = 0;

void* print(void *arg)
{
    pthread_mutex_lock(&mutexLock);
    counter++;
    cout << "Print[" << counter << "] has started";

    sleep(1);

    cout << "Print[" << counter << "] has finished";

    pthread_mutex_unlock(&mutexLock);

    return;

}

int main(void)
{
    int arrSize = 5;
    pthread_t tId[arrSize];

    for ( int i = 0; i < arrSize; i++)
    {
        int error = pthread_create(&(tId[i]), NULL, &print, NULL);
        if (error != 0)
            cout << "Thread can't be created: " << strerror(error);
    }

    for ( int i = 0; i < arrSize; i++)
        pthread_join(tId[1], NULL);

    pthread_mutex_destroy(&mutexLock);
    
    return 0;
}