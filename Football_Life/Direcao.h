#ifndef DIRECAO_H_INCLUDED
#define DIRECAO_H_INCLUDED


struct utilizador
{
    char nome_utilizador[35];
    char pass[35];
};

struct despesas
{
    float equipamento;
    float estrutura;
    float outras;
    char nome[50];
};


direcao(){

    struct despesas desp;

    int menu;
    int menu1;
    int menu3;
    int txt;
    int k;


        md.total=0;
        do{
        titulo2();
        printf("\n\n\n\n\n");
        printf("                                        //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                        //\\\\               DIRE��O              //\\\\                \n");
        printf("                                        //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                        //\\\\   [1] - Verificar Saldo do Clube   //\\\\                \n");
        printf("                                        //\\\\   [2] - Pagar despesas             //\\\\                \n");
        printf("                                        //\\\\   [3] - Receber Pagamentos         //\\\\                \n");
        printf("                                        //\\\\   [0] - Logout                     //\\\\                \n");
        printf("                                        //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                        > ");
        scanf("%i",&menu);
        switch(menu)
        {

                    case 1:
                            do{
                                system("cls");
                                titulo2();
                                printf("\n\n\n\n\n");
                                printf("                                        //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
                                printf("                                        //\\\\                 CLUBE              //\\\\                \n");
                                printf("                                        //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
                                printf("                                        //\\\\   [1] - Ver Saldo do Clube         //\\\\                \n");
                                printf("                                        //\\\\   [2] - Ver Transa��es do Clube    //\\\\                \n");
                                printf("                                        //\\\\   [0] - Voltar                     //\\\\                \n");
                                printf("                                        //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
                                printf("                                        > ");
                                scanf("%i",&menu3);
                                switch(menu3)
                                {
                                    case 1: system("Csaldo_do_clube.txt");
                                            break;

                                    case 2: system("Transacoes_do_Clube.txt");
                                            break;

                                    case 0: textcolor(LIGHTRED);
                                            printf("\n                                        [!] A Voltar");
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
                                                printf("                                        [!] Op��o inv�lida, tente novamente.\n");
                                                textcolor(WHITE);
                                                Sleep(1000);
                                                system("cls");
                                                break;
                                }
                            }while(menu3!=0);break;

                        case 2:
                                do{
                                system("cls");
                                titulo2();
                                printf("\n\n\n\n\n");
                                printf("                                   //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
                                printf("                                   //\\\\                 PAGAR DESPESAS                 //\\\\                \n");
                                printf("                                   //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
                                printf("                                   //\\\\ [1] - Pagar despesas de equipamento            //\\\\                \n");
                                printf("                                   //\\\\ [2] - Pagar despesas do campo e de estruturas  //\\\\                \n");
                                printf("                                   //\\\\ [3] - Pagar despesas adicionais                //\\\\                \n");
                                printf("                                   //\\\\ [0] - Voltar                                   //\\\\                \n");
                                printf("                                   //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
                                printf("                                   > ");
                                scanf("%i",&menu1);
                                switch(menu1)
                                {

                                    case 1: system("cls");
                                            titulo2();
                                            printf("\n\n\n\n\n");
                                            printf("                                     //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
                                            printf("                                     //\\\\    PAGAR DESPESAS DE EQUIPAMENTO   //\\\\                \n");
                                            printf("                                     //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
                                            printf("\n                                     Indique o valor a pagar: ");scanf("%f",&desp.equipamento);
                                            b = fopen("saldo_do_clube.txt","w");
                                            while(fscanf(b,"%f",&md.total) !=EOF)
                                            {

                                            }
                                            md.total = md.total - desp.equipamento;
                                            fprintf(b,"\n Saldo Do Clube: %.2f",md.total);
                                            fclose(b);
                                            textcolor(LIGHTGREEN);
                                            printf("                                     [!] Despesas de Equipamento pagas!");
                                            textcolor(WHITE);
                                            Sleep(1000);
                                            c = fopen("Transacoes_do_Clube.txt","a");
                                            fprintf(c,"\n Despesas:");
                                            fprintf(c,"\n  > Equipamento:  - %.2f euros",desp.equipamento);
                                            fclose(c);
                                            system("cls");
                                            break;

                                    case 2:  system("cls");
                                            titulo2();
                                            printf("\n\n\n\n\n");
                                            printf("                                     //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
                                            printf("                                     //\\\\     PAGAR DESPESAS DE CAMPO E ESTRUTURAS     //\\\\                \n");
                                            printf("                                     //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
                                            printf("\n                                     Indique o valor a pagar: ");scanf("%f",&desp.estrutura);
                                            b = fopen("saldo_do_clube.txt","w");
                                            while(fscanf(b,"%f",&md.total) !=EOF)
                                            {

                                            }
                                            md.total = md.total - desp.estrutura;
                                            fprintf(b,"\n Saldo Do Clube: %.2f",md.total);
                                            fclose(b);
                                            textcolor(LIGHTGREEN);
                                            printf("                                     [!] Despesas do campo e de estruturas pagas!");
                                            textcolor(WHITE);
                                            Sleep(1000);
                                            c = fopen("Transacoes_do_Clube.txt","a");
                                            fprintf(c,"\n\n Despesas:");
                                            fprintf(c,"\n  > Campo e Estruturas:  - %.2f euros",desp.estrutura);
                                            fclose(c);
                                            system("cls");
                                            break;

                                    case 3:  system("cls");
                                            titulo2();
                                            printf("\n\n\n\n\n");
                                            printf("                                     //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\   \n");
                                            printf("                                     //\\\\     PAGAR DESPESAS ADICIONAIS    //\\\\                \n");
                                            printf("                                     //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\ //\\\\//\\\\//\\\\   \n");
                                            printf("\n                                    Indique a nome da despesa a pagar: ");fflush(stdin);gets(desp.nome);
                                            printf("                                    Indique o valor a pagar: ");scanf("%f",&desp.outras);
                                            b = fopen("saldo_do_clube.txt","w");
                                            while(fscanf(b,"%f",&md.total) !=EOF)
                                            {

                                            }
                                             md.total = md.total - desp.outras;
                                            fprintf(b,"\n Saldo Do Clube: %.2f",md.total);
                                            fclose(b);
                                            textcolor(LIGHTGREEN);
                                            printf("                                   [!] Despesa de %s paga!",desp.nome);
                                            textcolor(WHITE);
                                            Sleep(1000);
                                            c = fopen("Transacoes_do_Clube.txt","a");
                                            fprintf(c,"\n Despesas:");
                                            fprintf(c,"\n  > %s:  - %.2f euros",desp.nome,desp.outras);
                                            fclose(c);
                                            system("cls");
                                            break;

                                            case 0: textcolor(LIGHTRED);
                                                    printf("\n                                   [!] A Voltar");
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
                                                            printf("                                   [!] Op��o inv�lida, tente novamente.\n");
                                                            textcolor(WHITE);
                                                            Sleep(1000);
                                                            system("cls");
                                                            break;
                                            }

                                            }while(menu1!=0);break;






                        case 3:  system("cls");
                                titulo2();
                                printf("\n\n\n\n\n");
                                printf("                                     //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
                                printf("                                     //\\\\             RECEBER PAGAMENTOS         //\\\\                \n");
                                printf("                                     //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\     \n");
                                printf("\n                                     Indique o nome do pagamento a receber: ");fflush(stdin);gets(pag.nome);
                                printf("                                     Indique o valor a receber: ");scanf("%f",&pag.receber);
                                b = fopen("saldo_do_clube.txt","w");
                                while(fscanf(b,"%f",&md.total) !=EOF)
                                {

                                }
                                md.total = md.total + pag.receber;
                                fprintf(b,"\n Saldo Do Clube: %.2f",md.total);
                                fclose(b);
                                textcolor(LIGHTGREEN);
                                printf("                                     [!] Pagamento de %s recebido!",pag.nome);
                                textcolor(WHITE);
                                Sleep(1000);
                                c = fopen("Transacoes_do_Clube.txt","a");
                                fprintf(c,"\n Receber Pagamentos:");
                                fprintf(c,"\n  > %s:  + %.2f euros",pag.nome,pag.receber);
                                fclose(c);
                                system("cls");
                                break;


                        case 0: textcolor(LIGHTRED);
                                printf("\n                                        [!] Logout");
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
                                    printf("                                        [!] Op��o inv�lida, tente novamente.\n");
                                    textcolor(WHITE);
                                    Sleep(1000);
                                    system("cls");
                                    break;
                        }
                    }while(menu!=0);



}

#endif // DIRECAO_H_INCLUDED
