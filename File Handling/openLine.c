#include<stdio.h>

main(int argc,char **argv)
{
	FILE *fp;
	char temp[100];

	int i,n;
	if(argc<3)	
	{
		if(argc==1)
	printf("Error: Line number and file name not supplied\n");
	
		else printf("ERROR: File name not supplied\n");
		return;
	}

	fp=fopen(argv[2],"r");
	
	if(fp==NULL)
	{
		printf("ERROR:file not found\n");
		return;
	}

        n=atoi(argv[1]);
	if(n==0)
	{
		printf("ERROR: Invalid line number\n");
		return;
	}
			
	for(i=0;i<n;i++)
	{
		fgets(temp,100,fp);
	
	}

	printf("%s",temp);


	fclose(fp);


}
