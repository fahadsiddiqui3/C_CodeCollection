#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma pack(1)
int cnt=0;
struct st{
	char *name;
	char *cont_add;
	struct DOB{
			unsigned int day:5;
			unsigned int month:4;
			unsigned int year:14;
			
			}dob;
	struct ID{
			char org_name;
			unsigned int yoj:7;
			unsigned int batch:4;
			char initial;


		}id;

	};
//////////////////////////for input////////////////////////////////////
char *getstr(char *p)
{
	int i=0;
	do{
		p=realloc(p,(i+1)*sizeof(char));
		p[i]=getchar();
		i++;	
		}while(p[i-1]!=10);
	p[i-1]=0;
	return p;

}
void getdob(struct DOB *p)
{
	int temp;
	printf("Enter day\n");
	scanf("%d",&temp);
	p->day=temp;
	
	printf("Enter month\n");
	scanf("%d",&temp);
	p->month=temp;

	printf("Enter year\n");
	scanf("%d",&temp);
	p->year=temp;
  
}
void getid(struct ID *p)
{
	char temp;int temp1;
	getchar();
	printf("Enter organisation initial:");	
	scanf("%c",&temp);
	p->org_name=temp;

	printf("Enter year of joining: ");
	scanf("%d",&temp1);
	p->yoj=temp1;

	printf("Enter batch: ");
	scanf("%d",&temp1);
	p->batch=temp1;

	printf("Enter initials: ");
	getchar();
	scanf("%c",&temp);
	p->initial=temp;
}
struct st* input(struct st *p)
{
	getchar();
	p=(struct st*)realloc(p,(cnt+1)*sizeof(struct st));//allocating pointr for structure
	if(p==NULL)
	{
		printf("MEMORY FULL");
		exit(0);
	}
	printf("Enter Name:");
	(p+cnt)->name=getstr((p+cnt)->name);
	printf("Enter Contact address:");
	(p+cnt)->cont_add=getstr((p+cnt)->cont_add);
         printf("Enter DOB----:\n");
	getdob(&((p+cnt)->dob));
	printf("Enter ID----:\n");
	getid(&((p+cnt)->id));
	cnt++;
 return p;
}
/////////////////////////////end of input////////////////////////////
///////////////////////////////print//////////////////////////
void print(struct st *p)
{
	int i;
	for(i=0;i<cnt;i++)
	{
	printf("\nName-: %s\n",(p+i)->name);
	printf("DOB-: %u/%u/%u\n",p[i].dob.day,p[i].dob.month,p[i].dob.year);
	getchar();
    printf("ID-: %c%u%u%c\n",p[i].id.org_name,p[i].id.yoj,p[i].id.batch,p[i].id.initial);
	printf("Address-: %s\n",(p+i)->cont_add);

	}

}
/////////////////////////////////////////////////////////////////////

struct st* delete(struct st *p)
{
	int i,flag=0;
	char *name2del;
	printf("Enter name to delete\n");
	name2del=getstr(name2del);
	for(i=0;i<cnt;i++)
	{
	if(strstr((p+i)->name,name2del))
		{
		free((p+i));
		memmove(p+i,p+i+1,(cnt-i-1)*sizeof(struct st));
		p=realloc(p,(cnt-1)*sizeof(struct st));
		flag=1;
		cnt--;
		}


     }

	if(i==cnt && flag==0)
	printf("Not Found\n");

	return p;


}



main()
{
	struct st *db=NULL;
	char choice;
	while(1)
	{
		printf("\n************MENU************\n");
		printf("i:input\n");
		printf("p:print\n");
		printf("d:delete\n");
		printf("s:sort\n");
		printf("q:quit\n");
		printf("Enter you choice: ");
		scanf(" %c",&choice);
		switch(choice)
		{
			case 'i':db=input(db);break;
			case 'p':print(db);break;
			case 'd':db=delete(db);break;
//			case 's':sort(db);break;
			case 'q':return;
			default :printf("INVALID CHOICE\n");

		}
	
		

	}
	

}


