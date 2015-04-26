//cocentric fills
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

void floodfill(int x,int y)
{
	int cpix;
	cpix=getpixel(x,y);

	if(cpix == 0)
	{
			putpixel(x,y,RED);
			floodfill(x+1,y);
			floodfill(x-1,y);
			floodfill(x,y+1);
			floodfill(x,y-1);
	}
}

void bfill(int x,int y)
{
	int cpix;
	cpix=getpixel(x,y);

	if(cpix != GREEN && cpix!= YELLOW)
	{
			putpixel(x,y,YELLOW);
			bfill(x+1,y);
			bfill(x-1,y);
			bfill(x,y+1);
			bfill(x,y-1);
	}

}

void main() {

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	setcolor(WHITE);
	circle(250,300,50);
	setcolor(GREEN);
	circle(250,300,25);

	delay(1000);

	bfill(250,300);

	floodfill(250,335);

	getch();
	closegraph();


}
