#define print(var,fmt) printf("The value of "#var"="#fmt" \n",var)
main()
{
	int x=34;
	float y=56.7;
	char z='A';
	
	print(x,%d);
	print(y,%f);
	print(z,%c);


}
