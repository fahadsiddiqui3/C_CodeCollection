#include<stdio.h>
main()
{
	char str[20];
	int i;
	printf("enter string: ");	
	fgets(str,19,stdin); //treats new line as data


	
//	gets(str);   //(base address)




//	scanf("%[^\n]s",str); // using scanf[^\n] used for not taking space as data seperator	




/*	for(i=0;i<20;i++)  ///using loop
	{
		str[i]=getchar();
		if(str[i]==10)
		{
			str[i]=0;			
			break;
		}
	} 
*/

			printf("string entered is %s\n",str);

}
