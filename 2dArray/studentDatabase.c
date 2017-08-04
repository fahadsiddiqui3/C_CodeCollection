#include<stdio.h>

void insert(int(*stdmrk)[10],int row,int col)
{
	int i,j;
	srand(getpid());
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)			
	        	stdmrk[i][j]=rand()%101;
}

void highestscore(int (*stdmrk)[10],int row,int col)
{
	int i,j;
	int temp=-1;
	int subject,student;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
		 {
			if(stdmrk[i][j]>temp)
				{
					temp=stdmrk[i][j];
					student=i+1;
					subject=j+1;
				}

		}

     printf("The highest marks is:%d, scored by student%d in subject%d\n",temp,student,subject);
}


void lowestscore(int (*stdmrk)[10],int row,int col)
{
	int i,j;
	int temp=101;
	int subject,student;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
		 {
			if(stdmrk[i][j]<temp)
				{
					temp=stdmrk[i][j];
					student=i+1;
					subject=j+1;
				}

		}

     printf("The lowest marks is: %d, scored by student%d in subject%d\n",temp,student,subject);

}


void failcount(int (*stdmrk)[10],int row,int col)
{
	int i,j;
	int cnt=0;
	int subject,student;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
		 {
			if(stdmrk[i][j]<40)
				{
			            cnt++;
				}

		}

     printf("The number of subject scored less than 40 are: %d\n",cnt);


}


void print(int(*p)[10],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++,printf("\n"))
		for(j=0;j<col;j++)	
			printf("%4d",p[i][j]);
}




main()
{
	int stdmrk[10][10];
	int row,col;
	
	row=sizeof stdmrk/sizeof*stdmrk;
	col=sizeof*stdmrk/sizeof**stdmrk;

	insert(stdmrk,row,col);
	print(stdmrk,row,col);
	highestscore(stdmrk,row,col);
	lowestscore(stdmrk,row,col);
	failcount(stdmrk,row,col);


}		
