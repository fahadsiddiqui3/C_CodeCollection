#include<stdio.h>
func(int a[])  // here a[] is same as *a
{
	int i;
	printf("inside func");
	for(i=0;i<5;i++)
	{
		a[i]+=2;
		printf("%d ",a[i]);
	}

	printf("\n");
}



main()
{
	int i,arr[]={3,6,7,4,6};
	func(arr);
	printf("inside main");
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);

	}
	printf("\n");

}
