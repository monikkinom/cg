#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int bezier(int n,int i);
int fact(int n);
void main()
{
    int gd=DETECT,gm;int n,i,x,j;double px[100],py[100],u,p1,p2;
    initgraph(&gd,&gm,"");
    printf("Enter no. of curves:");
   scanf("%d",&x);
    for(j=0;j<x;j++)
    {
    printf("Enter number of points");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	printf("Enter point:");
	scanf("%lf %lf",&px[i],&py[i]);
	putpixel((int)px[i],(int)py[i],YELLOW);
    }
    for(u=0.0;u<=1.0;u+=0.0001)
    {
	  for(i=0;i<n;i++)
	  {
		p1+=pow(1-u,n-i-1)*pow(u,i)*px[i]*bezier(n-1,i);
		p2+=pow(1-u,n-i-1)*pow(u,i)*py[i]*bezier(n-1,i);
	  }
	  putpixel((int)p1,(int)p2,WHITE);
	  delay(1);
	  p1=0;p2=0;
    }
  }
    getch();
    closegraph();
}
int bezier(int n,int i)
{
	int res=fact(n)/(fact(n-i)*fact(i));
	return res;
}
int fact(int n)
{
	if(n==1||n==0)
	return 1;
	else
	return n*fact(n-1);
}
