#include<stdio.h>
#include<conio.h>

void main(){
    int eno , gc ;
    float basic , nbasic ;
    printf("\n Enter Employee Number : ");
    scanf("%d", &eno);
    printf("\n Enter Grade Code  : ");
    scanf("%d", &gc);
    printf("\n Enter basic salary of employee : ");
    scanf("%f", &basic);
    if(gc == 1){
        if(basic <= 1800)
        nbasic = basic + basic * 0.12 ;
        else if(basic < 1500)
        nbasic = basic + basic * 0.08 ;
        else
        nbasic - basic + basic  * 0.05 ;
    }

    else if (gc == 2){
        if(basic <= 800)
            nbasic = basic + basic * 10; 
        else if (basic <= 1500)
        nbasic = basic + basic * 0.6 ;

        else 
        nbasic = basic + basic * 0.8 ;

    }

    else if (gc == 3){
        if(basic <= 8000)
        nbasic = basic + basic * 0.08;

        else if (basic <= 1500)
        nbasic = basic + basic * 0.04;

        else 
        nbasic = basic + basic * 0.03;
    }

    else {
        printf("\n Wrong grade code .....\n\n");
        nbasic = basic ;
    }

    printf("\n\n Reliance petrolium chemical Corporation Ltd ");
    printf("\n\n Employee Number = %d", eno);
    printf("\n\n Grade code = %d ", gc);
    printf("\n\n Old Basic salary = %8.2f ", basic);
    printf("\n\n New basic salary = %8.2f", nbasic);

    getch();
}