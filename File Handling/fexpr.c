#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int checknum(char p)
{
	if((p>='0')&&(p<='9'))
	return 1;
	else return 0;
}

int checkop(char operator)
{

	switch(operator)
	{
		case '+': /* Fall Through*/
		case '-': /* Fall Through*/
		case '*': /* Fall Through*/
		case '/': /* Fall Through*/
		case '%': /* Fall Through*/
		case '^': return 1;
		default : return 0;
	}

	
}



main(int argc,char **argv)
{
	FILE *fp,*fp2;
	//char res;
	int i=0,flags1=0,flags2=0,flagop=0;
	int sum1=0,sum2=0;
	char op;
	char *str;
	if(argc<2)
	{
		printf("Error: Expression file name not supplied\n");
		printf("Usage: ./fexpr <file name>\n");
		return;
	}
	
	fp2=fopen("test","w");
	fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("File not found\n");
		return;
	}	
	str=calloc(1,50*sizeof(char));
	while(fgets(str,50,fp))
	{
		while(str[i])
			{
				if(checknum(str[i]) && flagop==0)
				{
					sum1=sum1*10+str[i]-48;					
				}
				if((checkop(str[i])) && flags1==0)
				{
					op=str[i];
					flagop=1;
					flags1==1;	
				}
				
				if(checknum(str[i]) && flagop==1)
				{
					sum2=sum2*10+str[i]-48;
					flags1=1;
				}

				i++;

			}

		switch(op)
		{
			case '+':		fprintf(fp2,"%d\n",sum1+sum2);
					break;
		
			case '-':
				fprintf(fp2,"%d\n",sum1-sum2);
					break;

			case '*':
				fprintf(fp2,"%d\n",sum1*sum2);
					break;
			
			case '/':
				fprintf(fp2,"%d\n",sum1/sum2);
					break;

			case '%':
				fprintf(fp2,"%d\n",sum1%sum2);
					break;


              	}

		flags1=0;flags2=0;flagop=0;
		sum1=0;	sum2=0;	op='\0'; i=0;



	}
	fclose(fp);
	fclose(fp2);
	fp2=fopen("test","r");
	fp=fopen(argv[1],"w");
	while((fscanf(fp2,"%d",&sum1))!=EOF)
		{ 
			fprintf(fp,"%d\n",sum1);

		}
	fclose(fp);
	fclose(fp2);
	remove("test");
}
