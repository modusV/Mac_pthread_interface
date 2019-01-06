//
// Created by Lorenzo Santolini on 06/01/2019.
//

#ifndef MYSOLUTION_COOLSEM_H
#define MYSOLUTION_COOLSEM_H

#include <stdint.h>
#include <dispatch/dispatch.h>
#include <semaphore.h>

struct cool_sem {
#ifdef __APPLE__
    dispatch_semaphore_t    sem;
#else
    sem_t                   sem;
#endif
};


void cool_sem_init(struct cool_sem *s, uint32_t value);
void cool_sem_wait(struct cool_sem *s);
void cool_sem_post(struct cool_sem *s);

#endif //MYSOLUTION_COOLSEM_H
