#include<stdio.h>
#include<stdlib.h>
//program to find no. of vowels in an array
void insert(char*ch,int*n)
{	int index;
	srand(time(0));
	char temp;
	for(index=0;index<*n;index++)
	{
                temp=rand()%128;
		if((temp>='A' && temp<='Z')||(temp>='a' && temp<='z'))
		ch[index]=temp;
		else index--;
	
	}
}

main()
{
	char ch[15];
        char vowel[]={'A','E','I','O','U','a','e','i','o','u'};
	int index,n,cnt=0,vindex;
	n=sizeof (ch)/sizeof ch[0];
	insert(ch,&n);// inserting random characters

	 printf("supplied characters: ");
	    for(index=0;index<n;index++)
	       printf("%c ",ch[index]);	

		for(index=0;index<n;index++)
		{
			for(vindex=0;vindex<10;vindex++) ///comparing character
			{
			  if(ch[index]==vowel[vindex])
				cnt++;
			}
		}
	printf("\nThe number of vowels are: %d\n",cnt);



}
