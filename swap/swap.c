#include <sttdio.h>

void swap(int x,int y)
{
	int temp= *x;
	*x= *y;
	*y=temp;
}

 void main()
{ 
	int x= 10;
	int y= 5;
	
	printf("Value before swap is x=%d and y=%d",x,y);

	swap(&x, &y);
	printf("Values after swap is x=%d and y=%d",x,y);

	getch();

}
