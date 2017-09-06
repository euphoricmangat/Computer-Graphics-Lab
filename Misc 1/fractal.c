#include<iostream>

#include<conio.h>

#include<graphics.h>

#include<math.h>

using namespace std;

/*struct node

{

float x;

float y;

};*/

int dx;

void koch(float x1,float y1,float x2,float y2)

{

float x,px,py;

x=(x2-x1);

if(x<=dx) return;

if(y1==y2)

{

line(x1,y1,x1+x/3,y1);

line(x1+2*x/3,y2,x2,y2);

px=(x2-x1)/2+x1;

py=y1-((x/6)*sqrt(3));

line(x1+x/3,y1,px,py);

line(px,py,x1+2*x/3,y2);

setcolor(rand()%100);

line(x1+x/3,y1,x1+2*x/3,y1);

setcolor(rand()%100);

koch(x1,y1,x1+x/3,y1);

koch(x1+2*x/3,y2,x2,y2);

koch(x1+x/3,y1,px,py);

koch(px,py,x1+2*x/3,y2);

}

else

{

float ax,ay,bx,by,cx,cy;

if(y1>y2)

{

setcolor(rand()%100);

line(x1,y1,x2,y2);

setcolor(rand()%100);

ax=x1+x/3;

ay=y1-(y1- y2)/3;

cx=x1+2*x/3;

cy=y1-2*(y1- y2)/3;

bx=cx-2*x/3;

by=cy;

line(x1,y1,ax,ay);

line(ax,ay,bx,by);

line(bx,by,cx,cy);

line(cx,cy,x2,y2);

koch(x1,y1,ax,ay);

koch(bx,by,ax,ay);

koch(bx,by,cx,cy);

koch(cx,cy,x2,y2);

}

if(y1<y2)

{

setcolor(BLACK);

line(x1,y1,x2,y2);

setcolor(WHITE);

ax=x1+x/3;

ay=y1+(y2-y1)/3;

cx=x1+2*x/3;

cy=y1+2*(y2-y1)/3;

bx=ax+2*x/3;

by=ay;

line(x1,y1,ax,ay);

line(ax,ay,bx,by);

line(bx,by,cx,cy);

line(cx,cy,x2,y2);

koch(x1,y1,ax,ay);

koch(ax,ay,bx,by);

koch(cx,cy,bx,by);

koch(cx,cy,x2,y2);

}

}

}

int main()

{

int gd=DETECT,gm;

initgraph(&gd,&gm,NULL);

float x1,y1,x2,y2;

cout<<"enter end points of line(x,y)";

cin>>x1>>y1>>x2>>y2;

cout<<"enter minimum spacing";

cin>>dx;

koch(x1,y1,x2,y2);

getch();

return 0;

}
