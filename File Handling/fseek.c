#include<stdio.h>
main()
{
	FILE *fp=0;
	fp=fopen("testfile","r");
	printf("%lu\n",ftell(fp));
	printf("%c\n",fgetc(fp));

	fseek(fp,4,SEEK_CUR);
	printf("%c\n",fgetc(fp));
	printf("%lu\n",ftell(fp));

	
	fseek(fp,3,SEEK_SET);
	printf("%c\n",fgetc(fp));
	fseek(fp,3,SEEK_CUR);

	fseek(fp,-3,SEEK_END);
	printf("%c\n",fgetc(fp));

	fseek(fp,-4,SEEK_CUR);
	printf("%c\n",fgetc(fp));

	fseek(fp,0,SEEK_END);
	printf("%c\n",fgetc(fp));



}
