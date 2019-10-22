#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
struct node *create_list(struct node *start)
  { 
	int i,n,data;
	printf("enter the no.of nodes:");
	scanf("%d",&n);
	start=NULL;
	if(n==0)
	      return start;
	printf("enter the elements to be inserted:");
	scanf("%d",&data);
	start=addatbeg(start,data);
	for(i=2;i<=n;i++)
	{
		printf("enter the element to be inserted:");
		scanf("%d",&data);
		start=addatend(start,data);
		  }      
		  return start;
    }
}
