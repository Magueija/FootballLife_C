#ifndef LOGIN_H_INCLUDED
#define LOGIN_H_INCLUDED

    struct login
{
    int a;
    char utilizador[20], pass[15];

};

struct login log;

registar(){


    system("CLS");
    titulo2();
    printf("\n\n\n\n\n");
    printf("                                           //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\   \n");
    printf("                                           //\\\\          REGISTAR          //\\\\                \n");
    printf("                                           //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
    printf("                                           //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
    printf("                                           //\\\\ Utilizador:                //\\\\\n");
    printf("                                           //\\\\ Password:                  //\\\\\n");
    printf("                                           //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
    gotoxy(61,18);
    scanf("%s%*C",log.utilizador);
    gotoxy(59,19);
    scanf("%s%*C",log.pass);
    Sleep(250);
    strcat(log.utilizador,log.pass);
    FILE*a;
    a = fopen(log.utilizador,"w");
    fprintf(a,"  Bem Vindo! ");
    fclose(a);
    textcolor(LIGHTGREEN);
    printf("\n                                           [!] Conta criada\n");
    textcolor(WHITE);
    Sleep(1000);
    system("cls");
}


login_direcao()
{
    system("cls");
    titulo2();
    printf("\n\n\n\n\n");
    printf("                                           //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\   \n");
    printf("                                           //\\\\            LOGIN           //\\\\                \n");
    printf("                                           //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
    printf("                                           //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
    printf("                                           //\\\\ Utilizador:                //\\\\\n");
    printf("                                           //\\\\ Password:                  //\\\\\n");
    printf("                                           //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
    gotoxy(61,18);
    scanf("%s%*C",log.utilizador);
    gotoxy(59,19);
    scanf("%s%*C",log.pass);
    Sleep(250);
    strcat(log.utilizador,log.pass);
    FILE*a;
    a = fopen(log.utilizador,"r");
    if(!a)

    {
        fclose(a);
        textcolor(LIGHTRED);
        printf("\n                                           [!] Este utilizador não existe.\n");
        textcolor(WHITE);
        Sleep(1000);
        system("cls");

        login_direcao();
    }
    else

    {
        system("cls");
        direcao();
    }
}

login_Equipa_Tecnica()
{
    system("cls");
    titulo2();
    printf("\n\n\n\n\n");
    printf("                                           //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\   \n");
    printf("                                           //\\\\            LOGIN           //\\\\                \n");
    printf("                                           //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
    printf("                                           //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
    printf("                                           //\\\\ Utilizador:                //\\\\\n");
    printf("                                           //\\\\ Password:                  //\\\\\n");
    printf("                                           //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
    gotoxy(61,18);
    scanf("%s%*C",log.utilizador);
    gotoxy(59,19);
    scanf("%s%*C",log.pass);
    Sleep(250);
    strcat(log.utilizador,log.pass);
    FILE*a;
    a = fopen(log.utilizador,"r");
    if(!a)

    {
        fclose(a);
        textcolor(LIGHTRED);
        printf("\n                                           [!] Este utilizador não existe.\n");
        textcolor(WHITE);
        Sleep(1000);
        system("cls");

        login_Equipa_Tecnica();
    }
    else

    {
        system("cls");
        Equipa_Tecnica();
    }
}

login_atletas()
{
    system("cls");
    titulo2();
    printf("\n\n\n\n\n");
    printf("                                           //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\   \n");
    printf("                                           //\\\\            LOGIN           //\\\\                \n");
    printf("                                           //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
    printf("                                           //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
    printf("                                           //\\\\ Utilizador:                //\\\\\n");
    printf("                                           //\\\\ Password:                  //\\\\\n");
    printf("                                           //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
    gotoxy(61,18);
    scanf("%s%*C",log.utilizador);
    gotoxy(59,19);
    scanf("%s%*C",log.pass);
    Sleep(250);
    strcat(log.utilizador,log.pass);
    FILE*a;
    a = fopen(log.utilizador,"r");
    if(!a)

    {
        fclose(a);
        textcolor(LIGHTRED);
        printf("\n                                           [!] Este utilizador não existe.\n");
        textcolor(WHITE);
        Sleep(1000);
        system("cls");

        login_atletas();
    }
    else

    {
        system("cls");
        atletas();
    }
}



#endif // LOGIN_H_INCLUDED
