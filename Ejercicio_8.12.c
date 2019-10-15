#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Prototipo de las funciones

//Variables globales
int i;

int main()
{
    printf("Programa de votos de candidatos. \n\n");

    int candidato_A[5],candidato_3[5],candidato_C[5],candidato_D[5];
    int total_votos_A = 0,total_votos_3 = 0,total_votos_C = 0,total_votos_D = 0;
    printf("Cuantos votos recibio el candidato A en el: ");
        for(i=0;i<5;i++)
        {
            printf("\nDistrito %d: ",i+1);
            scanf("%d",&candidato_A[i]);
            total_votos_A = total_votos_A + candidato_A[i];

        }
     printf("\n");

     printf("Cuantos votos recibio el candidato 3 en el: ");
        for(i=0;i<5;i++)
        {
            printf("\nDistrito %d: ",i+1);
            scanf("%d",&candidato_3[i]);
            total_votos_3 = total_votos_3 + candidato_3[i];

        }
     printf("\n");

     printf("Cuantos votos recibio el candidato C en el: ");
        for(i=0;i<5;i++)
        {
            printf("\nDistrito %d: ",i+1);
            scanf("%d",&candidato_C[i]);
            total_votos_C = total_votos_C + candidato_C[i];

        }
     printf("\n");

     printf("Cuantos votos recibio el candidato D en el: ");
        for(i=0;i<5;i++)
        {
            printf("\nDistrito %d: ",i+1);
            scanf("%d",&candidato_D[i]);
            total_votos_D = total_votos_D + candidato_D[i];

        }

    printf("\n\nDistrito   Candidato_A   Candidato_3   Candidato_C   Candidato_D");
    printf("\n\n  1");
    printf("\n  2");
    printf("\n  3");
    printf("\n  4");
    printf("\n  5");

    printf("\n\nEl candidato A tuvo un total de: %d",total_votos_A);
    printf("\nEl candidato 3 tuvo un total de: %d",total_votos_3);
    printf("\nEl candidato C tuvo un total de: %d",total_votos_C);
    printf("\nEl candidato D tuvo un total de: %d",total_votos_D);
    printf("\n\n");

    if(total_votos_A> total_votos_3 && total_votos_A> total_votos_C && total_votos_A> total_votos_D)
    {
        printf("El candidato A es el ganador.");
    }
    else if(total_votos_3> total_votos_A && total_votos_3> total_votos_C && total_votos_3> total_votos_D)
    {
        printf("El candidato 3 es el ganador.");
    }
    else if(total_votos_C> total_votos_A && total_votos_C> total_votos_3 && total_votos_C> total_votos_D)
    {
        printf("El candidato C es el ganador.");
    }
    else if(total_votos_D> total_votos_A && total_votos_D> total_votos_3 && total_votos_D> total_votos_C)
    {
        printf("El candidato D es el ganador.");
    }




    return 0;
}
//funciones desarrolladas
