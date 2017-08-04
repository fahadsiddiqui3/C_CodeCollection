#define A(a) a
#define B(b) "b"
#define C(c) #c
#define D(d1,d2) d1##d2
#define printhello() printf("Hello")

main()
{
	A(vector)=D(11,2)
	A(123);
	A(v);
	B(ector);
	B(123);
	C(vector);
	C(123);
	D(x,y)=D(1,2);

}
