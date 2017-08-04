#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	FILE *fp;
	char **p=0,*temp;
	char ch;
	int i,j;
	int linecnt=0;
	if(argc!=2)
	{
		printf("Usage: ./filesortline <File name>\n");
		return;
	}
	
	fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("File not found\n");
		return;
	}
	

	while(!feof(fp))
	{
		p=realloc(p,(linecnt+1)*sizeof(char*));
		p[linecnt]=0;
		i=0;
		do{
			p[linecnt]=realloc(p[linecnt],i+1);
			ch=fgetc(fp);
			if(ch!=EOF)
				{
					p[linecnt][i]=ch;			
						i++;
					}


				}while((ch!=10) && (ch!=EOF));
				p[linecnt]=realloc(p[linecnt],i+1);
				p[linecnt][i]=0;

		linecnt++;
	}	

	fclose(fp);

//	for(i=0;i<linecnt;i++)
//		printf("%s",p[i]);

	for(i=0;i<linecnt-1;i++)
		for(j=i+1;j<linecnt-1;j++)
			{
				if( (strlen(p[i])) > ( strlen(p[j]) ) )
				{

					temp=p[i];
					p[i]=p[j];
					p[j]=temp;					

				}

			}

	fp=fopen(argv[1],"w");     

       for(i=0;i<linecnt-1;i++)	
          fprintf(fp,"%s",p[i]);

	fclose(fp);



}
