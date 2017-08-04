#include<stdio.h>
void findmaxmin(int data,int *pmax,int *pmin)
{
	(*pmax)=-1;
	(*pmin)=10;
	while(data){if(data%10>(*pmax))
			(*pmax)=data%10;
			if (data%10<(*pmin))
			(*pmin)=data%10;
	data=data/10;

	

		    }	


return 0;

}

main()
{
	int v=12345,max,min;
	findmaxmin(v,&max,&min);
	printf("V=%d  max=%d min=%d\n",v,max,min);	


}
