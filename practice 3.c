#include <stdio.h>
#include <conio.h>

void main()
{
    int x = 20, y = 6;
    printf("% d" , x/y);
    printf("% d" , x%y);

    y = x+y;

    printf("% d" , x/y);
    printf("% d" , x%y);

    getch();
}
