#include<stdio.h>
int main()
{
	int x;
	int y;
	printf("enter two number to swap:");
	scanf("%d %d",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("your number after swaping is %d and %d",x,y);
	return 0;
}
