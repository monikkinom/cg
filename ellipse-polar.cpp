//ellipse using parametric form
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
float x,y;
int xc,yc;

void main() {
	
	int gd=DETECT,gm;
	int a,b,i=0;
	clrscr();
	initgraph(&gd,&gm,"");
	printf("Enter the center coordinates");
	scanf("%d%d",&xc,&yc);
	printf("Enter a and b");
	scanf("%d%d",&a,&b);

	for(i=0; i<360; i++)
	{
		putpixel(xc+a*rcos(i*3.14/180),yc+b*rsin(i*3.14/180),RED);
	}

	getch();
	closegraph();
}
