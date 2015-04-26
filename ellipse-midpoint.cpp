//ellipse midpoint
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void disp();
float x,y;
int xc,yc;
void main()
{
	int gd=DETECT,gm;
	int a,b;
	float p1,p2;
	clrscr();
	initgraph(&gd,&gm,"");
	printf("Enter the center coordinates");
	scanf("%d%d",&xc,&yc);
	printf("Enter a and b");
	scanf("%d%d",&a,&b);
	x=0;y=b;
	disp();
	p1 = (b*b) - (a*a*b) + (a*a)/4;

	while((2.0*b*b*x)<=(2.0*a*a*y))
	{
		x++;

		if(p1<=0)
		{
			p1+=(b*b)+(2.0*b*b*x);
		}
		else
		{
			y--;
			p1+=(b*b)+(2.0*b*b*x)-(2.0*a*a*y);
		}

		disp();
		x*=-1;
		disp();
		x*=-1;;
	}

	x=a;
	y=0;
	p2 = (a*a) + 2.0*(b*b*a) + (b*b)/4;

	while((2.0*b*b*x)>(2.0*a*a*y))
	{
		y++;
		if(p2>0)
		{
			p2+= (a*a) - 2.0*(a*a*y);
		}
		else
		{
			x--;
			p2+=(a*a) -(2.0*a*a*y) + 2.0*b*b*x;
		}
		disp();
		y*=-1;
		disp();
		y*=-1;

	}
	getch();
	closegraph();
}
void disp()
{
putpixel(xc+x,yc+y,RED);
putpixel(xc-x,yc+y,RED);
putpixel(xc+x,yc-y,RED);
putpixel(xc+x,yc-y,RED);
}
