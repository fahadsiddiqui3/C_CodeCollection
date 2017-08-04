#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdarg.h>
char* itos(int n)
{
	int dig;
	static char str[100];
	int i=0;
	while(n)
	{
		dig=n%10;
		str[i]=dig+'0';
		n=n/10;	
		i++;

	}
	str[i]='\0';	


return str;

}

void myprintf(char* ptr,...)
{
	char *p=ptr,*var_s;
	int var_i,i;
	float var_f;
	double var_d;
	va_list handle;
	va_start(handle,ptr);
	
	for(p;*p;p++)
		{
			if(*p!='%')
			{	
				putchar(*p);
				continue;
			}
			switch(*++p)
			{
				case 'd': var_i=va_arg(handle,int);
					  var_s=itos(var_i);
					  for(i=0;var_s[i];i++)
						putchar(var_s[i]);
					  break;		
			
				case 'f':var_f=va_arg(handle,double);
					 printf("%f",var_f);
					  break;

				case 's':var_s=va_arg(handle,char*);
					 puts(var_s);
					 break;

			}



		}

		va_end(handle);


}

main()
{
	int v=5;
	myprintf("vector:%djik\n",v);
	myprintf("dfufhdufhd\n");
	myprintf("%s","fahad");

}
