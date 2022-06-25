#include<reg51.h>
#include<intrins.h>
sbit R1=P3^0;//第一排的初始化
sbit R2=P3^1;//第二排的初始化
sbit R3=P3^2;//第三排的初始化
sbit R4=P3^3;//第四排的初始化
unsigned char code num[]={0XC0,0XF9,0XA4,0XB0,0X99,0X92,0X82,0XF8,0X80,0X90,0xbf,0xff};//0-9的数字数组,后面两个为-和全灭
unsigned char count=0;
unsigned char second=0;
unsigned char minute=59;
unsigned char hour=23;
int mode;
void hour_blink()
{
							int mode=1;
							int i=50,j=50;
	if(R1==0)
	{
		delay_ms(50);
		if(R1==0)
		{
			hour++;
			if(hour==24) hour=0;
			while(R1==0);
		}
	}
	if(R4==0)
	{
		delay_ms(50);
		if(R4==0)
		{
			hour--;
			if(hour==0) hour=24;
			while(R4==0);
		}
	}
							while(i--)
							{
								P2=0xC0;P0=weizhi[0];
								P2=0xFF;P0=num[hour/10];
								delay_ms(1);
								P2=0xC0;P0=weizhi[1];
								P2=0xFF;P0=num[hour%10];
								delay_ms(1);
											
								delay_ms(1);
								P2=0xC0;P0=weizhi[5];
								P2=0xFF;P0=num[10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[2];
								P2=0xFF;P0=num[10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[7];
								P2=0xFF;P0=num[second%10];
								delay_ms(1);
											
								delay_ms(1);
								P2=0xC0;P0=weizhi[6];
								P2=0xFF;P0=num[second/10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[3];
								P2=0xFF;P0=num[minute/10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[4];
								P2=0xFF;P0=num[minute%10];
								delay_ms(1);
							
							}
							i=50;
							while(j--)
							{
											
					P2=0xC0;P0=weizhi[0];
					P2=0xFF;P0=num[11];				
					delay_ms(1);
					P2=0xC0;P0=weizhi[1];
					P2=0xFF;P0=num[11];
					delay_ms(1);	
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[5];
								P2=0xFF;P0=num[10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[2];
								P2=0xFF;P0=num[10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[7];
								P2=0xFF;P0=num[second%10];
								delay_ms(1);
											
								delay_ms(1);
								P2=0xC0;P0=weizhi[6];
								P2=0xFF;P0=num[second/10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[3];
								P2=0xFF;P0=num[minute/10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[4];
								P2=0xFF;P0=num[minute%10];
								delay_ms(1);
							}
							j=50;
													}

void minute_blink()
{
	int mode=2;
	int i=50,j=50;
	if(R1==0)
	{
		delay_ms(50);
		if(R1==0)
		{
			minute++;
			if(minute==60) minute=0;
			while(R1==0);
		}
	}
	if(R4==0)
	{
		delay_ms(50);
		if(R4==0)
		{
			minute--;
			if(minute==0) minute=60;
			while(R4==0);
		}
	}

	
							
							while(i--)
							{
								P2=0xC0;P0=weizhi[3];
								P2=0xFF;P0=num[minute/10];
								delay_ms(1);
								P2=0xC0;P0=weizhi[4];
								P2=0xFF;P0=num[minute%10];
								delay_ms(1);
											
								delay_ms(1);
								P2=0xC0;P0=weizhi[5];
								P2=0xFF;P0=num[10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[2];
								P2=0xFF;P0=num[10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[7];
								P2=0xFF;P0=num[second%10];
								delay_ms(1);
											
								delay_ms(1);
								P2=0xC0;P0=weizhi[6];
								P2=0xFF;P0=num[second/10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[0];
								P2=0xFF;P0=num[hour/10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[1];
								P2=0xFF;P0=num[hour%10];
								delay_ms(1);
							
							}
							i=50;
							while(j--)
							{
											
					P2=0xC0;P0=weizhi[3];
					P2=0xFF;P0=num[11];				
					delay_ms(1);
					P2=0xC0;P0=weizhi[7];
					P2=0xFF;P0=num[11];
					delay_ms(1);	
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[5];
								P2=0xFF;P0=num[10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[2];
								P2=0xFF;P0=num[10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[7];
								P2=0xFF;P0=num[second%10];
								delay_ms(1);
											
								delay_ms(1);
								P2=0xC0;P0=weizhi[6];
								P2=0xFF;P0=num[second/10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[0];
								P2=0xFF;P0=num[hour/10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[1];
								P2=0xFF;P0=num[hour%10];
								delay_ms(1);
							}
							j=50;
													
}
void second_blink()
{
	int mode=3;
	int i=50,j=50;
	if(R1==0)
	{
		delay_ms(50);
		if(R1==0)
		{
			second++;
			if(second==60) second=0;
			while(R1==0);
		}
	}
	if(R4==0)
	{
		delay_ms(50);
		if(R4==0)
		{
			second--;
			if(second==0) second=60;
			while(R4==0);
		}
	}
	while(i--)
							{
								P2=0xC0;P0=weizhi[6];
								P2=0xFF;P0=num[second/10];//秒的十位
								delay_ms(1);
								P2=0xC0;P0=weizhi[7];
								P2=0xFF;P0=num[second%10];//秒的个位
								delay_ms(1);
								
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[5];
								P2=0xFF;P0=num[10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[2];
								P2=0xFF;P0=num[10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[4];
								P2=0xFF;P0=num[minute%10];
								delay_ms(1);
											
								delay_ms(1);
								P2=0xC0;P0=weizhi[3];
								P2=0xFF;P0=num[minute/10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[0];
								P2=0xFF;P0=num[hour/10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[1];
								P2=0xFF;P0=num[hour%10];
								delay_ms(1);
							
							}
							i=50;
							while(j--)
							{
											
								P2=0xC0;P0=weizhi[6];
								P2=0xFF;P0=num[11];				
								delay_ms(1);
								P2=0xC0;P0=weizhi[7];
								P2=0xFF;P0=num[11];
								delay_ms(1);	
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[5];
								P2=0xFF;P0=num[10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[2];
								P2=0xFF;P0=num[10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[4];
								P2=0xFF;P0=num[minute%10];
								delay_ms(1);
											
								delay_ms(1);
								P2=0xC0;P0=weizhi[3];
								P2=0xFF;P0=num[minute/10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[0];
								P2=0xFF;P0=num[hour/10];
								delay_ms(1);
								
								delay_ms(1);
								P2=0xC0;P0=weizhi[1];
								P2=0xFF;P0=num[hour%10];
								delay_ms(1);
							}
							j=50;
}
void Init()//初始化矩阵键盘
{
	R1=R2=R3=R4=1;
}
void INT0_Init(void)//外部中断0
	{
  IT0 = 1;  
  EX0 = 1;    
  EA = 1; 
	IT1=1;
	EX1=1;		
}
void Init_timer0()      
{
	TMOD = 0x01;      
	TH0 = (65535 - 50000) / 256;    
	TL0 = (65535 - 50000) % 256;	
	EA  = 1;     
	ET0 = 1;     
	TR0 = 1;     
}

void INT0_handle(void) interrupt 0//外部中断的进入函数
	{
		int hour_data=0;
		int minute_data=0;
		int second_data=0;
		int i=50,j=50;
		int count_left =0;
		int count_right =0;
				
while(1)
				{
					second_blink();
					if(R2==0)
									{
										delay_ms(50);
										if(R2==0)
										{			
											count_right++;
											while(R2==0);
										}
									}
switch(count_right)
									{
										case 1: 
													while(1)
													{
											hour_blink();
											if(R2==0) break;
											if(R3==0) 
												{
													count_left=0;
													break;
												}
											}
										case 2:
											while(1)
												{
													minute_blink();
													if(R2==0)
																	{
																		count_right=0;
																		break;
																	}
													if(R3==0) 
																	{
																		count_left=2;
																		break;
																	}
												}
									}	
					if(R3==0)
									{
										delay_ms(50);
										if(R3==0)
										{			
											count_left++;
											while(R3==0);
										}
									}
switch(count_left)
									{
										case 1: 
											while(1)
											{
											minute_blink();
											if(R3==0) break;
											if(R2==0) 
												{
													count_right=0;
													break;
												}
											}
										case 2:
											while(1)
												{
													hour_blink();
													if(R3==0)
																	{
																		count_left=0;
																		break;
																	}
													if(R2==0) 
																	{
																		count_right=2;
																		break;
																	}
												}
									}	
					}
														
		}
void Service_timer0() interrupt 1//定时器0
{
	TH0 = (65535 - 50000) / 256;    
	TL0 = (65535 - 50000) % 256;	
	count++;
	if(count == 20)   
	{
		second++;
		count = 0;
	}	
	if(second == 60)
	{
		minute++;
		second=0;
	}
	if(minute==60)
	{
		hour++;
		minute=0;
		if(hour==24) hour=0;
	}
}

void main()
	{
		allinit();
		INT0_Init();
	Init_timer0();
		while(1)
			{		
				
	delay_ms(1);
	shumaguan_control(6,second/10);
//	P2=0xC0;P0=weizhi[6];
//	P2=0xFF;P0=num[second/10];//秒的十位
	delay_ms(1);

	shumaguan_control(7,second%10);
//	P2=0xC0;P0=weizhi[7];
//	P2=0xFF;P0=num[second%10];//秒的个位
	delay_ms(1);

	P2=0xC0;P0=weizhi[5];
	P2=0xFF;P0=num[10];
	delay_ms(1);
				
shumaguan_control(4,minute%10);
//	P2=0xC0;P0=weizhi[4];
//	P2=0xFF;P0=num[minute%10];
	delay_ms(1);
				
	delay_ms(1);
	P2=0xC0;P0=weizhi[3];
	P2=0xFF;P0=num[minute/10];
	delay_ms(1);
	
	delay_ms(1);
	P2=0xC0;P0=weizhi[0];
	P2=0xFF;P0=num[hour/10];
	delay_ms(1);
	
	delay_ms(1);
	P2=0xC0;P0=weizhi[1];
	P2=0xFF;P0=num[hour%10];
	delay_ms(1);
	
	delay_ms(1);
	P2=0xC0;P0=weizhi[2];
	P2=0xFF;P0=num[10];
	delay_ms(1);
		}
	}



