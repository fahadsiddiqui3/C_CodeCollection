#include<stdio.h>
//program to insert an array of 100 characters supplied between 0-127 and printing number of alphabets, numeric characters and special character

void insert(int ch[],int *n)
{
		srand(time(0));
	int index;
	for(index=0;index<(*n);index++)
	{
		ch[index]=rand()%128;
	}

}

void print(int ch[],int*n)
{
	int index;
	for(index=0;index<(*n);index++)
	printf("%c ",ch[index]);
	printf("\n");

}

void check(int ch[],int*cnta,int*cntn,int*cnts,int*n)
{
	int index;
	for(index=0;index<(*n);index++)
	{
         if((ch[index]>='A'&&ch[index]<='Z')||(ch[index]>='a'&&ch[index]<='z'))
		(*cnta)++;
	
	else if(ch[index]>=0 && ch[index]<=9)
		(*cntn)++;
	else (*cnts)++;

	}
	
	
}


main()
{
	int ch[100];
	int cnta=0,cntn=0,cnts=0;
	int index,n;
	n=sizeof(ch)/sizeof ch[0];
	insert(ch,&n);
	print(ch,&n);
	check(ch,&cnta,&cntn,&cnts,&n);
	printf("No. of alphabets:%d\n",cnta);
	printf("No. of numbers: %d\n",cntn);
	printf("No. of special characters: %d\n",cnts);


}
