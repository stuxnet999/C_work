#include<stdio.h>

int main()
{
	int a;
	int b;
	int c;
	printf("Enter 2 numbers: \n");
	scanf("%d%d",&a,&b);
	printf("please enter what operation you want to perform on them: \n");
	printf("1 to multiply.\n 2 to add.\n 3 to subtract.\n 4 to divide\n");
	scanf("%d",&c);
	switch(c) {
	case 1:
		printf("%d\n", a*b);
		break;
	case 2:
		printf("%d\n", a+b);
		break;
	case 3:
		printf("%d\n", (a-b));
		break;
	case 4:
		printf("%d\n", a/b);
		break;
	default:
		printf("Invalid operation\n");
		break;
		}
}
	
	


