#include<stdio.h>
#include<string.h>
int cnt=0;
void input(char (*p)[20],int n)
{
	srand(time());
	getchar();
	int r1,r2,i,j;
	r1=rand()%n+1;
	for(i=0;i<r1;i++)
	{
	   for(j=0,r2=rand()%19+1;j<r2;j++)
		p[i][j]=rand()%26+97;

		p[i][j]=0;
		cnt=r1;		
	}
return;
}

void print(char (*p)[20])
{
	int i;
	for(i=0;i<cnt;i++)
	printf("%s\n",p[i]);
return;
}
int findlongest(char **p)
{
	int i;
	int templen=0,tempindex;
	for(i=0;i<cnt;i++)
	if(strlen(p[i])>templen)
	{
		templen=strlen(p[i]);
		tempindex=i;

	}

return tempindex;

}

void sort(char **ptr)
{
	int i,j;
	char temp[20];
	for(i=0;i<cnt-1;i++)
	   for(j=i+1;j<cnt;j++)
		if(strcmp(ptr[i],ptr[j])>0)
			{
			 	strcpy(temp,ptr[i]);
				strcpy(ptr[i],ptr[j]);
				strcpy(ptr[j],temp);

			}
return;
}

void search(char **ptr)
{
	int i;
	int flag=0;
	char str[20];
	printf("Enter string to search\n");
	getchar();
	gets(str);
	for(i=0;i<cnt;i++)
		if(strstr(ptr[i],str))
		{		
			flag=1;	
			printf("found at %d... %s\n",i,ptr[i]);
		}
	
		
	if(i==cnt && flag==0)
	printf("Not found\n");	

return;

}
main()
{
	char str[10][20];
	char *ap[10];
	int ch,i,lng;
	int n=sizeof(str)/sizeof*str;
	for(i=0;i<10;i++)
		ap[i]=str[i];


	while(1)
	{
		printf("\n1:input\n");
		printf("2:print\n");
		printf("3:findlongest\n");
		printf("4:sort\n");
		printf("5:search\n");
		printf("0:quit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: input(str,n);break;
			case 2: print(str);break;
			case 3: lng=findlongest(ap);
				printf("longest string: %s\n",str[lng]);
				break;
			case 4: sort(ap); printf("Sorted\n");
				break;
			case 5: search(ap); printf("in main\n");
				break;
			case 0: return;
			default: printf("Invalid choice\n");
				 

		}



	}

}
