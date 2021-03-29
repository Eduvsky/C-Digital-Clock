#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>

int main(){
        // Setting up variables of hours minutes and seconds
    int h,m,s;
    int loop = 1;

    printf("\n----C CLOCK----\n");
    printf("actually, what time is it ? : \n");
        // Setting up the right time
    printf("hour :");
    scanf("%d",&h);
    printf("\nminutes : ");
    scanf("%d",&m);
    printf("\nseconds : ");
    scanf("%d",&s);
    
    printf("There you go its started !!\n");
        //Starting up the main loop clock
    while(loop == 1){
        printf("%d : %d : %d",h,m,s);
        
        s = s + 1;
            //Main digital clock logic
        if (s == 60){
            m = m + 1;
            s = 0;
        }
        if (m == 60){
            h = h + 1;
            m = 0;
        }
        if (h == 24){
            h = 0;
        }
        if (h == 0 && m == 60 &&  s == 60){
            h = 1;
        }
        Sleep(1000);
        system("cls");
    }
}
