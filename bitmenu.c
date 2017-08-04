#include<stdio.h>
void print(int data)
{	
	int i;
 	printf("data =%d\n",data);
	printf("Binary");
	for(i=31;i>=0;i--)
	{	
		printf("%d",(data>>i)&1);
	}		
			printf("\n");
	return 0;
}

int bitposition()
{	int bitpos;
	printf("Enter bit position from (0 to 31): \n");
	scanf("%d",&bitpos);
	return bitpos;
}

void testbit(int data)
{
	int bit;
	bit=bitposition();
	data&(1<<bit)?printf("This bit position is SET\n"):printf("This bit position is clear\n");
	return 0;
}

void setbit(int data)
{
	int bit;
	bit=bitposition();
	data|=(1<<bit);
	printf("The bit is set, Data is now: %d\n",data);
	return 0;
}

void clearbit(int data)
{
	int bit;
	bit=bitposition();
	data&=~(1<<bit);
	printf("The bit is clear, Data is now: %d\n",data);
	return 0;

}

void reversebit(int data)
{
	int bit,left,right,m,n;
	print(data);
	for(left=31,right=0;left>right;left--,right++)
	{
		m=(data>>left)&1;
		n=(data>>right)&1;
		if(m!=n) //test the left and right bit value if diff
		{
			data^=(1<<left);    //swapping left and right
			data^=(1<<right);   //swapping left and right
		}

	}
	print(data);
	return 0;
}


void compbit(int data)
{
	int bit;
	bit=bitposition();
	data^=(1<<bit);
	printf("Bit is complimented, Data is now: %d\n",data);
        return 0;
}



main()
{
	int data;char choice;
	while(1)
	{
		printf("MENU:\nI/i:Input again\nT/t:Test the bit\nS/s:Set the bit\nC/c:clear the bit\nM/m:Compliment the bit\n:R/r:Reverse the bits\nP/p:Print data\nQ/q:Quit\n");
		scanf("%c",&choice);
         	choice|=(1<<5);

		switch(choice)
		{
		Input:	case 'i':printf("Enter the data:\n");
				 scanf("%d",&data);
				if(data==0)
					{
					printf("Invalid data!!\n");
					goto Input;	}
				printf("The data entered is:%d\n",data);
		  			break;
			case 't':testbit(data);
				break;
			case 's':setbit(data);
				break;
			case 'c':clearbit(data);
				break;
			case 'm':compbit(data);
				break;
			case 'r':reversebit(data);
				break;
			case 'p':print(data);
				break;
			case 'q':return 0;
				break;
		}

	while(getchar()!=10);
		
	}


}
