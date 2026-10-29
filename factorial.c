#include<stdio.h>

int main()
{
	int num;
	int count;
	int fact=1;

	printf("enter number: ");
	scanf("%d",&num);

	for(count=1; count<=num; count++)
	{
		fact=fact*count;
	}
	printf("Factorial=%d\n",fact);
}
