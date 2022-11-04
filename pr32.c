#include<stdio.h>
#include<conio.h>

void main(){
    int a[10], i ,n , lar ;
    printf("\n Enter total no. of elements in array : ");
    scanf("%d", &n);
    for(i = 0 ; i < n ; i++){
        printf("\n Enter Element %d : ", i+1);
        scanf("%d", &a[i]);
    }


    lar = a[0];

    printf("\n\n Given Array Elements are : \n\n");

    for(i=0 ; i<n ; i++){
        printf("%5d", a[i]);

        if(a[i] > lar){
            lar = a[i];
        }
    }

    printf("\n Largest number from above numbers is %d", lar);
    getch();
}