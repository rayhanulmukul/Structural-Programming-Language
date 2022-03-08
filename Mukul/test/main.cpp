#include<graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    circle(520,340,300);
    getch();
    closegraph();
    return 0;
}
