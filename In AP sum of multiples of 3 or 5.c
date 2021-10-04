#include<stdio.h>
void main()
{
	int n,multiples_of_3,multiples_of_5,sum_of_multiples_of_3,sum_of_multiples_of_5;
	int multiples_of_15,sum_of_multiples_of_15;
	scanf("%d",&n);
    multiples_of_3=n/3;
	sum_of_multiples_of_3=multiples_of_3*(3+999)/2;
	multiples_of_5=n/5-1;
	sum_of_multiples_of_5=multiples_of_5*(5+995)/2;
	multiples_of_15=n/15;
	sum_of_multiples_of_15=multiples_of_15*(15+990)/2;
	printf("Sum of multiples of 3 or 5 less than %d = %d",n,sum_of_multiples_of_3+sum_of_multiples_of_5-sum_of_multiples_of_15);
}
