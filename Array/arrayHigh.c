#include<stdio.h>
//program for static array returning by a function to main

insert(char *mark)
{
	int i;
	printf("inside insert\n");
	srand(time(0));
	for(i=0;i<20;i++)
	{
		mark[i]=rand()%101;  //inserting from 0 to 100
		printf("%d ",mark[i]);
	}

}

int *findhigh(char *mark)
{
	char *p1;
	p1=mark;
   	static int a[10];
	int i,temp=-1,j=0;

	while(*mark)
	{ 
           if((*mark)>temp)        ///checking highest
		temp=*mark;       //saving highest in temp
		*mark++;	  	
	}
	printf("highest: %d\n",temp);   //printing higest

        	for(i=0;i<20;i++)
        //for saving highest in a if accurence is 1 or more than 1
	{
		if(p1[i]==temp)    
		{
	               a[j]=temp;
			j++;
		}
			
	}
return a;  ///returning address of a

}



main()
{
	char mark[20],choice;
	int i;
	int *h;
	while(1)
    {
	printf("\ni:insert\nh: highest\nq:quit\n");
	printf("enter choice: ");
	scanf("%c",&choice);
	switch(choice)
             {    
        	case 'i':insert(mark);
			  break;
		case 'h':h=findhigh(mark); //collecting array of highest in h
			for(i=0;i<10;i++)
			  printf("%d ",h[i]); //printing a 
			  break;
		case 'q':return;

	     }	
	while(getchar()!=10);
    }
}
