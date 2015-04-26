#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>


int main() {

int x1,x2,y1,y2,i,k=1,option;
float dx,dy,length,x,y;
int gd=DETECT,gm;

printf("Enter x1,y1 x2,y2 \n");
scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

initgraph(&gd,&gm,"");

dx = abs(x2-x1);
dy = abs(y2-y1);

if(dx>dy)
{
length=dx;
}
else
{
length=dy;
}

dx =  (x2-x1)/length;
dy = (y2-y1)/length;

x=x1+0.5;
y=y1+0.5;

i=0;
while(i<=length)
{
x+=dx;
y+=dy;
/* uncomment for dashed lines
if((i/5)%2==0)
{
*/

putpixel(x,y,RED);

/* uncomment for parallel line
//putpixel(x+20,y,RED);
*/

/* for thicker lines uncomment this
putpixel(x-1,y,RED);
putpixel(x+1,y,RED);
*/

/*
} end of if block for dashed line
*/
i+=1;
}

getch();
closegraph();
return 0;

}
