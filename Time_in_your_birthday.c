// make sure that you leave space between DD MM YYYY 
//FIRST ENTER YOUR BIRTH DATE  IN DD MM YYYY
//THEN  ENTER TODAY DATE IN DD MM YY

#include <stdio.h>
#include <stdlib.h>

int main() {
int D1 , M1 , Y1 ;
int D2 , M2 , Y2 ;


printf("Enter your birthdate and today date in form of DD MM YYYY \n");


printf("\nCurrent date :- ");
scanf("%d %d %d" , &D2 ,&M2 ,&Y2);

printf("Your birthdate :- ");
scanf("%d %d %d" , &D1 ,&M1 ,&Y1);


if( D2 == D1 && M2 == M1 )
   { printf("\n 🎉 WHISHING YOU A VERY HAPPY Birthday 🎉🎂") ;
   }
    
      /* like 7 , 8 , 9 , 10 , 11 , 12 > 6*/
      /*  1 1 1
      1 2 1
     
      i know that birth day will come in 11 months
      12 - 1
      12 -(m2 - m1) */
      
     
else  if (  M2 > M1)
{ printf("\n →     your birthday🎂 will be celebrated in  next %d months " ,     12 - M2 + M1); 
} 

else if (  M1 - M2 == 1)
{ printf("\n  → your birthday is coming in next 1 month\n Happy birthday in 1 month advance 🎉🎂  " );
} 

else if (M1 - M2 > 1)
  { printf("\n  → your birthday is coming in next %d months \n Happy birthday in  %d month advance 🎉🎂" ,  M1 - M2 , M1 - M2);
  } 

// 1) D2 - D1 == 1  && M2 == M1
// 2) D2 - D1 > 1 && M2 == M1


 if( D2 - D1 == 1  && M2 == M1 )
  {
     printf(" oppps! your birthday gone %d day ago.\n" ,      D2 - D1);
      printf("🎉 Wishing you a belated happy birthday 🎉🎂 ");
  }
      
      
  else if (D2 - D1 > 1 && M2 == M1)
  { 
    printf(" oppps! your birthday gone %d days ago\n" , D2 - D1);
    printf("\n🎉 Wishing you a belated happy birthday 🎉🎂" );
  }
     
    
if (D2 - D1  == -1 && M2 == M1)
{
 printf("\n Hurreey 🎉🎉 , tommorrow is your birthday 🎂  ");
 printf("\nwhishing you a happy birthday🎂 in advanced");
}
 else  if(D1 - D2 > 1 && M2 == M1 ) 
 {
 printf("\nHurreey , after %d days is your  birthday\n" , D1 - D2 );
 printf("\twhishing you a happy birthday🎂 in advanced");
  }
    return 0;
}
