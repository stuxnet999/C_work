#include<stdio.h>
int main()
{
	int i;
	int n;
	int j;
	int count;
	printf("enter a number: ");
	scanf ("%d",&n);
	i = 2;
	while (i<n)
	{
		j =2;
		count =0;
		while (j <=i/2)
		{
			if((i%j) ==0)
			{
				count = 1;
				break;
			}
			else
			{
				j++;
			}
		}
		if (count==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	return 0;
}
