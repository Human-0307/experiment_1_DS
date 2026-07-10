#include<stdio.h>
#define MAX 100
typedef struct
{
	int arr[MAX];
	int top;
}stack;
void initstack(stack *s)
{
	s->top=-1;
}
void push(stack *s,int val)
{
	
	s->arr[++(s->top)]=val;
	
}
int peek(stack *s)
{
	return s->arr[s->top];
}
int isFull(stack *s)
{
	return s->top==MAX-1;
}
int isEmpty(stack *s)
{
	return s->top==-1;
}
int pop(stack *s)
{
	if(isEmpty(s))
	{
	    printf("stack is empty\n");
	    return -1;
	}
	else
	return s->arr[(s->top)--];
}
int main()
{
	stack s;
	int choice;
	int n;
	initstack(&s);
	printf("...Stack_operations...\n");
	printf("1.push\n2.pop\n3.peek\n4.exit\n");
	printf("Enter your choice : ");
	do
	{
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the number to push :\n");
				scanf("%d",&n);
				push(&s,n);
				break;
			case 2:
			    printf("using pop function\n");
				printf("%d\n",pop(&s));
				break;
			case 3:
			    printf("using peek function\n");
				printf("%d\n",peek(&s));
				break;
			case 4:
				printf("Exiting...\n");
				break;
			default:
				printf("invalid choice \n");
		}
	}while(choice!=4);
	return 0;
	
}
