#include <stdio.h>
#include <stdlib.h>
void printmain();
void addition();
void soustraction();
void multiplication();
void division();
int main()

{
        int o;



        printmain();

        scanf("%d",&o);

        if (o == 1){

            addition();

        }

        else if (o == 2){

            soustraction();
        }

        if (o == 3){

            multiplication();

        }

        else if (o == 4){

            division();

        }
        else if (o == 5){

            exit(0);

        }

    else {

            printf("error");
            exit(0);
        }

    return 0;
}



void printmain()
{
    printf("\t*********************************** Calculatrice V0.1   ***********************************\n");
    printf("[1]-La addition \n");
    printf("[2]-La soustraction \n");
    printf("[3]-La multiplication \n");
    printf("[4]-La division \n");
    printf("[5]-Exit \n");

}

void addition()
{
    float A,B;
    int op;
    int rea,back;
    int i;



        system("cls");

        printf("donner le premier valeur : \n");
        scanf("%f",&A);

        printf("donner le deuxième valeur : \n");
        scanf("%f",&B);

        printf("%.2f + %.2f = %.2f",A,B,A+B);

        printf("\n voulez-vous continuer? (y/n):");
        rea=getche();
        system("cls");



        for (i=0 ; i<'y' ; i++){

        if (rea=='y'|| rea=='Y')
        {
        printf("\n donner le premier valeur : \n");
        scanf("%f",&A);

        printf("\n donner le deuxième valeur : \n");
        scanf("%f",&B);

        printf("%.2f + %.2f = %.2f",A,B,A+B);

        printf("\n voulez-vous continuer? (y/n):");
        rea=getche();
        i++;
        system("cls");

            }

             else if (rea=='n' || rea=='N'){

            system("cls");
            printf("[1]-Retourner au menu\n");
            printf("[2]-Exiit\n");
            scanf("%d",&back);
            }


             if (back == 1){

            system("cls");
            main();



            }

            else if (back == 2){

                    exit(0);

            }}

}

void soustraction()

{
    float A,B;
    int op;
    int rea,back;
    int i;


        system("cls");

        printf("donner le premier valeur : \n");
        scanf("%f",&A);

        printf("donner le deuxième valeur : \n");
        scanf("%f",&B);

        printf("%.2f - %.2f = %.2f",A,B,A-B);

        printf("\n voulez-vous continuer? (y/n):");
        rea=getche();
        system("cls");



        for (i=0 ; i<'y' ; i++){

        if (rea=='y'|| rea=='Y')
        {
        printf("\n donner le premier valeur : \n");
        scanf("%f",&A);

        printf("\n donner le deuxième valeur : \n");
        scanf("%f",&B);

        printf("%.2f - %.2f = %.2f",A,B,A-B);

        printf("\n voulez-vous continuer? (y/n):\n");
        rea=getche();
        i++;
        system("cls");

            }

             else if (rea=='n' || rea=='N'){

            system("cls");
            printf("[1]-Retourner au menu\n");
            printf("[2]-Exit\n");
            scanf("%d",&back);
            }


             if (back == 1){

            system("cls");
            main();

            }

            else if (back == 2){

                    exit(0);

            }}


}

void multiplication()
   {

    float A,B;
    int op;
    int rea,back;
    int i;


        system("cls");

        printf("donner le preimier valeur : \n");
        scanf("%f",&A);

        printf("donner le deuxieme valeur : \n");
        scanf("%f",&B);

        printf("%.2f * %.2f = %.2f",A,B,A*B);

        printf("\nvous-pouvez contunier (y/n):");
        rea=getche();
        system("cls");



        for (i=0 ; i<'y' ; i++){

        if (rea=='y'|| rea=='Y')
        {
        printf("\ndonner le preimier valeur : \n");
        scanf("%f",&A);

        printf("\ndonner le deuxieme valeur : \n");
        scanf("%f",&B);

        printf("%.2f * %.2f = %.2f",A,B,A*B);

        printf("\nvous-pouvez contunier (y/n):\n");
        rea=getche();
        i++;
        system("cls");

            }

             else if (rea=='n' || rea=='N'){

            system("cls");
            printf("[1]-retourner au menu\n");
            printf("[2]-quitter\n");
            scanf("%d",&back);
            }


             if (back == 1){

            system("cls");
            main();

            }

            else if (back == 2){

                    exit(0);

            }}

}

void division()
{


     float A,B;
    int op;
    int rea,back;
    int i;


        system("cls");

        printf("donner le premier valeur : \n");
        scanf("%f",&A);

        printf("donner le deuxième valeur : \n");
        scanf("%f",&B);

        printf("%.2f / %.2f = %.2f",A,B,A/B);

        printf("\n voulez-vous continuer? (y/n):");
        rea=getche();
        system("cls");



        for (i=0 ; i<'y' ; i++){

        if (rea=='y'|| rea=='Y')
        {
        printf("\n donner le premier valeur : \n");
        scanf("%f",&A);

        printf("\n donner le deuxième valeur : \n");
        scanf("%f",&B);

        printf("%.2f / %.2f = %.2f",A,B,A*B);

        printf("\n voulez-vous continuer? (y/n):\n");
        rea=getche();
        i++;
        system("cls");

            }

             else if (rea=='n' || rea=='N'){

            system("cls");
            printf("[1]-Retourner au menu\n");
            printf("[2]-EXIT\n");
            scanf("%d",&back);
            }


             if (back == 1){

            system("cls");
            main();

            }

            else if (back == 2){

                    exit(0);

            }}


}
