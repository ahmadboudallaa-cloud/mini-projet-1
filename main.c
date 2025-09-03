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
      printf(" %.2f,Excellent .\n", Moyenne) ;
      }
      else if (Moyenne >= 80 && Moyenne <= 89){
         printf("Tres bien.\n",Moyenne) ;

      }
      else if (Moyenne >=70 && Moyenne <=79){
          printf("Bien.\n",Moyenne) ;
      }
      else if (Moyenne >= 60 && Moyenne <= 69){
          printf(" Passable.\n",Moyenne) ;
      }
      else  {
          printf(" Echec.\n",Moyenne) ;
           }




    return 0;
}
