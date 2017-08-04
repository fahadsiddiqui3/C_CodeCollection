#include<stdio.h>

// program to insert uppercase and lowercase data in an array
main()
{
	char ch[15];
	char temp;
	int index,n;
	n=sizeof(ch)/sizeof ch[0];
	srand(time(0));
	for(index=0;index<n;index++)
	{
		temp=rand()%128;
		if((temp>='A' && temp<='Z')||(temp>='a' && temp<='z'))
		      ch[index]=temp;
		else
			index--;

	}

	printf("Supplied: ");
	for(index=0;index<n;index++)
		printf("%c ",ch[index]);

	printf("\n");

}
