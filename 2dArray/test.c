#include<stdio.h>
void insert(int(*p)[4],int row,int col)
{
	int i,j;
	srand(getpid());
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)			
	        	p[i][j]=rand()%50+1;
			
}
void print(int(*p)[4],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++,printf("\n"))
		for(j=0;j<col;j++)	
			printf("%4d",p[i][j]);
}


main()
{
	int a[3][4]; //={{111,222,333,444},{11,22,33,44},{1,2,3,4}};

	int row,col,i,j;
	row=sizeof a/sizeof*a;
	col=sizeof*a/sizeof**a;

	insert(a,row,col);
	print(a,row,col);	
	
}
