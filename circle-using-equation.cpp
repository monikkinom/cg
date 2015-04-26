#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main() {

	int gd=DETECT,gm;

	long x,y,x1,y1,r,p; //need to make them long. Int would lead to domain errors in sqrt function as int overflows for values r>149

	printf("Enter the radius\n");

	scanf("%ld",&r);

	initgraph(&gd,&gm,"");

	setcolor(WHITE);
	//coordinate axes
	line(0,250,600,250);
	line(300,0,300,600);

	x=-r;
	y=0;

	while(abs(x)>0)
	{
		putpixel(300+x,250+y,RED);
		putpixel(300-x,250+y,RED);
		putpixel(300+x,250-y,RED);
		putpixel(300-x,250-y,RED);
		y=sqrt(r*r-x*x);
		x++;
	}


	getch();
	closegraph();


}
