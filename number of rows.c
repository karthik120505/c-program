//Program to print the following Pattern.Get the number of rows from the keyboard
#include<stdio.h>
#include<conio.h>
int main()

{
	int i,j,n;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)

	{
		for(j=n;j>i;j--)

		{
			printf(" ");

		}
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");

	}
	return 0;
}
