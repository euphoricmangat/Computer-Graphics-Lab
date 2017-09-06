#include<stdio.h>
#include<graphics.h>
int main()

{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    line(50,50,80,80);
    

    delay(5000);
    return 0;

}
