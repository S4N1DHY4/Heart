#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void delay(float sec)
{
    int ms=sec*1000;
    int st=clock();
    while(clock()<ms+st);
}
void main()
{
    int i,j;
    system("color c");
    ShowWindow(GetConsoleWindow(), SW_SHOWMAXIMIZED);
    for(i=0;i<6;i++)
    {
        if(i==0)
        {
            for(j=0;j<8;j++)
            {
                if(j==0 || j==4)
                    {printf(" ");}
                else
                    {delay(0.4);printf("%c",3);}
            }
            printf("\n");
        }
        else if(i==1)
            {for(j=0;j<9;j++)
            {
                if(j%4==0)
                {
                    delay(0.4);
                    printf("%c",3);
                }
                else
                    printf(" ");
            }printf("\n");}
        else
        {for(j=0;j<9;j++)
        {
            if(i-1==j || i-1==8-j)
                {delay(0.4);printf("%c",3);}
            else
                {printf(" ");}
        }
        printf("\n");}
    }
    delay(2.5);
    exit(0);
}
