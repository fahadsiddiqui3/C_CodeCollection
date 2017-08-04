#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
	FILE *fp;
	char *buf=0;
	int i,size;
	fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
	printf("File not found\n"); return;
	}
	fseek(fp,0,2);
	size=ftell(fp);
	
	buf=calloc(1,size+1);
        fseek(fp,0,0);
	fread(buf,size,1,fp);

	fclose(fp);

	for(i=0;buf[i];i++)
		if((buf[i]==' ') && (buf[i+1]==' '))			
               {
			memmove(buf+i,buf+i+1,strlen(buf+i+1)+1);
                    i--;
              }
	
	puts(buf);	



	fp=fopen(argv[1],"w");


	for(i=0;buf[i];i++)		
	fprintf(fp,"%c",buf[i]);
	

	fclose(fp);

}
