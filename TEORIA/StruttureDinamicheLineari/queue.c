#include <stdlib.h>
#include <stdio.h>
#define CAPACITY 100

/**
 * Global queue declaration.
 */
int queue[CAPACITY];
unsigned int size  = 0;
unsigned int rear  = CAPACITY - 1;   // Initally assumed that rear is at end
unsigned int front = 0;
int INT_MIN = 0;

void stampa(int [], int);
int enqueue(int);
int dequeue(void);

int main(){
    int n, i;
    printf("Quanti elementi si vogliono inserire: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Inserire elemento: ");
        scanf("%d", &queue[i]);
    }
    stampa(queue, n);
    return 0;
}

void stampa(int queue[], int len){
    int i;
    printf("Elementi presenti\n");
    for(i = 0; i < len; i++){
        printf("%d\t", queue[i]);
    }
    printf("\n");
}

/**
 * Enqueue/Insert an element to the queue. 
 */
int enqueue(int data)
{
    // Queue is full throw Queue out of capacity error.
    if (isFull()) 
    {
        return 0;
    }

    // Ensure rear never crosses array bounds
    rear = (rear + 1) % CAPACITY;

    // Increment queue size
    size++;

    // Enqueue new element to queue
    queue[rear] = data;

    // Successfully enqueued element to queue
    return 1;
}


/**
 * Dequeue/Remove an element from the queue. 
 */
int dequeue()
{
    int data = INT_MIN;

    // Queue is empty, throw Queue underflow error
    if (isEmpty())
    {
        return INT_MIN;
    }

    // Dequeue element from queue
    data = queue[front];

    // Ensure front never crosses array bounds
    front = (front + 1) % CAPACITY;

    // Decrease queue size
    size--;

    return data;
}


/**
 * Checks if queue is full or not. It returns 1 if queue is full, 
 * overwise returns 0.
 */
int isFull()
{
    return (size == CAPACITY);
}


/**
 * Checks if queue is empty or not. It returns 1 if queue is empty, 
 * otherwise returns 0.
 */
int isEmpty()
{
    return (size == 0);
}


/**
 * Gets, front of the queue. If queue is empty return INT_MAX otherwise
 * returns front of queue.
 */
int getFront()
{
    return (isEmpty())
            ? INT_MIN
            : queue[front];
}


/**
 * Gets, rear of the queue. If queue is empty return INT_MAX otherwise
 * returns rear of queue.
 */
int getRear()
{
    return (isEmpty())
            ? INT_MIN
            : queue[rear];
}