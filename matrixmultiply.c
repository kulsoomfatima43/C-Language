#include<stdio.h>
int main()
{
    int m1[3][3],m2[3][3],i,j,k,m3[3][3];
	printf("\nEnter elements of 1st matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("\nEnter elements of 2nd matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			m3[i][j]=0;
			for(k=0;k<3;k++)
			{
				m3[i][j]=m3[i][j]+m1[i][k]+m2[i][k];
			    printf("%d\t",m3[i][j]);
			}
	    }
	printf("\n");
    }
return 0;
}	
