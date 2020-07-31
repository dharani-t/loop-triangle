//# loop-triangle
//the program is about how to print a triangle consists of 0's and 1's
#include<stdio.h>
int main()
{
	
	int i,j,n;
	printf("enter the no. of rows:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",j%2);
		}
		printf("\n");
	} return 0;
}
