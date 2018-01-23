#include<stdio.h>
#include<string.h>

int main()
{
	char s[30], b[30];
	fgets (s, 30, stdin);
	fgets(b, 30, stdin);
	printf("%ld is the length of 1st string\n", strlen(s));
	printf("%ld is the length of 2nd string\n", strlen(b));
	if (strcmp(s,b)==0)
	{
	printf("Both the strings are equal\n");
	}
	else if(strcmp(s,b)>1)
	{
	printf("1st string is greater than the second.\n");
	}
	else
	{
	printf("1st string is smaller than the second.\n");
	}
	strcat(s,b);
	printf("The concatenated string is %s", s);
    return 0;
}
