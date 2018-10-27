#include <sttdio.h>

 void man()
{ 
	int x= 10;
	int y= 5;
	int temp;

	printf("Value before swap is x=%d and y=%d",x,y);

	temp=y;
	y=x;
	x=temp;

	printf("Values after swap is x=%d and y=%d",x,y);

	getch();

}

