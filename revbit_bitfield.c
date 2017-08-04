#include<stdio.h>
#pragma pack (1)
union data{

	unsigned 	char bit7:1;
	unsigned	char bit6:1;
	unsigned	char bit5:1;
	unsigned	char bit4:1;
	unsigned	char bit3:1;
	unsigned	char bit2:1;
	unsigned	char bit1:1;
	unsigned	char bit0:1;
		
	unsigned	char nummm;
		};


main()
{

	union data num;
	char num1;
	unsigned char temp=0;
	printf("Enter the number\n");
	scanf("%c",&num.nummm);
	
	temp=num.bit0; num.bit0=num.bit7;  num.bit7=temp;
	temp=num.bit1; num.bit1=num.bit6;  num.bit6=temp;
	temp=num.bit2; num.bit2=num.bit5;  num.bit5=temp;
	temp=num.bit3; num.bit3=num.bit4;  num.bit4=temp;

	printf("%d",num.nummm);

}
