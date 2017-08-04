#include<stdio.h>
#include<string.h>

main(int argc,char **argv)
{
	FILE *fp;
	char *ptr;
	char temp[100];
	int line=1,flag=0,cntstr=0;
	fp=fopen(argv[2],"r");
	if(fp==NULL)
	{
	printf("ERROR:File not found\n");
	return;
	}
	
	
	while(fgets(temp,100,fp)) //getting lines of fp in temp
	{
		ptr=temp;
		while(ptr=(strstr(ptr,argv[1])))
		{
		cntstr++;
		flag=1;	
		ptr+=strlen(argv[1]);
		}
		if(flag==1)
		printf("found %d times in line %d\n",cntstr,line);
		
		cntstr=0;
		line++;
		flag=0;
	}
	

	fclose(fp);
    
}
