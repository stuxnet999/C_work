#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c,d =0,e=0;
	printf("enter the number:");
	scanf("%d", &a);
	b = a;
	while (b!=0)//while loop
    		{				
    			b = b/10;
    			++e;
    		}
	b = a;
	while (b!=0)
    		{
    			c = b%10;
    			d = d+ pow(c,e);
    			b = b/10;
    		}
	if (d==a)
    		{
    			printf("The no. is an armstrong number\n");
    		}
	else
		{
			printf("It isn't.\n");
		}
}

