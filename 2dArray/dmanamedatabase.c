#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cnt=0;
char *getastring(char *p)
{
	int i=0;
	printf("Enter name:");
	do{
		p=(char *)realloc(p,i+1);
		
		p[i]=getchar();
		i++;
		}while(p[i-1]!=10);

	p[i-1]=0;
return p;
}

char **input(char **p)
{
	getchar();	
  	p=(char **)realloc(p,(cnt+1)*sizeof(char *));
	if(p==NULL)
	{
		printf("MEMORY FULL");
		exit(0);
	}	
	p[cnt]=getastring(p[cnt]);	
	cnt++;	
return p;
}

void print(char **p)
{

  while(getchar()!=10);

	int i;
	for(i=0;i<cnt;i++)
	printf("%s\n",p[i]);
	return;	
}

char** delete(char **p)
{

	while(getchar()!=10);
	
	char *nm2del=0;
	int i,cntt=0;
	puts("Enter name to delete");
	do{
		nm2del=realloc(nm2del,cntt+sizeof(char));
		if(nm2del != NULL)
			nm2del[cntt++]=getchar();
		else
			free(nm2del);

		}while(nm2del[cntt-1]!=10);
	nm2del[cntt-1]=0;
	
	for(i=0;i<cnt;i++)	
		if(strstr(p[i],nm2del))
			{
				free(p[i]);
				memmove(p+i,p+i+1,(cnt-i)*sizeof(char*));
				printf("Deleted:%s\n",nm2del);
				p=(char **)realloc(p,(cnt-1)*sizeof(char*));
				cnt--;	
				return p;
			}

				if(i==cnt){
				printf("Name not found\n");
				return p;}
}
void search(char **db)
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
void edit(char **db)
{
	getchar();
	int pos;
	while(getchar()!=10);
	printf("Enter postion to edit");
	scanf("%d",&pos);
	puts("Edit the name ");
	while(getchar()!=10);
	gets(db[pos]);
	printf("Edited at postion: %d with %s\n",pos,db[pos]);

}
char **sort(char **p)
{
	int i,j,k;
	char *temp;
	
	while(getchar()!=10);

	for(i=0;i<cnt-1;i++)
	  for(j=i+1;j<cnt;j++)
		{
		if((strcmp(p[i],p[j]))>0)
                	{
			  temp=p[i];
			p[i]=p[j];						  			p[j]=temp;
					 
               		 }	


		}
return p;

}

main()
{
	char **db=0,choice;
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
			    case 'i':db=input(db);break;
			    case 'p':print(db);break;
			    case 'd':db=delete(db);break;
			    case 'f':search(db);break;
			    case 'e':edit(db);break;
			    case 's':db=sort(db);break;
			    case 'q':return;
			    default:printf("Invalid choice\n");
			}	

	}

while(getchar()!=10);
}
