#include "main.h"

uchar timer_flag=0;

void main()
{
	cls_buzz();
	InitTimer0();
	while(1)
	{
		if(timer_flag==1)
		{
			//chuli(1,2,10,3,4,10,5,6);
			chuli(1,10,2,10,3,10,4,10);
			timer_flag=1;
		}
	}
}
