#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main() {

	int gd=DETECT,gm;

	int x,y,x1,y1,r,p;

	printf("Enter the radius\n");

	scanf("%d",&r);

	initgraph(&gd,&gm,"");

	setcolor(WHITE);
	//coordinate axes
	line(0,250,600,250);
	line(300,0,300,600);

	p=3-2*r;

	x=0;
	y=r;

	while(x<y)
	{
		//mark it for all quandrants
		putpixel(300+x,250+y,RED);
		putpixel(300-x,250+y,RED);
		putpixel(300+x,250-y,RED);
		putpixel(300-x,250-y,RED);
		putpixel(300+y,250+x,RED);
		putpixel(300-y,250+x,RED);
		putpixel(300+y,250-x,RED);
		putpixel(300-y,250-x,RED);

		if(p<=0)
		{
			p+=4*(x)+6;
		}
		else
		{
			p+=4*(x-y)+10;
			y--;
		}

		x++;

	}


	getch();
	closegraph();


}
