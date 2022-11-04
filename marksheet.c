#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    int rno , cs1 , cs2 , cs3 , cs4 , cs5 , cs6 , scode , c=0 , tot ;
    char nm[20] , res[5] , cl[12];
    float per ;
    printf("\n Enter Roll no. : ");
    scanf("%d", &rno);
    printf("\n Roll no. input taken");
    printf("\n Enter name of Student : ");
    scanf("%s", &nm);
    printf("\n Enter marks of cs1 , cs2 , cs3");
    scanf("%d %d %d", &cs1 , &cs2 , &cs3);
    printf("\n Enter marks of cs4 , cs5 , cs6");
    scanf("%d %d %d", &cs4 , &cs5 , &cs6);
    printf("\n Enter sexcode 1 = male 2 = female ");
    scanf("%d", &scode);

    if(cs1 < 35)
     c= c + 1;
    if(cs2 < 35)
     c= c + 1;
    if(cs3 < 35)
     c= c + 1;
    if(cs4 < 35)
     c= c + 1;
    if(cs5 < 35)
     c= c + 1;
    if(cs6 < 35)
     c= c + 1;


     if(c==1 && (cs1 > 29 && cs1 < 35))
     {
        cs1 = cs1 + (35 - cs1);
        c = 0 ;
     }
     if(c==1 && (cs2 > 29 && cs2 < 35))
     {
        cs2 = cs2 + (35 - cs2);
        c = 0 ;
     }
     if(c==1 && (cs3 > 29 && cs3 < 35))
     {
        cs3 = cs3 + (35 - cs3);
        c = 0 ;
     }
     if(c==1 && (cs4 > 29 && cs4 < 35))
     {
        cs4 = cs4 + (35 - cs4);
        c = 0 ;
     }
     if(c==1 && (cs5 > 29 && cs5 < 35))
     {
        cs5 = cs5 + (35 - cs5);
        c = 0 ;
     }
     if(c==1 && (cs6 > 29 && cs6 < 35))
     {
        cs6 = cs6 + (35 - cs6);
        c = 0 ;
     }

     tot = cs1 + cs2 + cs3 + cs4 + cs5 + cs6 ;
     per = (float)tot / 6 ;

     if(c==0){
        strcpy(res, "PASS");

        if(per < 48)
        strcpy(cl , "THIRD");
        else if(per < 60)
        strcpy(cl , "SECOND");
        else if(per < 70)
        strcpy(cl , "FIRST");
        else
        strcpy(cl , "FIRST DIST");
     }

     else {
        strcpy(res , "FAIL");
        strcpy(cl , "......");
     }

     printf("\n P.M Patel College Anand");
     printf("\n S.Y B.Sc Computer Science");
     printf("\n Student Roll no. = %d and Student name = %s", rno , nm);
     printf("\n ...............................");
     printf("\n CS301 , CS302 , CS303 , CS304 , CS305 , CS36 ");
     printf("\n .................................");
     printf("\n %d , %d , %d , %d , %d , %d ", cs1 , cs2 , cs3 , cs4 , cs5 , cs6);
     printf("\n Total , percentage , result , class");
     printf("\n  %d , %f , %s , %s ", tot , per , res , cl);
     getch();


}