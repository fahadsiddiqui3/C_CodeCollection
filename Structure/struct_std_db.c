#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma pack(1)
int cnt=0;
struct st{
	float marks;
	char name[20];
	char id[10];
	struct DOB{
			unsigned int day;
			unsigned int month;
			unsigned int year;
			}dob;
	char cont_add[20];	
	};

struct st* input(struct st *p)
{
    
	printf("Enter name: ");
	scanf("%s",(p+cnt)->name);
	printf("Enter DOB: ");
	printf("Day:");scanf("%d",&(p+cnt)->dob.day);
	printf("Month:");scanf("%d",&(p+cnt)->dob.month);
	printf("Year:");scanf("%d",&(p+cnt)->dob.year);
	printf("Student id:");
	scanf("%s",&(p+cnt)->id);
	printf("marks:");
	scanf("%f",&(p+cnt)->marks);
	printf("Contact address:");
	scanf("%s",(p+cnt)->cont_add);
	
	cnt++;
    //    return p;

}
void print(struct st *p)
{
	int i;
	for(i=0;i<cnt;i++,printf("\n"))
	{
	 printf("Name:%20s   ",(p[i].name));	
         printf("DOB:%2d/%2d/%4d  ",(p+i)->dob.day,(p+i)->dob.month,(p+i)->dob.year);	  	  
	  printf("id:%s  ",(p[i].id));
	  printf("marks:%f   ",((p+i)->marks));
	  printf("address:%s   ",(p[i].cont_add));	
  
	}
//	getchar();
}

void delete(struct st *p) 
{
	int i;
	char name2del[20];
	int flag=0;
	puts("Enter name to delete");
	gets(name2del);
	for(i=0;i<cnt;i++)
	{
		if(strstr(p[i].name,name2del))
			{
			memmove(p+i,p+i+1,(cnt-i-1)*sizeof(struct st));
			cnt--;
			flag=1;
			}

	}
	if(i==cnt && flag==0)
	printf("Not found");

}



main()
{
	struct st db[2];
	char choice;
	while(1)
	{
		printf("\nMENU\n");
		printf("i:input\n");
		printf("p:print\n");
		printf("d:delete\n");
		printf("q:quit\n");
		printf("Enter your choice: ");
		scanf(" %c",&choice);
		
		switch(choice)
		{
			case 'i':input(db);break;
			case 'p':print(db);break;
			case 'd':delete(db);break;
			case 'q':return;
			default :printf("INVALID CHOICE\n");




		}
	
		while(getchar()!=10);
	}



}
