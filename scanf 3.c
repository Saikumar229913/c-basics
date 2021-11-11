#include<stdio.h>
void main()
{
	int l,b,a,p;
	printf("length");
	scanf("%d", &l);
	printf("bredth");
	scanf("%d", &b);
	a=l*b;
	p=2*(l+b);
	printf("area of rectangle is %d\nperimeter of rectangle is %d", a, p);
}
