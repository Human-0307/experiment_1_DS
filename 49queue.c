#include<stdio.h>
#define MAX 20
typedef struct{
	int arr[MAX];
	int front;
	int rear;
}queue;
void initQueue(queue *q)
{
	q->front=0;
	q->rear=0;
}
void enqueue(queue *q,int val)
{
	if(isFull(q))
	{
		printf("queue is already full.\n");
	}
	else
	{
		q->arr[q->rear]=val;
		q->rear++;
	}
}
void dequeue(queue *q)
{
	if(isEmpty(q))
	{
		printf("queue is empty\nthere is no value.\n");
	}
	else
	{
		
		q->front++;
	}
}
int peekFront(queue *q)
{
	if (isEmpty(q))
    {
        printf("Queue is empty.\n");
        return -1;
    }
	return q->arr[q->front];
}
int isFull(queue *q)
{
	return q->rear==MAX;
}
int isEmpty(queue *q)
{
	return q->front==q->rear;
}
void display(queue *q)
{
	int i=0;
	for( i=q->front;i<q->rear;i++)
	{
		printf("%d\n",q->arr[i]);
	}
}
int main()
{
	queue q;
	initQueue(&q);
	int choice;
	int a;
	printf("...Queue_operations...\n");
	printf("1.enqueue\n2.dequeue\n3.peek\n4.display\n5.exit\n");
	printf("Enter your choice : ");
	do
	{
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the number for enqueuing :");
				scanf("%d",&a);
				enqueue(&q,a);
				break;
			case 2:
			    printf("using dequeue function\n");
				dequeue(&q);
				break;
			case 3:
			    printf("using peek function\n");
				printf("%d\n",peekFront(&q));
				break;
			case 4:
				display(&q);
				break;
			case 5:
				printf("Exiting...\n");
				break;
			default:
				printf("invalid choice \n");
		}
	}while(choice!=4);
	return 0;
	
}
