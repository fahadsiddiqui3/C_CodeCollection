#include<stdio.h>
#include<string.h>
#include<termios.h>
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
			char branch;
			char course;
			unsigned int batch:4;
			char initial;


		}id;

	};
//////////////////////////for input////////////////////////////////////
char *getstr(char *p)
{

	int i=0;
	for(i=0;i<rand()%30;i++)
	{
		p=realloc(p,(i+1)*sizeof(char));
		p[i]=rand()%26+97;
	
		}
	
	return p;

}
void getdob(struct DOB *p)
{
	int temp;
	srand(time(0));
	p->day=rand()%31+1;
	
	p->month=rand()%12+1;

	p->year=rand()%100+1980;
	
  
}
void getid(struct ID *p)
{
	srand(time(0));
	
	p->org_name='V';

	p->yoj=rand()%90+10;

	p->batch=rand()%10+1;
	p->branch='H';
	p->course='E';
	p->initial=rand()%26+65;
}


struct st* input(struct st *p)
{
 
	srand(time(0));
	p=(struct st*)realloc(p,(cnt+1)*sizeof(struct st));//allocating pointr for structure
	if(p==NULL)
	{
		printf("MEMORY FULL");
		exit(0);
	}
	
	//name generation
	(p+cnt)->name=getstr((p+cnt)->name);

	//contact address generation
	(p+cnt)->cont_add=getstr((p+cnt)->cont_add);

         //dob generation
	getdob(&((p+cnt)->dob));

	//id generation
	getid(&((p+cnt)->id));

	printf("INSERTED\n");
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
    printf("ID-: %c%u%c%c%u%c\n",p[i].id.org_name,p[i].id.yoj,p[i].id.branch,p[i].id.course,p[i].id.batch,p[i].id.initial);
	printf("Address-: %s\n",(p+i)->cont_add);
	}

}
/////////////////////////////////////////////////////////////////////

struct st* delete(struct st *p)
{
	int i,flag=0;
	char name2del[20];
	printf("Enter name to delete\n");
	scanf("%s",name2del);
	for(i=0;i<cnt;i++)
	{
	if(strstr((p+i)->name,name2del))
		{	
		free((p+i)->name);//only dynamically allocated members should be freed.
		free((p+i)->cont_add);
		memmove(p+i,p+i+1,(cnt-i-1)*sizeof(struct st));
		p=realloc(p,(cnt-1)*sizeof(struct st));
		flag=1;
		cnt--;
		}

     }

	if(i==cnt && flag==0)
	printf("Not Found\n");

	printf("DELETED all entries of %s\n",name2del);

	return p;


}
////////////////////////////////////////////////////////
void sort(struct st * *p)
{
	int i,j;
	struct st *temp;
	for(i=0;i<cnt-1;i++)
		for(j=0;j<cnt-1-i;j++)
			{
			if(strcmp((*p+j)->name,(*p+j+1)->name)>0)
				{
					temp=*(p+j);
					*(p+j)=*(p+j+1);
					*(p+j+1)=temp;

				}

			}

	printf("Sorted");


}
/////////////////////////////////////////////////////////////////////////

void find(struct st *p)
{
	int i,j;
	char str[20];
	struct termios v;
	tcgetattr(0,&v);
	v.c_lflag&=~ICANON;
	tcsetattr(0,TCSANOW,&v);
	///terminal input device buffer made non canonical 
	//if canonical then EOF or EOL char makes the data flushed the app
	printf("Enter name/contact to search: ");
	bzero(str,20);//////setting zero 
	for(i=0;i<19;i++)
	{
		str[i]=getchar();
	for(j=0;j<cnt;j++)
		if(strstr((p+j)->name,str))
		printf("%s\n",(p+j)->name);

	}



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
		printf("f:find\n");
		printf("q:quit\n");
		printf("Enter you choice: ");
		scanf(" %c",&choice);
		switch(choice)
		{
			case 'i':db=input(db);break;
			case 'p':print(db);break;
			case 'd':db=delete(db);break;
			case 's':sort(&db);break;
			case 'f':find(db);break;
			case 'q':return;
			default :printf("INVALID CHOICE\n");

		}
	
		

	}
	

}


