#include<stdio.h>
void main()
{
	int firstTerm=0,secondTerm=1,nextTerm=0,sum=0,sequenceUpto;
	printf("Enter a number to show the fabonacci sequence upto the given number.\n");
	scanf("%d",&sequenceUpto);
	while(firstTerm+secondTerm<=sequenceUpto)
	{
		nextTerm=firstTerm+secondTerm;
		if(nextTerm%2==0)
		{
			sum+=nextTerm;	
		}
		firstTerm=secondTerm,secondTerm=nextTerm;
	}
	printf("%d",sum);
}
