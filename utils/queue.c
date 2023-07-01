#include "queue.h"

Queue* new_queue(int initial_capacity) {
	Queue* queue = (Queue*)malloc(sizeof(Queue));
	queue->elements = (void**)malloc(initial_capacity * sizeof(void*));
	queue->size = 0;
	queue->capacity = initial_capacity;
	return queue;
}

void queue_push(Queue* queue, void* element) {
	if (queue->size == queue->capacity) {
		queue->capacity *= 2;  // Double the capacity if the queue is full
		queue->elements = (void**)realloc(queue->elements, queue->capacity * sizeof(void*));
	}

	queue->elements[queue->size++] = element;
}

void* queue_pop(Queue* queue) {
	if (queue->size == 0) {
		printf("Error: Queue is empty.\n");
		return NULL;
	}

	void* element = queue->elements[0];

	// Shift elements to the left to remove the popped element
	for (int i = 0; i < queue->size - 1; i++) {
		queue->elements[i] = queue->elements[i + 1];
	}

	queue->size--;

	return element;
}

void free_queue(Queue* queue) {
	free(queue->elements);
	free(queue);
}

iQueue* new_iQueue(int initial_capacity) {
	iQueue* queue = (iQueue*)malloc(sizeof(iQueue));
	queue->elements = (int*)malloc(initial_capacity * sizeof(int));
	queue->size = 0;
	queue->capacity = initial_capacity;
	return queue;
}

void iQueue_push(iQueue* queue, int element) {
	if (queue->size == queue->capacity) {
		queue->capacity *= 2;
		queue->elements = (int*)realloc(queue->elements, queue->capacity * sizeof(int));
	}

	queue->elements[queue->size++] = element;
}

int iQueue_pop(iQueue* queue) {
	if (queue->size == 0) {
		printf("Error: Queue is empty.\n");
		return 0;
	}

	int element = queue->elements[0];

	for (int i = 0; i < queue->size - 1; i++) {
		queue->elements[i] = queue->elements[i + 1];
	}

	queue->size--;

	return element;
}

void free_iQueue(iQueue* queue) {
	free(queue->elements);
	free(queue);
}

dQueue* new_dQueue(int initial_capacity) {
	dQueue* queue = (dQueue*)malloc(sizeof(dQueue));
	queue->elements = (double*)malloc(initial_capacity * sizeof(double));
	queue->size = 0;
	queue->capacity = initial_capacity;
	return queue;
}

void dQueue_push(dQueue* queue, double element) {
	if (queue->size == queue->capacity) {
		queue->capacity *= 2;
		queue->elements = (double*)realloc(queue->elements, queue->capacity * sizeof(double));
	}

	queue->elements[queue->size++] = element;
}

double dQueue_pop(dQueue* queue) {
	if (queue->size == 0) {
		printf("Error: Queue is empty.\n");
		return 0.0;
	}

	double element = queue->elements[0];

	for (int i = 0; i < queue->size - 1; i++) {
		queue->elements[i] = queue->elements[i + 1];
	}

	queue->size--;

	return element;
}

void free_dQueue(dQueue* queue) {
	free(queue->elements);
	free(queue);
}

sQueue* new_sQueue(int initial_capacity) {
	sQueue* queue = (sQueue*)malloc(sizeof(sQueue));
	queue->elements = (char**)malloc(initial_capacity * sizeof(char*));
	queue->size = 0;
	queue->capacity = initial_capacity;
	return queue;
}

void sQueue_push(sQueue* queue, const char* element) {
	if (queue->size == queue->capacity) {
		queue->capacity *= 2;
		queue->elements = (char**)realloc(queue->elements, queue->capacity * sizeof(char*));
	}

	queue->elements[queue->size] = (char*)malloc((strlen(element) + 1) * sizeof(char));
	strcpy(queue->elements[queue->size++], element);
}

char* sQueue_pop(sQueue* queue) {
	if (queue->size == 0) {
		printf("Error: Queue is empty.\n");
		return NULL;
	}

	char* element = queue->elements[0];

	for (int i = 0; i < queue->size - 1; i++) {
		queue->elements[i] = queue->elements[i + 1];
	}

	queue->size--;

	return element;
}

void free_sQueue(sQueue* queue) {
	for (int i = 0; i < queue->size; i++) {
		free(queue->elements[i]);
	}
	free(queue->elements);
	free(queue);
}
