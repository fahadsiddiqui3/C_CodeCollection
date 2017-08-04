#include<stdio.h>
#include<string.h>

//program to test two string are anagram 


void RemoveNonAlphabet(char *);
void toUpper(char *);
void sort(char *);

main()
{
	char s1[100],s2[100];
	char temps1[100],temps2[100];
	puts("Enter s1");
	gets(s1);
	puts("Enter s2");
	gets(s2);
	
	strcpy(temps1,s1);
	strcpy(temps2,s2);


	RemoveNonAlphabet(temps1);
	RemoveNonAlphabet(temps2);

	toUpper(temps1);
	toUpper(temps2);

	sort(temps1);
	printf("sorted tem %s\n",temps1);
	sort(temps2);
	printf("sorted temps2 %s\n",temps2);

	if(strcmp(temps1,temps2)==0)
	printf("Anagram\n");
	else
	printf("Not Anagram\n");


}                 


void RemoveNonAlphabet(char *ptr)
{
	int i;
	for(i=0;ptr[i];i++)
	{
	if(!((ptr[i]>='a' && ptr[i]<='z')||(ptr[i]>='A' && ptr[i]<='Z')))
	   memmove(ptr,ptr+i,strlen(ptr+i+1)+1);
	}


}



void toUpper(char *ptr)
{
	int i;
	for(i=0;ptr[i];i++)
	ptr[i]&=~(1<<5);

}


void sort(char *ptr)
{

	int i,j;
	char temp;
	int n=strlen(ptr);
//	for(i=0;i<n-1;i++) 
        for(i=n-1;i>0;i--)
	{	
	  //  for(j=i+1;j<n-1;j++)
	  for(j=0;j<i;j++)
	    {
		if(ptr[j]>ptr[j+1])
		{
		      temp=ptr[j];
		      ptr[j]=ptr[j+1];
		      ptr[j+1]=temp;
		}

	    }


	}



}














