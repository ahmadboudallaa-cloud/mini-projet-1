#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float Note5,Note4,Note3,Note2,Note1;
    float Totalnote,Moyenne;

    printf("veiller entrer la premiere note: ");
    scanf("%f", &Note1);

    printf("veiller entrer la deuxieme note: ");
    scanf("%f", &Note2);

    printf("veiller entrer la troisieme note: ");
    scanf("%f", &Note3);

    printf("veiller entrer la quatrieme note: ");
    scanf("%f", &Note4);

    printf("veiller entrer la cinquieme note: ");
    scanf("%f" , &Note5);

     Totalnote = Note1+Note2+Note3+Note4+Note5;
     Moyenne = (Note1+Note2+Note3+Note4+Note5)/5;

     printf("la somme est: %.2f\n",Totalnote);
    printf("la moyenne est: %.2f\n",Moyenne);

    if(Moyenne >= 90)
        {
      printf(" %.2f,Montion : Excellent .\n", Moyenne) ;
      }
      else if (Moyenne >= 80 && Moyenne <= 89){
         printf("Montion : Tres bien.\n",Moyenne) ;

      }
      else if (Moyenne >=70 && Moyenne <=79){
          printf("Montion : Bien.\n",Moyenne) ;
      }
      else if (Moyenne >= 60 && Moyenne <= 69){
          printf(" Montion : Passable.\n",Moyenne) ;
      }
      else  {
          printf(" Montion : Echec.\n",Moyenne) ;
           }
if (Moyenne >= 50){
    printf("Ta Reussi.\n", Moyenne);
}

else {
    printf("Ta Echoue.\n", Moyenne);
}

 float Max = Note1;

 if(Note2 > Max){
     Max = Note2;
 }
 if(Note3 > Max){
     Max = Note3;
 }
if(Note4 > Max){
    Max = Note4;
}
if(Note5 > Max){
    Max = Note5;
}
 printf("La note la plus élevée est : %.2f\n", Max);
 float Min = Note1;

  if(Note2 < Min){
      Min = Note2;
  }

  if(Note3 < Min){
      Min = Note3;

  }

  if(Note4 < Min){
      Min = Note4;
  }
  if(Note5 < Min){
      Min = Note5;
  }
   printf("La note la plus bas est : %.2f\n", Min);


    return 0;
}
