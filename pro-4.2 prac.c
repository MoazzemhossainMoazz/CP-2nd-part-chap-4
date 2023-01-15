
#include<stdio.h>
int y = 1;

 void myfnc(int x)
{
    y = y * 2;
    x = x + 10;
    printf("myfnc, x=%d, y=%d\n", x, y);
}

int main()
{
    int x = 10;
    y = 5;

    myfnc(x);
    printf("main, x =%d, y=%d\n", x, y);
    return 0;
}
