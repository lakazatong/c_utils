#ifndef QUEUE_UTILS_H
#define QUEUE_UTILS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	void** elements;
	int size;
	int capacity;
} Queue;

typedef struct {
	int* elements;
	int size;
	int capacity;
} iQueue;

typedef struct {
	double* elements;
	int size;
	int capacity;
} dQueue;

typedef struct {
	char** elements;
	int size;
	int capacity;
} sQueue;

Queue* new_queue(int initial_capacity);
void queue_push(Queue* queue, void* element);
void* queue_pop(Queue* queue);
void free_queue(Queue* queue);

iQueue* new_iQueue(int initial_capacity);
void iQueue_push(iQueue* queue, int element);
int iQueue_pop(iQueue* queue);
void free_iQueue(iQueue* queue);

dQueue* new_dQueue(int initial_capacity);
void dQueue_push(dQueue* queue, double element);
double dQueue_pop(dQueue* queue);
void free_dQueue(dQueue* queue);

sQueue* new_sQueue(int initial_capacity);
void sQueue_push(sQueue* queue, const char* element);
char* sQueue_pop(sQueue* queue);
void free_sQueue(sQueue* queue);

#endif