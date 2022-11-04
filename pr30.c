#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    int i , len , tw , tb , tu , tl , td ;
    char s [30];
    printf("\n Enter any string : ");
    gets(s);
    len = strlen(s);

    i = 1;

    while (s[i] != '\0')
    {
          if(s[i] >= 'A' && s[i] <= 'Z'){
            tu = tu + 1;
         }
         if(s[i] >= 'a' && s[i] <= 'z'){
             tl = tl + 1 ;
         }

         i++ ;
    }
    
//    for(i= 0 ; i<strlen(s); i++){
//         if(s[i] == 32 && s[i=1] != 32)
//         tw = tw + 1 ;

//         // if(s[i] > 64 && s[i] < 91)
//         // tu = tu + 1 ;

//         // if(s[i] > 96 && s[i] < 123)
//         // tl = tl + 1 ;

//         // if(s[i] >= 'A' && s[i] <= 'Z'){
//         //     tu = tu + 1;
//         // }
//         // if(s[i] >= 'a' && s[i] <= 'z'){
//         //     tl = tl + 1;
//         // }

//         if(s[i] > 47 && s[i] < 58)
//         td = td + 1;

//         i++ ;
//     }

    // printf("\n Given string : %s ", s);
    // printf("\n Total words : %d ", tw+1);
    // printf("\n Total blanks : %d ",tb );
    printf("\n Total uppercase : %d", tu);
    printf("\n Total lowercase : %d", tl);
    // printf("\n Total digits : %d", td);

    getch();
}
