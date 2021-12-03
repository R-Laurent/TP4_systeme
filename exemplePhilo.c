#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <assert.h>

pthread_mutex_t mutex     = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t  condition = PTHREAD_COND_INITIALIZER;

typedef enum {RIPPAILLE, AUTRE} SITUATION;


int maint(void){
    int n = 5;
    pthread_t philosophes[n];

}   