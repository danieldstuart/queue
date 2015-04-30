#include <stdio.h>
#include <stdlib.h>
#include <queue.h>

	// To set Queue as a struct that can be reused in the future
typedef struct Queue{
	int capacity;
	int size;
	int front;
	int rear;
	int *elements;
}Queue;

	// To create the queue that can then be added or removed from
Queue * createQueue(int MaxElements){
		Queue *Q;
		Q = (Queue *)malloc(sizeof(Queue));
		Q->elements = (int *)malloc(sizeof(int)*MaxElements;
		Q->size = 0;
		Q->capacity = MaxElements;
		Q->front = 0;
		Q->rear = -1;
		return Q;
}

	// removes from the queue
void Dequeue(Queue *Q){
		
		if (Q->size == 0){
			printf("%s","Queue is Empty\n");
			return 0;
		}
		else{
			Q->size--;
			Q->front++;
			if (Q->front == Q->capacity){
				Q->front = 0;
			}
	}
	return 0;
}
	
	// Tells the foremost value in the queue
int front(Queue *Q){
        
		if(Q->size==0){
                printf("Queue is Empty\n");
                exit(0);
        }
        return Q->elements[Q->front];
}

	// Adds to the queue
void Enqueue(Queue *Q,int element){
        
		if(Q->size == Q->capacity){
                printf("Queue is Full\n");
        }
        else{
                Q->size++;
                Q->rear = Q->rear + 1;
                if(Q->rear == Q->capacity){
                        Q->rear = 0;
                }
                Q->elements[Q->rear] = element;
        }
        return;
}





