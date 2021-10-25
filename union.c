#include <stdio.h>
//#include <conio.h>

void main()
{
	int A[10],B[10],C[10],i,j,k=0,n,m,flag=0;
	printf("Enter the size of array A: ");
	scanf("%d",&n);
	printf("Enter the element of First array A:\n");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter the size of array B: ");
	scanf("%d",&m);
	printf("Enter the element of First array B:\n");
	for(i = 0; i < m; i++)
	{
		scanf("%d",&B[j]);
	}
	for(i = 0;i < n; i++)
	{
		C[k]=A[i];
		k++;
	}
	
	for(i = 0;i < n;i++)
	{
		flag = 0;
		for(j=0;j<m;j++)
		{
			if(B[i]==C[j])
			{
				flag==1;
				break;
			}
			if(flag==0)
			{
				C[k]=B[i];
				k++;
			}
		}
		printf("\nUnion\n");
		for(i=0;i<k;i++)
		{
			printf("%d\n",C[i]);
		}
	}
}

















