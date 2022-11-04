#include<stdio.h>
#include<conio.h>

void main(){
    int i , d1 , d2 , d3 , t , sum = 0 ;
    for(i = 100 ; i<=999 ; i++){
        t = i ;
        d1 = t % 10 ;
        t = t / 10 ;
        d2 = t % 10 ;
        t = t / 10 ;
        d3 = t ;
        sum = d3 * d3 * d3 + d2 * d2 * d2 + d1 * d1 * d1 ;
        if(sum == i){
            printf("\n %d", i);
        }
    }

    getch();
}