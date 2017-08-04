#include<stdio.h>
#include<string.h>
#include<math.h>
void add(char *arg1,char *arg2)
{
	int a,b;
	a=atoi(arg1);
	b=atoi(arg2);
	printf("%d\n",a+b);

}

void substract(char *arg1,char *arg2)
{
	int a,b;
	a=atoi(arg1);
	b=atoi(arg2);
	printf("%d\n",a-b);

}

void modulus(char *arg1,char *arg2)
{
	int a,b;
	a=atoi(arg1);
	b=atoi(arg2);
	printf("%d\n",a%b);

}

void divide(char *arg1,char *arg2)
{
	int a,b;
	a=atoi(arg1);
	b=atoi(arg2);
	printf("%d\n",a/b);

}
void exponent(char *arg1,char *arg2)
{
	int a,b,c;
	a=atoi(arg1);
	b=atoi(arg2);
        c=pow(a,b);
	printf("%d\n",c);
  

}
void mult(char *arg1,char *arg2)
{
	int a,b;
	a=atoi(arg1);
	b=atoi(arg2);
	printf("%d\n",a*b);

}



int checkarg(int argc)
{
	if(argc>=4)
		return 1;

	else
       { 
	printf("calci: Syntax error\n");
 	return 0;
      }

}

int checknumeric(char* arg)
{
        int i;
	for(i=0;arg[i];i++)
		if(arg[i]>='0'&& arg[i]<='9')
		return 1;
		else 
			{
				printf("calci: Non-numeric data detected\n");
				return 0;
			}

}

main(int argc,char **argv)
{
	int v,c,i;
	if((strlen(argv[2]))!=1){
	printf("calci: Syntax error\n");
	return 0;
 	}	
	if(checknumeric(argv[1]) && checknumeric(argv[3]))
	{

 	 	v=checkarg(argc);
		if(v==1)
		{
		
			if(argv[2][0]=='+') add(argv[1],argv[3]);	
		else	if(argv[2][0]=='-') substract(argv[1],argv[3]);	
		else	if(argv[2][0]=='%') modulus(argv[1],argv[3]);	
		else	if(argv[2][0]=='/') divide(argv[1],argv[3]);	
		else	if(argv[2][0]=='^') exponent(argv[1],argv[3]);	
		else	if(argv[2][0]=='*') mult(argv[1],argv[3]);	
		else    printf("calci: Syntax error");
	
			}
		 
	}
  
 return;
}
