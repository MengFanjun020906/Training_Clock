#include "common.h"

void cls_buzz()
{
	Y4;P0=0xff;
	Y5;P0=0xa0&(P0|0x5f);
}
