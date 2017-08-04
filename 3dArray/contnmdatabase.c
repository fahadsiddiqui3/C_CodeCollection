#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cnt=0;
void input(char (*ptr)[2][20])
{
	int i;
	puts("Enter name");
	getchar();
	gets(ptr[cnt][0]);
	puts("Enter Number");
	getchar();
	gets(ptr[cnt][1]);
	cnt++;
	return;
}

void print(char (*ptr)[2][20])
{
	int i;
	for(i=0;i<cnt;i++)
		printf("%s \t%20s\n",ptr[i][0],ptr[i][1]);
 getchar();	
return;
}
void swap(char (*arg1)[20],char (*arg2)[20])
{
	char tempname[20];
	char tempnum[20];

	strcpy(tempname,arg1[0]);
	strcpy(arg1[0],arg2[0]);
	strcpy(arg2[0],tempname);

	strcpy(tempnum,arg1[1]);
	strcpy(arg1[1],arg2[1]);
	strcpy(arg2[1],tempnum);
getchar();
return;
}


void sort(char (*ptr)[2][20])
{
	int i,j;
	for(i=0;i<cnt-1;i++)
	   for(j=i+1;j<cnt;j++)
		if(strcmp(ptr[i][0],ptr[j][0])>0)
			{
				swap(ptr[i],ptr[j]);

			}
	printf("Sorted\n");

  	getchar();
return;
}
void search(char (*ptr)[2][20])
{
	char search[20];
	int i,flag=0;
	puts("Enter name to search");
	getchar();
	gets(search);

	for(i=0;i<cnt;i++)
		if(strstr(ptr[i][0],search))
			{
				printf("Found: %s \t %s\n",ptr[i][0],ptr[i][1]);
				flag=1;
			}
	if(i==cnt && flag==0)
	printf("Not found\n");

getchar();
return;

}

void delete(char (*ptr)[2][20])
{
	int pos;
	printf("Enter position to delete:");
	scanf("%d",&pos);
	memmove(ptr+pos,ptr+pos+1,(cnt-pos-1)*40);
	cnt--;
	printf("Deleted\n");

getchar();
return;

}


main()
{
	char db[20][2][20];
	char choice;
	
	while(1)
	{
		printf("\ni:input\n");
		printf("p:print\n");
		printf("s:sort\n");
		printf("f:search\n");
		printf("d:delete\n");
		printf("q:quit\n");
		printf("Enter your choice: ");
		scanf("%c",&choice);
		switch(choice)
		{
			case 'i': input(db);break;
			case 'p': print(db);break;
			case 's': sort(db);break;
			case 'f': search(db);break;
			case 'd': delete(db);break;
			case 'q': return;
			default : printf("invalid choice\n");


		}


	}


}



