#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
	FILE *source,*dest;
	int i,size1,size2,n,cnt=1;
	int start;
	char *bufs=0,*bufd=0,ch;

	if(argc!=4)
	{
		if(argc<4)
		{
		printf("Error: Incorrect arggument supplied\n");	
	printf("Usage: ./insertfile <source file> <line> <dest file>\n");
		return;
		}
		else
		printf("Error: Unwanted argument supplied");
		return;

	}
	////////////////////getting size of source////////////
	source=fopen(argv[1],"r");
	fseek(source,0,2);
	size1=ftell(source);
	fseek(source,0,0);

	///////////////////getting size of dest////////////////
	dest=fopen(argv[3],"r");
	fseek(dest,0,2);
	size2=ftell(dest);
	fseek(dest,0,0);
		
	//////////allocating for size source+dest////////////
	bufs=calloc(1,size1+size2+1);
	fread(bufs,size1,1,source); ///////inserting source into alc memory
	fclose(source);

	/////////////allocating for dest////////////////
	bufd=calloc(1,size2+1);
	fread(bufd,size2,1,dest);///////////inserting dest into alc mem//////
	fclose(dest);

	n=atoi(argv[2]);
	
	for(i=0;bufs[i];i++)
	{
		ch=bufs[i];
		if(ch==10 || ch==0)
		cnt++;

		if(cnt==n)
		{
			start=i+1;
			break;
		}


	}
	

	memmove(bufs+start+strlen(bufd),bufs+start,strlen(bufs+start));
	strncpy(bufs+start,bufd,strlen(bufd));

	free(bufd);

	source=fopen(argv[1],"w");
	fprintf(source,"%s",bufs);

	fclose(source);




}
