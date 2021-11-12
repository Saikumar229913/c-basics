#include<stdio.h>
void main()
{
	int h, m;
	printf("enter minutes");
	scanf("%d", &m);
	h=m/60;
	m= m%60;
	printf("%dhours %dminutes", h, m);
}
