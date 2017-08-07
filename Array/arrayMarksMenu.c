#include<stdio.h>
main()
{
	int marks[20],index,n;
	int tempmax=-1,templow=101,tempindex;
	char ch;
	while(1)
  	 {
		printf("\nMENU:\ni:Input\np:Print\nh:Find highest\nl:Find lowest\nq:quit\n");
		scanf("%c",&ch);
		n=sizeof (marks)/sizeof marks[0];
		srand(getpid());
		switch(ch)
		{
			case 'i': for(index=0;index<n;index++)
					 marks[index]=rand()%100;
				  printf("You have supplied: ");

				  for(index=0;index<n;index++)
					 printf("%d ",marks[index]);
				  break;

			case 'p': printf("Supplied marks:");
				  for(index=0;index<n;index++)
					 printf("%d ",marks[index]);
				  break;

			case 'h': for(index=0;index<n;index++)
				  {
					if(marks[index]>tempmax)
					{
					    tempmax=marks[index];
					    tempindex=index;
					}

				  }

			printf("The highest is: %d : marks[%d]",tempmax,tempindex);
				break;

			case 'l': for(index=0;index<n;index++)
				{
				   if(marks[index]<templow)
					{
					    templow=marks[index];
					    tempindex=index;
					}

				}
			printf("The lowest is: %d: marks[%d]",templow,tempindex);
				break;

			case 'q': return 0;
         	 }
		
  		 while(getchar()!=10);
     	}
}
