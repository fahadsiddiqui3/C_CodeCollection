#include<stdio.h>
main(int argc,char **argv)
{
	FILE *fp;
	char ch;
	int cnt_line=0,cnt_word=0,cnt_char=0;
	if(argc<2)
	{
		printf("fwc:Too few operands\n");
		return;
	}
	
	fp=fopen(argv[1],"r");

	while((ch=fgetc(fp))!=EOF)
	{
        	if(ch=='\n')
		(cnt_line)++;
			
		if(ch==' ')
   		 (cnt_word)++;

		 (cnt_char)++;
	}	

	
	printf("%d %d %d %s\n",cnt_line,cnt_word,cnt_char,argv[1]);

	fclose(fp);

}
