//#define choice 3
#if(choice==1)
	int sum(int a,int b)
	{
		return a+b;

	}
#endif
#if(choice==2)
	int sub(int a,int b)
	{
		return a-b;

	}
#endif
#if(choice==3)
	int mul(int a,int b)
	{
		return a*b;

	}
#endif
#if(choice==4)
	int div(int a,int b)
	{
		return a/b;

	}
#endif

main()
{
	int r;
#if(choice==1)
	r=sum(10,20);
#elif (choice==2)
	r=sub(10,20);
#elif (choice==3)
	r=mul(10,20);
#elif (choice==4)
	r=div(10,20);
#elif 
	return;
#endif
	printf("Result:%d\n",r);
	

}













