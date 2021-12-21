#include <stdio.h>
#include <stdlib.h>
#include <conio.c>
#include <locale.h>

struct moeda
{
    float total;
};

struct pagamentos
{
    float receber;
    char nome[50];
};

struct moeda md;
struct pagamentos pag;

FILE*b;
FILE*c;
FILE*w;
FILE*f;

#include "Login.h"
#include "Menu_Login.h"
#include "Titulo.h"
#include "Equipa_Tecnica.h"
#include "Direcao.h"
#include "Atletas.h"

#define cod_direcao 9999
#define cod_equipa_tecnica 2500
#define cod_atleta 1000

int main()
{
    setlocale(LC_ALL,"Portuguese");

    textcolor(BLACK);
    system("pause");
    textcolor(WHITE);
    system("cls");
    titulo();

    int menu,cod;


    do{
        titulo2();
        printf("\n\n\n\n\n");
        printf("                                            //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                            //\\\\           MENU         //\\\\                \n");
        printf("                                            //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                            //\\\\  [1] - Direção         //\\\\                \n");
        printf("                                            //\\\\  [2] - Equipa Técnica  //\\\\                \n");
        printf("                                            //\\\\  [3] - Atletas         //\\\\                \n");
        printf("                                            //\\\\  [0] - Exit            //\\\\                \n");
        printf("                                            //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                            > ");
        scanf("%i",&menu);
        switch(menu)
        {
            case 1: printf("\n                                            Insira o código da direção: ");
                    scanf("%i",&cod);
                    if(cod==cod_direcao)
                    {
                        textcolor(LIGHTGREEN);
                        printf("                                            [!] Acesso concedido!");
                        textcolor(WHITE);
                        Sleep(1000);
                        system("CLS");
                        menu_login_direcao();
                    }
                    else
                    {
                        textcolor(LIGHTRED);
                        printf("                                            [!] Código de Ativação inválido, tente novamente!\n");
                        textcolor(WHITE);
                        Sleep(1000);
                        system("cls");
                    }break;

            case 2: printf("\n                                            Insira o código da equipa técnica: ");
                    scanf("%i",&cod);
                    if(cod==cod_equipa_tecnica)
                    {
                        textcolor(LIGHTGREEN);
                        printf("                                            [!] Acesso concedido!");
                        textcolor(WHITE);
                        Sleep(1000);
                        system("CLS");
                        menu_login_Equipa_Tecnica();
                    }else
                    {
                        textcolor(LIGHTRED);
                        printf("                                            [!] Código de Ativação inválido, tente novamente!\n");
                        textcolor(WHITE);
                        Sleep(1000);
                        system("cls");
                    }break;

            case 3: printf("\n                                            Insira o código do atleta: ");
                    scanf("%i",&cod);
                    if(cod==cod_atleta)
                    {
                        textcolor(LIGHTGREEN);
                        printf("                                            [!] Acesso concedido!");
                        textcolor(WHITE);
                        Sleep(1000);
                        system("CLS");
                        menu_login_atletas();
                    }else
                    {
                        textcolor(LIGHTRED);
                        printf("                                            [!] Código de Ativação inválido, tente novamente!\n");
                        textcolor(WHITE);
                        Sleep(1000);
                        system("cls");
                    }break;

            case 0: textcolor(LIGHTRED);
                    printf("\n                                            [!] A Sair");
                    Sleep(300);
                    printf(".");
                    Sleep(500);
                    printf(".");
                    Sleep(700);
                    printf(".\n\n");
                    textcolor(BLACK);
                    break;

            default:    textcolor(LIGHTRED);
                        printf("                                            [!] Opção inválida, tente novamente.\n");
                        textcolor(WHITE);
                        Sleep(1000);
                        system("cls");
                        break;

        }
    }while(menu!=0);

       return 0;
}
