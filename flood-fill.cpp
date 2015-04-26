//flood fill
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void ffill(int a,int b){

	int cpix;
	cpix = getpixel(a,b);

	if(cpix==0)
	{
		putpixel(a,b,4);
	  ffill(a-1,b);
	  ffill(a+1,b);
		ffill(a,b+1);
		ffill(a,b-1);
	}

}

void main() {

	int x,y,i;

	int gm,gd=DETECT;

	printf("Enter the coordinates");

	scanf("%d %d",&x,&y);

	initgraph(&gd,&gm,"");
	
	setcolor(GREEN);
	rectangle(50,50,100,100);

	ffill(x,y);

	getch();
	closegraph();

}
