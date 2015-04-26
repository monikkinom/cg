#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main() {
	
	int gd=DETECT,gm;

	float x1,x2,y1,y2,wxmax,wxmin,wymax,wymin;

	float p[5],q[5],r[5];

	float t1,t2,xx1,xx2,yy1,yy2;

	printf("Enter line\n");
	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
	printf("\n Enter view port");
	scanf("%f %f %f %f",&wxmin,&wymin,&wxmax,&wymax);
	
	initgraph(&gd,&gm,"");

	setcolor(WHITE);

	rectangle(wxmin,wymin,wxmax,wymax);

	int i;
	
	for(i=0; i<=4; i++)
	{
		p[i]=0;
		q[i]=0;
		r[i]=0.0;
	}

	p[1] = x1 - x2;
	p[2] = x2 - x1;
	p[3] = y1 - y2;
	p[4] = y2 - y1;

	q[1] = x1 - wxmin;
	q[2] = wxmax - x1;
	q[3] = y1 - wymin;
	q[4] = wymax - y1;

	for(i=1; i<=4; i++)
	{
		r[i] = q[i]/p[i];
	}

	t1=0;
	t2=1;

	for(i=1; i<=4; i++)
	{
		if(p[i]<0)
		{
			if(r[i]>t1)
			{
				t1=r[i];
			}
		}
		else
		{
			if(r[i]<t2)
			{
				t2=r[i];
			}
		}
	}
	
	xx1 = x1 + t1*(x2-x1);
	xx2 = x1 + t2*(x2-x1);
	yy1 = y1 + t1*(y2-y1);
	yy2 = y1 + t2*(y2-y1);
	
	if(t1<=t2)
	{
	setcolor(GREEN);
	line(xx1,yy1,xx2,yy2);
	}
	else
	{
		printf("line outside clipping window");
	}
	getch();
	closegraph();

}
