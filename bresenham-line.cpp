//Bresenham Line Drawing Algorithm
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main() {

	int gd=DETECT,gm;
	int x1,y1,x2,y2,i,dx,dy,absx,absy,p,steps,x,y;

	printf("Enter x1 y1 x2 y2");
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

	initgraph(&gd,&gm,"");

	dx = (x2-x1);
	dy = (y2-y1);

	absx = abs(dx);
	absy = abs(dy);

	steps = (absx>absy) ? absx : absy; //make steps equal to the larger of the two absolutes

	x=x1;
	y=y1;

	setcolor(WHITE);
	//make coordinate axes
	line(300,0,300,500);
	line(0,250,650,250);

	putpixel(300+x,250+y,RED);


	if(absx>absy)
	{
		//progressing on x axis
		p = 2*absy - absx;

		while(steps>0)
		{
			x+=absx/dx;

			if(p<0)
			{
				p+=2*absy;
			}
			else
			{
				y+=absy/dy;
				p+=2*absy-2*absx;
			}
			putpixel(300+x,250+y,RED);
			steps--;
		}

	}
	else
	{

		//progressing on y axis
		p = 2*absx - absy;

		while(steps>0)
		{
			y+=absy/dy;

			if(p<0)
			{
				p+=2*absx;
			}
			else
			{
				x+=absx/dx;
				p+=2*absx-2*absy;
			}

			putpixel(300+x,250+y,RED);

			steps--;
		}

	}

	getch();
	closegraph();
}



}
