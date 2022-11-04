#include<stdio.h>
#include<conio.h>

void main(){
    int i , n , r , t , npr , ncr , nfact = 1 , rfact= 1 , nrfact = 1 ;
    printf("\n Program to find values of NCR and NPR");
    printf("\n Enter the value of n (n > 0)");
    scanf("%d", &n);
    printf("\n Enter value of r (r < n)");
    scanf("%d", &r);
    i = 1;
   while (i <= n)
   {
     nfact = nfact * i ;
     i = i + 1 ;

   }
   
    


   i = 1 ;
    while (i <= r)
    {
        rfact = rfact * i ;
        i = i + 1 ;
    }

    t = n - r ;

    for(i=1 ; i<= t ; i++){
        nrfact = nrfact * i ;
    }
    npr = nfact / nrfact ;
    ncr = nfact / (rfact * nrfact);
    printf("\n Factorial value of %d = %d ", n , nfact);
    printf("\n Factorial value of %d = %d", r , rfact);
    printf("\n Value of NCR = %d", ncr);
    printf("\n Value of NPR = %d", npr);
    getch();
    
}