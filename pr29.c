#include<stdio.h>
#include<conio.h>

void main (){
    int n , i , count ;
    for(n = 1; n <= 100 ; n ++){
        count = 0 ;
        for(i= 1; i <=n ; i++){
            if(n % i == 0){
                count++ ;
            }

        }
        if(count == 2){
            printf("%5d", n);
        }
    }

    getch();
}