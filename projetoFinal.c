#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <windows.h>

typedef struct Atributos
{
    float Sp;
    float St;
    float Ac;
    float atb;
} atributos;

bool continuar(int x)
{
    return (x != 0);
}
atributos treino(float Sp, float St, float Ac, char nome[])
{
    atributos r;
    int esc;
    float atb;
    puts("");
    printf("*********TREINAMENTO*********\n");
    printf("\n");

    printf("Qual atributo do(a) %s voce gostaria de aprimorar?\n ", nome);
    printf("\n");
    printf("1:Velocidade\n");
    printf("2:Resistencia\n");
    printf("3:Aceleracao\n");
    scanf("%d", &esc);
    switch (esc)
    {
    case 1:
        printf("A velocidade do(a) %s aumentou em 1 ponto!\n", nome);
        Sp++;
        break;
    case 2:
        printf("A Resistencia do(a) %s aumentou em 1 ponto!\n", nome);
        St++;
        break;
    case 3:
        printf("A aceleracao do(a) %s aumentou em 1 ponto!\n", nome);
        Ac++;
        break;
    default:
        printf("Voce falhou o treinamento!\n");
        break;
    }
    r.Sp = Sp;
    r.St = St;
    r.Ac = Ac;
    r.atb = Sp + St + Ac;
    system("cls");
    printf("\n");
    printf("Os atributos do seu cavalo sao:\n");
    printf("Velocidade %f \n Resistencia %f \n Aceleracao %f \n", Sp, St, Ac);
    atb = Sp + St + Ac;
    return r;
}
void corrida()
{
    puts("pronto para comecar?");
    system("pause");
    system("cls");
    printf("A corrida comeca em 3\n");
    Sleep(1000);
    printf("A corrida comeca em 2\n");
    Sleep(1000);
    printf("A corrida comeca em 1\n");
    Sleep(1000);
}
void animacaowin1()
{
    puts("1=======================|");
    puts("2=======================|");
    Sleep(350);
    system("cls");
    puts("=1======================|");
    puts("=2======================|");
    Sleep(350);
    system("cls");
    puts("===1====================|");
    puts("==2=====================|");
    Sleep(350);
    system("cls");
    puts("======1=================|");
    puts("====2===================|");
    Sleep(350);
    system("cls");
    puts("=======1===============|");
    puts("======2================|");
    Sleep(350);
    system("cls");
    puts("=========1=============|");
    puts("=========2=============|");
    Sleep(350);
    system("cls");
    puts("==========1============|");
    puts("===========2===========|");
    Sleep(350);
    system("cls");
    puts("============1==========|");
    puts("==============2========|");
    Sleep(350);
    system("cls");
    puts("==============1========|");
    puts("===============2=======|");
    Sleep(350);
    system("cls");
    puts("=================1=====|");
    puts("================2======|");
    Sleep(350);
    system("cls");
    puts("===================1===|");
    puts("==================2====|");
    Sleep(350);
    system("cls");
    puts("====================1==|");
    puts("===================2===|");
    Sleep(350);
    system("cls");
    puts("=====================1=|");
    puts("====================2==|");
    Sleep(350);
    system("cls");
    puts("======================1|");
    puts("=====================2=|");
}
void animacaowin2()
{
    puts("1=======================|");
    puts("2=======================|");
    Sleep(350);
    system("cls");
    puts("=1======================|");
    puts("=2======================|");
    Sleep(350);
    system("cls");
    puts("===1====================|");
    puts("==2=====================|");
    Sleep(350);
    system("cls");
    puts("======1=================|");
    puts("====2===================|");
    Sleep(350);
    system("cls");
    puts("=======1===============|");
    puts("======2================|");
    Sleep(350);
    system("cls");
    puts("=========1=============|");
    puts("=========2=============|");
    Sleep(350);
    system("cls");
    puts("=============1=========|");
    puts("============2==========|");
    Sleep(350);
    system("cls");
    puts("===============1=======|");
    puts("=============2=========|");
    Sleep(350);
    system("cls");
    puts("=================1=====|");
    puts("==============2========|");
    Sleep(350);
    system("cls");
    puts("===================1===|");
    puts("================2======|");
    Sleep(350);
    system("cls");
    puts("=====================1=|");
    puts("==================2====|");
    Sleep(350);
    system("cls");
    puts("======================1|");
    puts("===================2===|");
}
void animacaoloss()
{
    puts("1=======================|");
    puts("2=======================|");
    Sleep(350);
    system("cls");
    puts("=1======================|");
    puts("=2======================|");
    Sleep(350);
    system("cls");
    puts("===1====================|");
    puts("==2=====================|");
    Sleep(350);
    system("cls");
    puts("======1=================|");
    puts("====2===================|");
    Sleep(350);
    system("cls");
    puts("=======1===============|");
    puts("======2================|");
    Sleep(350);
    system("cls");
    puts("=========1=============|");
    puts("=========2=============|");
    Sleep(350);
    system("cls");
    puts("=============1=========|");
    puts("============2==========|");
    Sleep(350);
    system("cls");
    puts("=============1=========|");
    puts("==============2========|");
    Sleep(350);
    system("cls");
    puts("==============1========|");
    puts("================2======|");
    Sleep(350);
    system("cls");
    puts("===============1=======|");
    puts("===================2===|");
    Sleep(350);
    system("cls");
    puts("================1======|");
    puts("=====================2=|");
    Sleep(350);
    system("cls");
    puts("=================1=====|");
    puts("======================2|");
    Sleep(350);
    system("cls");
}
void animacaoloss2()
{
    puts("1=======================|");
    puts("2=======================|");
    Sleep(350);
    system("cls");
    puts("=1======================|");
    puts("=2======================|");
    Sleep(350);
    system("cls");
    puts("===1====================|");
    puts("==2=====================|");
    Sleep(350);
    system("cls");
    puts("======1=================|");
    puts("====2===================|");
    Sleep(350);
    system("cls");
    puts("=======1===============|");
    puts("======2================|");
    Sleep(350);
    system("cls");
    puts("=========1=============|");
    puts("=========2=============|");
    Sleep(350);
    system("cls");
    puts("=============1=========|");
    puts("============2==========|");
    Sleep(350);
    system("cls");
    puts("=============1=========|");
    puts("==============2========|");
    Sleep(350);
    system("cls");
    puts("===============1=======|");
    puts("================2======|");
    Sleep(350);
    system("cls");
    puts("================1======|");
    puts("==================2====|");
    Sleep(350);
    system("cls");
    puts("==================1====|");
    puts("===================2===|");
    Sleep(350);
    system("cls");
    puts("====================1==|");
    puts("====================2==|");
    Sleep(350);
    system("cls");
    puts("=====================1=|");
    puts("======================2|");
}
int main()
{

    int cont, tk, esc, x = 1, car, atb, min = 1, max, win = 0, loss = 0, tut;
    char nome[20], Nomecorrida[20];

    do
    {
        int Sp = 1, St = 1, Ac = 1;
        puts("================================================================================================================");
        puts("       *************                 _____ ___   _   _                   *************                          ");
        puts("     *****************              | ____/ _ \\ | | | |                *****************                       ");
        puts("   ****             ****            |  _|| | | || | | |              ****             ****                      ");
        puts("  ***                 ***           | |__| |_| || |_| |             ***                 ***                     ");
        puts(" ***                   ***          |_____\\__\\_\\ \\___/             ***                   ***                ");
        puts(" ***                   ***                                         ***                   ***                    ");
        puts("  ***                 ***                                           ***                 ***                     ");
        puts("   ****             ****         \033[3mEQUINOS ULTIMATE RACING\033[0m             ****             ****        ");
        puts("     *****       *****                                                 *****       *****                        ");
        puts("================================================================================================================");
        printf("\n");
        printf("Bem vindo ao Equino's Ultimate Racing!\n");
        printf("digite o nome do seu cavalo para comecar o jogo!\n");
        fgets(nome, 20, stdin);
        nome[strcspn(nome, "\n")] = 0;
        puts("Gostaria de ver o tutorial?  1 - Sim  0 - Nao");
        scanf("%d", &tut);
        if (tut == 1)
        {
            system("cls");
            puts("1 - Comece escolhendo um nome para o seu cavalo\n");
            puts("2 - Escolha a regiao onde seu cavalo ira competir, cada regiao possui 3 corridas diferentes!\n");
            puts("3 - Voce tera 5 rodadas para treinar seu cavalo e melhorar seus atributos antes de cada corrida, os atributos são: Velocidade, Resistencia e Aceleracao\n");
            puts("4 - Atente-se a distancia das corridas elas pode fazer com que certos atributos tenham mais importancia para sua vitoria\n");
            puts("5 - Busque o maior numero de vitorias e se divirta! :)\n");
            system("pause");
        }

        nome[strcspn(nome, "\n")] = 0;
        system("cls");
        printf("Onde sera a carreira do %s? \n", nome);
        printf("1-Japao\n2-Estados Unidos\n");
        if (car != 1 && car != 2)
        {
            car = 1;
        }
        scanf("%d", &car);
        system("cls");
        tk = 3;
        while (tk != 0)
        {
            cont = 5;
            if (car == 1)
            {
                switch (tk)
                {
                case 3:
                    puts("Sua proxima corrida e a Satsuki Sho (2000m) distancia media");
                    break;
                case 2:
                    puts("Sua proxima corrida e o Derby Japones (2400m) distancia media");
                    break;
                case 1:
                    puts("Sua proxima corrida e a Kikuka Sho(3200m) distancia longa");
                    break;
                }
                while (cont != 0)
                {
                    puts("");
                    printf("Falta %d rodadas para a corrida\n", cont);
                    atributos result = treino(Sp, St, Ac, nome);
                    Sp = result.Sp;
                    St = result.St;
                    Ac = result.Ac;
                    cont--;
                }
                if (tk == 3)
                {
                    atb = 2 * Sp + St + Ac;
                    max = 10 + atb;
                    int chancesatsu = (rand() % (max - min));
                    system("cls");
                    printf("A Satsuki Sho comecara em breve\n%s e o numero 1\n ", nome);
                    corrida();
                    if (chancesatsu > 14 && St > 1)
                    {
                        if (Sp >= 4)
                        {
                            animacaowin2();
                        }
                        else
                        {
                            animacaowin1();
                        }
                        printf("%s ganhou a Satsuki Sho! Parabens!\n", nome);
                        win++;
                        system("pause");
                        system("cls");
                    }
                    else
                    {
                        if (Sp >= 4)
                        {
                            animacaoloss2();
                        }
                        else
                        {
                            animacaoloss();
                        }
                        printf("%s perdeu a Satsuki Sho\n", nome);
                        loss++;
                        system("pause");
                        system("cls");
                    }
                }
                puts("PROXIMA RODADA");
                system("pause");
                system("cls");
                if (tk == 2)
                {

                    atb = 2 * Sp + St + 2 * Ac;
                    max = 10 + atb;
                    int chancederby = (rand() % (max - min));
                    system("cls");
                    printf("O Derby Japones ira comecar em breve\n%s e o numero 1\n ", nome);
                    corrida();
                    if (chancederby > 18 && St > 3)
                    {
                        if (Ac > 3)
                        {
                            animacaowin2();
                        }
                        else
                        {
                            animacaowin1();
                        }
                        printf("%s ganhou o Derby Japones! Parabens!\n", nome);
                        win++;
                        system("pause");
                        system("cls");
                    }
                    else
                    {
                        if (Ac >= 4)
                        {
                            animacaoloss2();
                        }
                        else
                        {
                            animacaoloss();
                        }
                        printf("%s perdeu o Derby Japones\n", nome);
                        loss++;
                        system("pause");
                        system("cls");
                    }
                }
                if (tk == 1)
                {

                    atb = Sp + 2 * St + Ac;
                    max = 10 + atb;
                    int chancekiku = (rand() % (max - min));
                    system("cls");
                    printf("A Kikuka Sho comecara em breve\n%s e o numero 1\n ", nome);
                    corrida();
                    if (chancekiku > 20 && St > 3)
                    {
                        if (St >= 5)
                        {
                            animacaowin2();
                        }
                        else
                        {
                            animacaowin1();
                        }
                        printf("%s ganhou a Kikuka Sho! Parabens!\n", nome);
                        win++;
                        system("pause");
                        system("cls");
                    }
                    else
                    {
                        if (St >= 7)
                        {
                            animacaoloss2();
                        }
                        else
                        {
                            animacaoloss();
                        }
                        printf("%s perdeu a Kikuka Sho\n", nome);
                        loss++;
                        system("pause");
                        system("cls");
                    }
                }
                tk--;
            }
            else if (car == 2)
            {
                switch (tk)
                {
                case 3:
                    puts("Sua proxima corrida e o Derby do Kentucky (2000m) distancia media");
                    break;
                case 2:
                    puts("Sua proxima corrida e o Preakness Stakes (1900m)distancia curta");
                    break;
                case 1:
                    puts("Sua proxima corrida e a Belmont Stakes(2400m)distancia media");
                    break;
                }
                while (cont != 0)
                {
                    puts("");
                    printf("Falta %d rodadas para a corrida\n", cont);
                    atributos result = treino(Sp, St, Ac, nome);
                    Sp = result.Sp;
                    St = result.St;
                    Ac = result.Ac;
                    cont--;
                }
                if (tk == 3)
                {
                    atb = 2 * Sp + St + Ac;
                    max = 10 + atb;
                    int chancekent = (rand() % (max - min));
                    system("cls");
                    printf("O Derby do Kentucky comecara em breve\n%s e o numero 1\n ", nome);
                    corrida();
                    if (chancekent > 14 && St > 1)
                    {
                        if (Ac > 3)
                        {
                            animacaowin2();
                        }
                        else
                        {
                            animacaowin1();
                        }
                        printf("%s ganhou o Derby do Kentucky! Parabens!\n", nome);
                        win++;
                        system("pause");
                        system("cls");
                    }
                    else
                    {
                        if (Sp >= 4)
                        {
                            animacaoloss2();
                        }
                        else
                        {
                            animacaoloss();
                        }
                        printf("%s perdeu o Derby do Kentucky\n", nome);
                        loss++;
                        system("pause");
                        system("cls");
                    }
                }
                puts("PROXIMA RODADA");
                system("pause");
                system("cls");
                if (tk == 2)
                {

                    atb = 2 * Sp + St + 2 * Ac;
                    max = 10 + atb;
                    int chancepreak = (rand() % (max - min));
                    system("cls");
                    printf("O Preakness Stakes ira comecar em breve\n%s e o numero 1\n ", nome);
                    corrida();
                    if (chancepreak > 18 && St > 3)
                    {
                        if (Ac > 3)
                        {
                            animacaowin2();
                        }
                        else
                        {
                            animacaowin1();
                        }
                        printf("%s ganhou o Preakness Stakes! Parabens!\n", nome);
                        win++;
                        system("pause");
                        system("cls");
                    }
                    else
                    {
                        if (Ac >= 4)
                        {
                            animacaoloss2();
                        }
                        else
                        {
                            animacaoloss();
                        }
                        printf("%s perdeu o Preakness Stakes\n", nome);
                        loss++;
                        system("pause");
                        system("cls");
                    }
                }
                if (tk == 1)
                {

                    atb = 2 * Sp + St + Ac;
                    max = 10 + atb;
                    int chancebel = (rand() % (max - min));
                    system("cls");
                    printf("O Belmont Stakes comecara em breve\n%s e o numero 1\n", nome);
                    corrida();
                    if (chancebel > 20 && St > 3)
                    {
                        if (Sp >= 8)
                        {
                            animacaowin2();
                        }
                        else
                        {
                            animacaowin1();
                        }
                        printf("%s ganhou a Belmont Stakes! Parabens!\n", nome);
                        win++;
                        system("pause");
                        system("cls");
                    }
                    else
                    {
                        if (Sp >= 7)
                        {
                            animacaoloss2();
                        }
                        else
                        {
                            animacaoloss();
                        }
                        printf("%s perdeu o Belmont Stakes\n", nome);
                        loss++;
                        system("pause");
                        system("cls");
                    }
                }
                tk--;
            }
        }
        if (win == 3 && car == 1)
        {
            printf("Parabens %s conquistou a Triplice Coroa Japonesa!\n %s e lendario!\n", nome);
        }
        else if (win == 3 && car == 2)
        {
            printf("Parabens %s conquistou a Triplice Coroa Americana!\n %s e lendario!\n", nome);
        }
        else
        {
            printf("%s terminou sua carreira com %d vitorias e %d derrotas! foi uma carreira memoravel!\n", nome, win, loss);
        }
        printf("Deseja jogar novamente?\n 1-Sim 0-Nao\n");
        scanf("%d", &x);
    }

    while (continuar(x));
    return 0;
}
