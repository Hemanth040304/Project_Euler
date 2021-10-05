#include <stdio.h>
void main()
{
    int a,b,max_count=0,current_count,result;
    long long temp;
	printf("Enter range.\n");
	scanf("%d%d",&a,&b);
	while(a<=b)
	{
	    current_count=0;
		temp=a;
		while(temp>1)
		{
			if(temp%2==0)
			{
				temp=temp/2;
			}
			else
			{
				temp=3*temp+1;
			}
			current_count++;
			if(current_count>max_count)
			{
			    max_count=current_count;
			    result=a;
			}
		}
		a++;
	}
		printf("%d has the longest collaz sequence %d",result,max_count);
}
