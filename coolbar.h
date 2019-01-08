//
// Created by Lorenzo Santolini on 06/01/2019.
//

#ifndef MYSOLUTION_COOLBAR_H
#define MYSOLUTION_COOLBAR_H

#ifdef __APPLE__

#include <pthread.h>
#include <errno.h>

typedef int pthread_barrierattr_t;
typedef struct {
    pthread_mutex_t mutex;
    pthread_cond_t cond;
    int count;
    int tripCount;
} pthread_barrier_t;


int pthread_barrier_init(pthread_barrier_t *barrier, const pthread_barrierattr_t *attr, unsigned int count);
int pthread_barrier_destroy(pthread_barrier_t *barrier);
int pthread_barrier_wait(pthread_barrier_t *barrier);

#endif // __APPLE__
#endif //MYSOLUTION_COOLBAR_H
