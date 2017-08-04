#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cnt=0;
char *getastring(char *p)
{
	int i=0;
	do{
		p=(char*)realloc(p,i+1);
		p[i]=getchar();

	}while(p[i++]!=10);
	p[i-1]=0;
	return p;
}
char ***input(char ***p)
{

	p=(char***)realloc(p,(cnt+1)*sizeof(char**));//allocating 2d array pointer
	
	p[cnt]=(char**)realloc(p[cnt],(cnt+1)*sizeof(char*));//allocating 1d array pointer

	puts("Enter name: ");
	getchar();
		p[cnt][0]=getastring(p[cnt][0]);

	puts("Enter Number: ");
		p[cnt]=(char**)realloc(p[cnt],(cnt+2)*sizeof(char*));//allocating 2d array pointer for index 1
		p[cnt][1]=getastring(p[cnt][1]);

	cnt++;
	return p;
}

void print(char ***ptr)
{
	int i;
	for(i=0;i<cnt;i++)
		printf("%s %s\n",ptr[i][0],ptr[i][1]);
 getchar();	
return;
}

void sort(char ***ptr)
{
	int i,j;
//	getchar();
	char *temp;
	for(i=0;i<cnt-1;i++)
	   for(j=i+1;j<cnt;j++)
		if(strcmp(ptr[i][0],ptr[j][0])>0)
			{
				temp=ptr[i][0];
				ptr[i][0]=ptr[j][0];
				ptr[j][0]=temp;			

			}
	printf("Sorted\n");

  	getchar();
return;
}
void search(char ***ptr)
{
	char *s;
	int i,flag=0;
	puts("Enter name to search");
	getchar();
	s=getastring(s);

	for(i=0;i<cnt;i++)
		if(strstr(ptr[i][0],s))
			{
				printf("Found: %s \t %s\n",ptr[i][0],ptr[i][1]);
				flag=1;
			}
	if(i==cnt && flag==0)
	printf("Not found\n");

getchar();
return;

}

char*** delete(char ***ptr)
{
	int pos;
	printf("Enter position to delete:");
	scanf("%d",&pos);
	free(ptr[pos]);
	memmove(ptr+pos,ptr+pos+1,(cnt-pos)*sizeof(char**));
	ptr=realloc(ptr,(cnt-1)*sizeof(char**));
	cnt--;
	printf("Deleted\n");

getchar();
return ptr;

}


main()
{
	char ***db=0;
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
			case 'i': db=input(db);break;
			case 'p': print(db);break;
			case 's': sort(db);break; 
			case 'f': search(db);break;
			case 'd': db=delete(db);break;
			case 'q': return;
			default : printf("invalid choice\n");


		}


	}


}



