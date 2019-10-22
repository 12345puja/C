#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	a=b;
	b=c;
	c=a;
	printf("after swapping,a=%d,b=%d",a,b);
}
