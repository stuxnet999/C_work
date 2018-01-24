#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char *argv[])
{
	if (argc == 2)
		{
		int b, c,d =0,e=0;
		b = atoi(argv[1]);
		while (b!=0)
    			{
    				b = b/10;
    				++e;
    			}
		b = atoi(argv[1]);
		while (b!=0)
    			{
    				c = b%10;
    				d = d+ pow(c,e);
    				b = b/10;
    			}
		if (d== atoi(argv[1]))
    			{
    				printf("The no. is an armstrong number\n");
    			}
		else
			{
				printf("It isn't.\n");
			}
		}
	return 0;
}

