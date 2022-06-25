#include "ds.h"

extern uchar timer_flag;

void InitTimer0()
{
	TMOD=0x01;
	TH0=(65535-1000)/256;
	TL0=(65535-1000)%256;
	ET0=1;
	TR0=1;
	EA=1;
}

void ServiceTimer0() interrupt 1
{
	TH0=(65535-1000)/256;
	TL0=(65535-1000)%256;
	display();
	timer_flag=1;
}
