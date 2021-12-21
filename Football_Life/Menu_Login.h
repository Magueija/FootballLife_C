#ifndef MENU_LOGIN_H_INCLUDED
#define MENU_LOGIN_H_INCLUDED

menu_login_direcao(){

    int menu;

    do{
        titulo2();
        printf("\n\n\n\n\n");
        printf("                                              //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                              //\\\\        LOGIN       //\\\\                \n");
        printf("                                              //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                              //\\\\   [1] - Login      //\\\\                \n");
        printf("                                              //\\\\   [2] - Registar   //\\\\                \n");
        printf("                                              //\\\\   [0] - Voltar     //\\\\                \n");
        printf("                                              //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                              > ");
        scanf("%i",&menu);
        switch(menu)
        {
            case 1: login_direcao();break;

            case 2: registar();break;

            case 0: textcolor(LIGHTRED);
                    printf("\n                                              [!] A Voltar");
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
                        printf("                                              [!] Opção inválida, tente novamente.\n");
                        textcolor(WHITE);
                        Sleep(1000);
                        system("cls");
                        break;

        }
    }while(menu!=0);
}

menu_login_Equipa_Tecnica(){
    int menu;

    do{
        titulo2();
        printf("\n\n\n\n\n");
        printf("                                              //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                              //\\\\        LOGIN       //\\\\                \n");
        printf("                                              //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                              //\\\\   [1] - Login      //\\\\                \n");
        printf("                                              //\\\\   [2] - Registar   //\\\\                \n");
        printf("                                              //\\\\   [0] - Voltar     //\\\\                \n");
        printf("                                              //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                              > ");
        scanf("%i",&menu);
        switch(menu)
        {
            case 1: login_Equipa_Tecnica();break;

            case 2: registar();break;

            case 0: textcolor(LIGHTRED);
                    printf("\n                                              [!] A Voltar");
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
                        printf("                                              [!] Opção inválida, tente novamente.\n");
                        textcolor(WHITE);
                        Sleep(1000);
                        system("cls");
                        break;

        }
    }while(menu!=0);
}

menu_login_atletas(){
    int menu;

    do{
        titulo2();
        printf("\n\n\n\n\n");
        printf("                                              //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                              //\\\\        LOGIN       //\\\\                \n");
        printf("                                              //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                              //\\\\   [1] - Login      //\\\\                \n");
        printf("                                              //\\\\   [2] - Registar   //\\\\                \n");
        printf("                                              //\\\\   [0] - Voltar     //\\\\                \n");
        printf("                                              //\\\\//\\\\//\\\\//\\\\//\\\\//\\\\//\\\\    \n");
        printf("                                              > ");
        scanf("%i",&menu);
        switch(menu)
        {
            case 1: login_atletas();break;

            case 2: registar();break;

            case 0: textcolor(LIGHTRED);
                    printf("\n                                              [!] A Voltar");
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
                        printf("                                              [!] Opção inválida, tente novamente.\n");
                        textcolor(WHITE);
                        Sleep(1000);
                        system("cls");
                        break;

        }
    }while(menu!=0);
}

#endif // MENU_LOGIN_H_INCLUDED
