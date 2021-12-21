#ifndef ATLETAS_H_INCLUDED
#define ATLETAS_H_INCLUDED


struct convocatoria
{
    char nome[18][18];
};

struct cotas
{
    int num_cartao;
    int val1,val2,val3;
    int cod_seg;
    char nome1[10];
    char nome2[10];
    char mes[20];
};

struct cotas ct;

filecall()
{
    system("Jogo.txt");
    system("cls");
}

filecall6()
{
    system("Convocatoria.txt");
    system("cls");
}

fatura_peg()
{
    char fatura[1];
    char sim[] = "S";
    char nao[] = "N";

    printf("\n\n                                     Deseja ver a Fatura? [S] - Sim [N] - N�o");
    printf("\n                                     > ");
    gets(fatura);
    if(strcmpi(sim,fatura)==0)
    {
        f = fopen("Fatura.txt","w");
        fprintf(f,"\n                                             FATURA");
        fprintf(f,"\n       FOOTBALL LIFE                         M�s: %s",ct.mes);
        fprintf(f,"\n");
        fprintf(f,"\n           ______________________________________");
        fprintf(f,"\n          |    Descri��o     |      Quantia      |");
        fprintf(f,"\n          |  Cota de %s   |       %.2f       |",pag.nome,pag.receber);
        fprintf(f,"\n");
        fprintf(f,"\n           TOTAL: ____________________ %.2f euros",pag.receber);
        fprintf(f,"\n\n");
        fprintf(f,"\n      A Dire��o                 %s %s",ct.nome1,ct.nome2);
        fprintf(f,"\n      Telf: 213014039           N�mero do cart�o: %i",ct.num_cartao);
        fprintf(f,"\n                                Validade (DD/MM/AAAA): %i/%i/%i",ct.val1,ct.val2,ct.val3);
        fclose(f);
        system("Fatura.txt");
        system("pause");
    }
    else if(strcmpi(nao,fatura)==0)
    {
        system("cls");
        atletas();
    }
    else
    {
        textcolor(LIGHTRED);
        printf("                                     [!] Erro! Op��o inv�lida.\n");
        textcolor(WHITE);
        Sleep(1000);
        system("cls");
        titulo2();
        printf("\n\n\n\n\n                                     //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\   \n");
        printf("                                     //\\\\         PAGAR COTA         //\\\\                \n");
        printf("                                     //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\     \n\n");
        fatura_peg();
    }
}

atletas(){


    int menu;
    char fatura[1];
    FILE*f;

        do{
        titulo2();
        printf("\n\n\n\n\n");
        printf("                                     //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                     //\\\\                ATLETAS             //\\\\                \n");
        printf("                                     //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\   \n");
        printf("                                     //\\\\  [1] - Dia/Hora do pr�ximo Jogo    //\\\\                \n");
        printf("                                     //\\\\  [2] - Convocat�ria                //\\\\                \n");
        printf("                                     //\\\\  [3] - Pagar Cota                  //\\\\                \n");
        printf("                                     //\\\\  [0] - Logout                      //\\\\                \n");
        printf("                                     //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                     > ");
        scanf("%i",&menu);
        switch(menu)
        {
            case 1: filecall();
                    break;

            case 2: filecall6();
                    break;

            case 3: system("cls");
                    titulo2();
                    printf("\n\n\n\n\n");
                    printf("                                     //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\   \n");
                    printf("                                     //\\\\         PAGAR COTA         //\\\\                \n");
                    printf("                                     //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\     \n");
                    printf("\n                                     Indique o nome do atleta a pagar: ");fflush(stdin);gets(pag.nome);
                    printf("                                     Indique o m�s que pretende pagar: ");fflush(stdin);gets(ct.mes);
                    printf("                                     Indique o valor da cota mensal: ");scanf("%f",&pag.receber);
                    b = fopen("saldo_do_clube.txt","w");
                    while(fscanf(b,"%f",&md.total) !=EOF)
                    {

                    }
                    md.total = md.total + pag.receber;
                    fprintf(b,"\n Saldo Do Clube: %.2f",md.total);
                    fclose(b);
                    printf("\n                                     Pagamento por cart�o de cr�dito: ");
                    printf("\n                                      > N�mero do cart�o: ");scanf("%i",&ct.num_cartao);
                    printf("                                      > Data de validade (DD/MM/AAAA): ");scanf("%i%i%i",&ct.val1,&ct.val2,&ct.val3);
                    printf("                                      > C�digo de Seguran�a: ");scanf("%i",&ct.cod_seg);
                    printf("                                      > Primeiro nome: ");fflush(stdin);gets(ct.nome1);
                    printf("                                      > �ltimo nome: ");fflush(stdin);gets(ct.nome2);
                    textcolor(LIGHTGREEN);
                    printf("                                     [!] Cota de %s paga!",pag.nome);
                    textcolor(WHITE);
                    Sleep(1000);
                    fatura_peg();
                    c = fopen("Transacoes_do_Clube.txt","a");
                    fprintf(c,"\n Cota de atleta:");
                    fprintf(c,"\n  > %s:  + %.2f euros",pag.nome,pag.receber);
                    fclose(c);
                    system("cls");
                    break;

            case 0: textcolor(LIGHTRED);
                    printf("\n                                     [!] Logout");
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
                        printf("                                     [!] Op��o inv�lida, tente novamente.\n");
                        textcolor(WHITE);
                        Sleep(1000);
                        system("cls");
                        break;

        }
    }while(menu!=0);

}

#endif // ATLETAS_H_INCLUDED
