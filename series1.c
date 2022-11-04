#include<stdio.h>
#include<conio.h>

void main(){
    int i , n ;
    float t , sum = 0 ;
    printf("\n Enter total terms : ");
    scanf("%d", &n);
    i = 1 ;
    while (i<=n)
    {
        // printf("%4d",i*i);
        // sum = sum + i*i;
        // i++;

        t = (float) 1 / (i*i);
        printf("%8.4f", t);
        sum = sum + t ;
        i++ ;
    }
    printf("\n %f", sum);
}