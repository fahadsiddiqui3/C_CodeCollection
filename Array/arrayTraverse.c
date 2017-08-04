#include<stdio.h>
main()
{
	char a[8]={'a','b','c','d'};
	int b[10];
	int n,index;


	n=(sizeof(b)/sizeof b[0]);
	srand(getpid());

	for(index=0;index<n;index++)
  	b[index]=rand()%30-60;

	printf("You have supplied: ");
	for(index=0;index<n;index++)
	printf("%d ",b[index]);

 	printf("\n");
}
