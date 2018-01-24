#include<stdio.h>

int max = 10;
int stack[10];
int top = -1;

int isfull()
{
    if (top==max)
        {
            return 0;
        }
    else
        {
            return 1;
        }
}
int isempty()
{
    if (top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pop()
{	
	int a;

	if (isempty())
		{
			printf("Stack is empty\n");
  		}
  	else
  		{
  			a = stack[top];
  			top--;
  			return a;
		}

}
int push(int a)
{
	if (!isfull())
	    {
	        printf("The stack is full.\n");
	    }
	else
	    {
		    top++;
		    stack[top] = a;
	    }
}
int main()
{
	push(4);
	push(5);
	push(3);
	push(6);
	push(0);
	push(9);
	push(2);
	push(1);
	push(7);
	push(8);

	printf("elements present:\n");
	while (top != -1)
    		{
    			printf("%d\n", pop());
    		}
	return 0;
}



