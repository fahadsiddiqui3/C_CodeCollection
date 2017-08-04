#include<stdio.h>
#include<string.h>
int cnt=0;
const int MAX=20;

void input(char (*db)[20])
{
		
  while(getchar()!=10);
	if(cnt==MAX)
	{
		printf("MEMORY FULL");
		return;
	}	

	puts("Enter input");	
	gets(db[cnt]);
	cnt++;	
return;
}

void print(char (*db)[20])
{

  while(getchar()!=10);

	int i;
	for(i=0;i<cnt;i++)
	printf("%s\n",db[i]);
	return;	
}

void delete(char (*db)[20])
{

	while(getchar()!=10);
	int pos;
	
	char name2delete[20];
	int i;
	puts("Enter pos to delete");
	scanf("%d",&pos);

	memmove(db,db+pos+1,(cnt-pos-1)*20);
	printf("delete");
	cnt--;
	


/*	for(i=0;i<cnt;i++)
		
		if(strstr(db[i],name2delete))
			{
				memmove(db,db+i+1,(cnt-i-1)*20);
				printf("Deleted:%s\n",name2delete);
				cnt--;	
				return;
			}

				if(i==cnt){
				printf("Name not found\n");
*/				

return;

}
void search(char (*db)[20])
{

	while(getchar()!=10);
	int i,flag=0;
	char search[20];
	printf("Enter name to search: ");
	gets(search);
	for(i=0;i<cnt;i++)
	{
		if(strstr(db[i],search))
		{
		printf("Found: %s at position: %d\n",db[i],i);
		flag=1;}
	}
	
	if(i==cnt && flag==0)	
		printf("NOT FOUND\n");
	
}
void edit(char (*db)[20])
{
	int pos;
	while(getchar()!=10);
	printf("Enter postion to edit");
	scanf("%d",&pos);
	puts("Edit the name ");
	while(getchar()!=10);
	gets(db[pos]);
	printf("Edited at postion: %d with %s\n",pos,db[pos]);

}
void sort(char (*db)[20])
{
	int i,j,k;
	char temp[20];
	while(getchar()!=10);

	int n;
	for(i=0;i<cnt-1;i++)
	  for(j=i+1;j<cnt;j++)
		{
		if((strcmp(db[i],db[j]))>0)
                	{
			  strcpy(temp,db[i]);								  strcpy(db[i],db[j]);
			  strcpy(db[j],temp);
					
        
               		 }	
		}
}

main()
{
	char db[20][20],choice;
	while(1)
	{
		printf("MENU\n");
		printf("i:input\n");
		printf("p:print\n");
		printf("f:search\n");
		printf("d:delete\n");
		printf("e:edit\n");
		printf("s:sort\n");
		printf("q:quit\n");
		printf("Enter your choice:");
		scanf("%c",&choice);
		
		switch(choice)
			{
			    case 'i':input(db);break;
			    case 'p':print(db);break;
			    case 'd':delete(db);break;
			    case 'f':search(db);break;
			    case 'e':edit(db);break;
			    case 's':sort(db);break;
			    case 'q':return;
			    default:printf("Invalid choice\n");
			}	

	}

while(getchar()!=10);
}
