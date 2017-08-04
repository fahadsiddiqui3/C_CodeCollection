#include<stdio.h>
main(int argc,char **argv)
{
	FILE *fp1,*fp2;
	char ch;
	if(argc<3)
	{
	if(argc==1)
	printf("fcpy:missing file operand\n");
	else printf("fcpy:missing destination file operand after '%s'\n",argv[1]);
	return;

	}

	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"w");
	
	while((ch=fgetc(fp1))!=EOF)
	{
		fputc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	remove(argv[1]);

	
}
