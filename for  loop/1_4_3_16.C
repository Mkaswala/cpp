#include<stdio.h>
int ser()
{
	int i,n=0,t=2;
	printf("Enter value ofi:");
	scanf("%d",&i);
	for(n=1;n<=i;n++)
	{
		printf("%d,%d,",n++,t*t);
		t++,t++;
	}
}
int main()
{
	ser();
}