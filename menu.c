#include<stdio.h>
int sumOfDigits(int data)
{
   int k,sum=0;
  while(data!=0)
	 {
            k=data%10;
	    sum=sum+k;
	    data/=10;	

	}
 return sum;
}

int revDigits(int data)
{
  int k,rev=0;
	while(data!=0)
	{
		k=data%10;
		rev=rev*10+k;
		data/=10;	
	}
   return rev;
}

int cntDigits(int data)
{
    int cnt=0;
   
	{
		do{
			cnt++;
			data/=10;
		  }while(data);
		
	}
    return cnt;
}

int cntOddDigits(int data)
{
	int cnt=0,k;
	while(data!=0)
	{
          k=data%10;
           if((k!=0)&&(k%2==1))
		cnt++;
          data/=10;
	}
      
 return cnt;
}


main()
{
	int data,flag=0,s,r,c,d; char choice;
while(1)
  {
 
	printf("MENU: \ni:> Input integer\n");
	printf("s:> Sum of digit\n");
	printf("r:> reverse digit\n");
	printf("c:> count digit\n");
	printf("o:> no. of odd digits\n");
	printf("q:> quit\n");
	scanf("%c",&choice);

	if (choice=='i')
	{       flag=1;
Input:		printf ("Enter number: \n");
		scanf("%d",&data);
	
     }
        
        printf("enter choice :\n");
	scanf(" %c",&choice);
       if (flag=0)
       {
          printf("No data supplied");
          goto Input;
         }
 
	if(choice=='s')
	  {	
                
		s=sumOfDigits(data);
		printf("The sum of digits is: %d\n",s);
	  }
   else	if (choice=='r')
	    {
		r=revDigits(data);
		printf("Reversed digits is: %d\n",r);
	    }
   else	if (choice=='c')
	      {
			c=cntDigits(data);
			printf("Digit count is: %d\n",c);
	      } 
      
   else if (choice=='o')
		{	
			d=cntOddDigits(data);
			printf("No. of odd digits is: %d\n",d);
		}

   else if (choice=='q')
		{
			return 0;
		}		
 

        
  }
}
