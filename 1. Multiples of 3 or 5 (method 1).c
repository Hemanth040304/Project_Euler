#include<stdio.h>
void main()
{
	int i=1,number=1000,sum=0;
	while(i<number)
	{
		if(i%3==0)
		{
			sum+=i;
		}
		else if(i%5==0)
		{
			sum+=i;
		}
		i++;
	}
	printf("%d",sum);
}
