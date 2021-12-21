#ifndef EQUIPA_TECNICA_H_INCLUDED
#define EQUIPA_TECNICA_H_INCLUDED


filecall2()
{
    int dia,mes,ano;
    int hora,minuto;
    char campo[35];
    char adv[35];

    FILE*Jogo;
    Jogo = fopen("Jogo.txt","w+");
    system("cls");
    titulo2();
    printf("\n\n\n\n\n");
    printf("                                          //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
    printf("                                          //\\\\            JOGO            //\\\\                \n");
    printf("                                          //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
    printf("\n                                           Equipa Adversária: ");
    fflush(stdin);
    gets(adv);
    fprintf(Jogo,"\n EQUIPA ADVERSÁRIA: %s",adv);
    printf("                                           Dia (DD/MM/AAAA): ");
    scanf("%i%i%i",&dia,&mes,&ano);
    fprintf(Jogo,"\n DIA: %i/%i/%i",dia,mes,ano);
    printf("                                           Hora do Jogo (HH:MM): ");
    scanf("%i%i",&hora,&minuto);
    fprintf(Jogo,"\n HORA DO JOGO: %i:%i",hora,minuto);
    printf("                                           Hora de concentração em casa (HH:MM): ");
    scanf("%i%i",&hora,&minuto);
    fprintf(Jogo,"\n HORA DE CONCENTRAÇÃO (CASA): %i:%i",hora,minuto);
    printf("                                           Campo: ");
    fflush(stdin);
    gets(campo);
    fprintf(Jogo,"\n CAMPO: %s",campo);
    fclose(Jogo);
    system("cls");
}

struct convocato
{
    char nome[18][18];
};

filecall3()
{
    int i;
    struct convocato conv;

    FILE*op;
    op = fopen("Convocatoria.txt","w+");
    system("cls");
    titulo2();
    printf("\n\n\n\n\n");
    printf("                                          //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
    printf("                                          //\\\\     CONVOCADOS (18)    //\\\\                \n");
    printf("                                          //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n\n");
    fprintf(op," CONVOCADOS (18): \n");
    for(i=0; i<18; i++)
    {
        printf("                                          > ");
        fflush(stdin);

        gets(conv.nome[i]);
        fprintf(op,"\n  > %s",conv.nome[i]);
    }
    fclose(op);
    system("cls");
}

Equipa_Tecnica(){

    int menu;

        do{
        titulo2();
        printf("\n\n\n\n\n");
        printf("                                //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                //\\\\                     EQUIPA TÉCNICA                 //\\\\                \n");
        printf("                                //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\   \n");
        printf("                                //\\\\   [1] - Inserir informações sobre o próximo Jogo   //\\\\                \n");
        printf("                                //\\\\   [2] - Fazer a convocatória                       //\\\\                \n");
        printf("                                //\\\\   [0] - Logout                                     //\\\\                \n");
        printf("                                //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                > ");
        scanf("%i",&menu);
        switch(menu)
        {
            case 1: filecall2();
                    break;

            case 2: filecall3();
                    break;


            case 0: textcolor(LIGHTRED);
                    printf("\n                                [!] Logout");
                    Sleep(300);
                    printf(".");
                    Sleep(500);
                    printf(".");
                    Sleep(700);
                    printf(".");
                    Sleep(750);
                    textcolor(WHITE);
                    system("CLS");
                    break;

            default:    textcolor(LIGHTRED);
                        printf("                                [!] Opção inválida, tente novamente.\n");
                        textcolor(WHITE);
                        Sleep(1000);
                        system("cls");
                        break;

        }
    }while(menu!=0);

}

#endif // EQUIPA_TECNICA_H_INCLUDED
