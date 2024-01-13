// make sure that you leave space between DD MM YYYY 
//FIRST ENTER YOUR BIRTH DATE  IN DD MM YYYY
//THEN  ENTER TODAY DATE IN DD MM YY

#include <stdio.h>

int main() {
int DD1 , MM1 , YYYY1 ;
int DD2 , MM2 , YYYY2 ;


printf("Enter your birthdate and today date in form of DD MM YYYY \n");

printf("Your birthdate :- ");
scanf(" %d %d %d " , &DD1 , &MM1 , &YYYY1);
printf("%d %d %d  \n",DD1 ,MM1, YYYY1 );



printf("Current date :- ");
scanf(" %d %d %d " , &DD2 ,&MM2 ,&YYYY2);
printf("%d %d %d\n" , DD2 ,MM2 , YYYY2 );


if( DD2 == DD1 && MM2 == MM1 )
   { printf("\n 🎉 WHISHING YOU A VERY HAPPY Birthday 🎉🎂") ;
   }
    
      /* like 7 , 8 , 9 , 10 , 11 , 12 > 6*/
      /*  1 1 1
      1 2 1
     
      i know that birth day will come in 11 months
      12 - 1
      12 -(m2 - m1) */
      
     
else  if (  MM2 > MM1)
{ printf("\n →     your birthday🎂 will be celebrated in  next %d months " ,     12 - MM2 + MM1); 
} 

else if (  MM1 - MM2 == 1)
{ printf("\n  → your birthday is coming in next 1 month\n Happy birthday in 1 month advance 🎉🎂  " );
} 

else if (MM1 - MM2 > 1)
  { printf("\n  → your birthday is coming in next %d months \n Happy birthday in  %d month advance 🎉🎂" ,  MM1 - MM2 , MM1 - MM2);
  } 

// 1) DD2 - DD1 == 1  && MM2 == MM1
// 2) DD2 - DD1 > 1 && MM2 == MM1


 if( DD2 - DD1 == 1  && MM2 == MM1 )
  {
     printf(" oppps! your birthday gone %d day ago.\n" ,      DD2 - DD1);
      printf("🎉 Wishing you a belated happy birthday 🎉🎂 ");
  }
      
      
  else if (DD2 - DD1 > 1 && MM2 == MM1)
  { 
    printf(" oppps! your birthday gone %d days ago\n" , DD2 - DD1);
    printf("\n🎉 Wishing you a belated happy birthday 🎉🎂" );
  }
     
    
if (DD1 - DD2  == 1 && MM2 == MM1)
{
 printf("\n Hurreey 🎉🎉 , tommorrow is your birthday 🎂  ");
 printf("\nwhishing you a happy birthday🎂 in advanced");
}
 else  if(DD1 - DD2 > 1 && MM2 == MM1 ) 
 {
 printf("\nHurreey , after % d days is your  birthday\n" , DD1 - DD2 );
 printf("\twhishing you a happy birthday🎂 in advanced");
  }
    return 0;
}
