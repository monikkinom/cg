//circle using parametric form
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main() {
	
	int gd=DETECT,gm;
	int r,i=0;
	clrscr();
	initgraph(&gd,&gm,"");
	printf("Enter the center coordinates");
	scanf("%d%d",&xc,&yc);
	printf("Enter radius");
	scanf("%d",&r);
	for(i=0; i<360; i++)
	{
		putpixel(xc+r*cos(i*3.14/180),yc+r*sin(i*3.14/180),RED);
	}

	getch();
	closegraph();
}
