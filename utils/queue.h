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

iQueue* new_iqueue(int initial_capacity);
void iqueue_push(iQueue* queue, int element);
int iqueue_pop(iQueue* queue);
void free_iqueue(iQueue* queue);

dQueue* new_dqueue(int initial_capacity);
void dqueue_push(dQueue* queue, double element);
double dqueue_pop(dQueue* queue);
void free_dqueue(dQueue* queue);

sQueue* new_squeue(int initial_capacity);
void squeue_push(sQueue* queue, char* element);
char* squeue_pop(sQueue* queue);
void free_squeue(sQueue* queue);

#endif