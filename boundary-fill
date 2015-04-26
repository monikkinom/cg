//boundary fill
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

void bfill(int a,int b,int c){

	int cpix;
	cpix = getpixel(a,b);

	if(cpix!=c && cpix!=GREEN)
	{
		putpixel(a,b,c);
		bfill(a-1,b,c);
		bfill(a+1,b,c);
		bfill(a,b+1,c);
		bfill(a,b-1,c);
	}

}

void main() {

	int x,y,i;

	int gm,gd=DETECT;

	printf("Enter the coordinates");

	scanf("%d %d",&x,&y);

	initgraph(&gd,&gm,"");
	
	setcolor(GREEN);
	//be careful not to try large sized figures, might lead to overflow
	rectangle(50,50,100,100);

	bfill(x,y,RED);

	getch();
	closegraph();

}
