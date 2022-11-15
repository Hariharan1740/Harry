#include<stdio.h>
#include<stdlib.h>
int isprime(int start,int number)
{
	if(number==start)
	{
		return 0;
	}
	else if(number%start==0)
	{
		return 1;
	}
	else
	{
		return isprime(start+1,number);
	}
}
int main()
{
	int index=0;
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	int start=2;
	int rem=0;
	rem=isprime(start,n);
	if(rem==0)
	{
		printf("%d is prime \n",n);
	}
	else
	{
		printf("%d is not prime\n",n);
	}
	return 0;
}

