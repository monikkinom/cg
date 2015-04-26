//circle moving over circumference
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

void main() {

	int gd=DETECT,gm,i=0;
	initgraph(&gd,&gm,"");



	for(i=0; i<360; i++)
	{
		cleardevice();
		setcolor(WHITE);
		circle(250,300,25);
		setcolor(RED);
		circle(250+30*cos(i*3.14/180),300+30*sin(i*3.14/180),5);
		delay(10);


	}

	getch();
	closegraph();


}
