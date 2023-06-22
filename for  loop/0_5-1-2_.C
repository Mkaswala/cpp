#include<stdio.h>
int ser()
{
  float i;
  int n,t=1;
  printf("Enter value of n:");
  scanf("%d",&n);
  for(i=0.5;i<=n;i++)
  {

	printf("%.1f,%d,",i++,t++);
	t+=3;
  }	
}
int main()
{
 	ser();
}
