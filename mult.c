#include<stdio.h>
main()
{
	int init,max,temp,digcnt=0;
	printf("Enter initial number:");
	scanf("%d",&init);

	printf("Enter max range:");
	scanf("%d",&max);

	if(max<init) ///for swapping if max is greater than min//
	{
	init^=max^=init^=max;
	}
/*	 for(digcnt=0;digcnt<=1;digcnt++)
		{
			digcnt=digcnt/10;
		}
	        digcnt=digcnt+2; */
	
     		while(init<=max)
		{
			printf("\n");
        		temp=1;
			while(temp<=max)
			{
				printf("%*d ",digcnt,temp*init);
				temp++;
			}	
		init++;
		}	

}
