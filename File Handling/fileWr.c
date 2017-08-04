#include<stdio.h>
main(int argc,char **argv)
{
	FILE *fp;
	char ch;
	if(argc<2){
	printf("Error:file name\n");
		return;
		}

	fp=fopen(argv[1],"w");
	//if file non-existing,will be created
	//if file existing ,then truncated to zero
	//writing only permitted;reading not allowed

	printf("Enter data to write into file (end with ctrl+d):");
	while((ch=getchar())!=EOF)
	fputc(ch,fp);

	fclose(fp);
	printf("\n***file saved***\n");



}
