#include <stdio.h>
#include <stdlib.h>
#include<locale.h> // necessário para colocar a localização
#include<windows.h> // necessário para usar o SetConsoleTitle
#include<ctype.h>// necessário para usar o toupper
#include<string.h>


int main(void) //deixar implitico é um problema
{

    //Título e língua//
    setlocale(LC_ALL,"Portuguese"); //colocando localização
    SetConsoleTitle(" Quiz Animes "); //Colocando título
    // system("title quiz");  //outra forma de colocar um titulo






    int j;

    char naruto1[2],naruto2[2],naruto3[2],naruto4[2],naruto5[2],naruto6[2],naruto7[2],naruto8[2],naruto9[2],naruto10[2];
    naruto1[2]=naruto2[2]=naruto3[2]=naruto4[2]=naruto5[2]=naruto6[2]=naruto7[2]=naruto8[2]=naruto9[2]=naruto10[2]=0;
    int compnaruto1,compnaruto2,compnaruto3,compnaruto4,compnaruto5,compnaruto6,compnaruto7,compnaruto8,compnaruto9,compnaruto10;




    /*char pokemon1[2],pokemon2[2],pokemon3[2],pokemon4[2],pokemon5[2],pokemon6[2],pokemon7[2],pokemon8[2],pokemon9[2],pokemon10[2];
    pokemon1[2]=pokemon2[2],pokemon3[2],pokemon4[2],pokemon5[2],pokemon6[2],pokemon7[2],pokemon8[2],pokemon9[2],pokemon10[2]=0;*/


    /*char dragon1,dragon2,dragon3,dragon4,dragon5,dragon6,dragon7,dragon8,dragon9,dragon10;
    dragon1=dragon2=dragon3=dragon4=dragon5=dragon6=dragon7=dragon8=dragon9=dragon10=0;

    char one1,one2,one3,one4,one5,one6,one7,one8,one9,one10;
    one1=one2=one3=one4=one5=one6=one7=one8=one9=one10=0;

    char death1,death2,death3,death4,death5,death6,death7,death8,death9,death10;
    death1=death2,death3=death4=death5=death6=death7=death8=death9=death10=0;
    */


    //Definindo constantes
    const char senha[20]="libertadores";


    ////Verificação de senha////
    char respostasenha[20];
    char s;
    int r=0;
    int f=0;


    //definição variáveis//
    int comp=20;
    int i=0;
    int pontos=0;
    char nome[20];
    char anime;

    //ponteiros
    FILE*pontoss;
    FILE*pont;

    //Definindo Respostas
    const char respostaa[2]="A";
    const char respostab[2]="B";
    const char respostac[2]="C";
    const char respostad[2]="D";
    const char respostae[2]="E";

        inicio:

        printf("\t\t\t QUIZ\n");
        printf("\nAntes de iniciar, digite sua senha>>> ");
        while((s=getch())!=13){
            respostasenha[r]=s;
            printf("*");
            r++;
        }
        respostasenha[r]='\0';
        r=0;
        comp=strncmp(respostasenha,senha, 20);
        if(comp==0){
            printf("\nresposta certa\n");
            system("cls");
        }
        if(comp!=0){
            system("cls");
            goto inicio;

        }
            comeco:
            do{

            menu:
            system("cls");
            printf("\t*===================================================================*\n");
                    printf("\t|       _________ ___   ___ ___ ____     ____ __________            |\n");
                    printf("\t|       XXXXXXXXX XXX_  XXX XXX XXXX_   _XXXX XXXXXXXXXX            |\n");
                    printf("\t|       XXXXXXXXX XXXX_ XXX XXX XXXXX_ _XXXXX XXXXXXXXXX            |\n");
                    printf("\t|       XXX___XXX XXXXX_XXX XXX XXXXXX_XXXXXX XXX_____              |\n");
                    printf("\t|       XXXXXXXXX XXXXXXXXX XXX XXXXXXXXXXXXX XXXXXXXX              |\n");
                    printf("\t|       XXXXXXXXX XXX XXXXX XXX XXXXX X XXXXX XXX_______            |\n");
                    printf("\t|       XXX   XXX XXX  XXXX XXX XXXXX   XXXXX XXXXXXXXXX            |\n");
                    printf("\t|       XXX   XXX XXX   XXX XXX XXXX    XXXXX XXXXXXXXXX            |\n");
                    printf("\t|                                                                   |\n");
                    printf("\t*===================================================================*\n\n");
                    printf("(1)- NARUTO\n");
                    printf("(2)- POKÉMON\n");
                    printf("(3)- DRAGON BALL\n");
                    printf("(4)- ONE PIECE\n");
                    printf("(5)- DEATH NOTE\n");
                    printf("\n(6)- HISTÓRICO");
                    printf("\n\nEscolha sua opção: ");
                    scanf("%c",&anime);
                    system("cls");

                    switch(anime){
                    case '1':
                        system("cls");
                        char palavra[40];

                        //abrindo o arquivo_frase em modo de implementação
                        pontoss = fopen("arquivo_palavra.txt", "a");

                        printf("Escreva seu nome: ");
                        scanf("%s",palavra);

                        //usando fprintf para armazenar a string no arquivo
                        fprintf(pontoss,"\n<Naruto>%s",palavra);

                        //fechando o arquivo
                        fclose(pontoss);

                        system("cls");
                        printf("\n\t QUESTÃO 1");
                        printf("\nQual o nome do maior rival do personagem Naruto?");
                        printf("\nA-Orochimaru");
                        printf("\nB-Sasuke");
                        printf("\nC-Sakura");
                        printf("\nD-Kakashi");
                        printf("\nE-Gai");
                        printf("\n\nResposta: ");
                        scanf("%s",&naruto1);
                        naruto1[0]=toupper(naruto1[0]);
                        compnaruto1=strncmp(respostab, naruto1, 2);
                        printf("\nVocê digitou %s: ",naruto1);
                        if(compnaruto1==0 ){
                            printf(" resposta certa");
                            Sleep(1000);
                            pontos++;
                            }else{
                                printf(" F");
                                Sleep(1000);
                                }

                        system("cls");
                        printf("\n\t QUESTÃO 2");
                        printf("\nQual o nome do irmão do Sasuke?");
                        printf("\nA-Itachi");
                        printf("\nB-Orochimaru");
                        printf("\nC-Sakura");
                        printf("\nD-Kakashi");
                        printf("\n\nResposta: ");
                        scanf("%s",&naruto2);
                        naruto2[0]=toupper(naruto2[0]);
                        compnaruto2=strncmp(respostaa, naruto2, 2);
                        printf("\nVocê digitou %s: ",naruto2);
                        if(compnaruto2==0 ){
                            printf(" resposta certa");
                            Sleep(1000);
                            pontos++;
                            }else{
                                printf(" F");
                                Sleep(1000);
                                }

                        system("cls");
                        printf("\n\t QUESTÃO 3");
                        printf("\nQual o nome do pai de Naruto e qual Hokage ele é");
                        printf("\nA-Tobirama, o segundo hokage");
                        printf("\nB-Kakashi, o sexto hokage");
                        printf("\nC-Minato, o quarto hokage");
                        printf("\nD-Hiruzen, o terceiro hokage");
                        printf("\n\nResposta: ");
                        scanf("%s",&naruto3);
                        naruto3[0]=toupper(naruto3[0]);
                        compnaruto3=strncmp(respostac, naruto3, 2);
                        printf("\nVocê digitou %s: ",naruto3);
                        if(compnaruto3==0 ){
                            printf(" resposta certa");
                            Sleep(1000);
                            pontos++;
                            }else{
                                printf(" F");
                                Sleep(1000);
                                    }

                        system("cls");
                        printf("\n\t QUESTÃO 4");
                        printf("\nSarutobi Azuma foi morto por quem na temporada Shippuuden?");
                        printf("\nA-Deidara");
                        printf("\nB-Sasuke");
                        printf("\nC-Hidan");
                        printf("\nD-Gaara");
                        printf("\n\nResposta: ");
                        scanf("%s",&naruto4);
                        naruto4[0]=toupper(naruto4[0]);
                        compnaruto4=strncmp(respostac, naruto4, 2);
                        printf("\nVocê digitou %s: ",naruto4);
                        if(compnaruto4==0 ){
                            printf(" resposta certa");
                            Sleep(1000);
                            pontos++;
                            }else{
                                printf(" F");
                                Sleep(1000);
                                }

                        system("cls");
                        printf("\n\t QUESTÃO 5");
                        printf("\nQuando Naruto e Sasuke brigaram, Naruto antes de perder a luta deixou algo na bandana de Sasuke, o que foi?");
                        printf("\nA-Deixou um risco reto");
                        printf("\nB-Deixou uma estrela");
                        printf("\nC-Deixou um triângulo");
                        printf("\nD-Deixou 6 gotas de sangue");
                        printf("\nE-Deixou a bandana toda cortada");
                        printf("\n\nResposta: ");
                        scanf("%s",&naruto5);
                        naruto5[0]=toupper(naruto5[0]);
                        compnaruto5=strncmp(respostaa, naruto5, 2);
                        printf("\nVocê digitou %s: ",naruto5);
                        if(compnaruto5==0 ){
                            printf(" resposta certa");
                            Sleep(1000);
                            pontos++;
                            }else{
                                printf(" F");
                                Sleep(1000);
                                }

                        system("cls");
                        printf("\n\t QUESTÃO 6");
                        printf("\nQuem lutou e derrotou o Sasori?");
                        printf("\nA-Tsunade e Kankuro");
                        printf("\nB-Gaara e TenTen");
                        printf("\nC-Jiraya e Sai");
                        printf("\nD-Naruto e Kakashi");
                        printf("\nE-Sakura e Chiyo-baa");
                        printf("\n\nResposta: ");
                        scanf("%s",&naruto6);
                        naruto6[0]=toupper(naruto6[0]);
                        compnaruto6=strncmp(respostae, naruto6, 2);
                        printf("\nVocê digitou %s: ",naruto6);
                        if(compnaruto6==0 ){
                            printf(" resposta certa");
                            Sleep(1000);
                            pontos++;
                            }else{
                                printf(" F");
                                Sleep(1000);
                                }

                        system("cls");
                        printf("\n\t QUESTÃO 7");
                        printf("\nGaara foi capturado por quais integrantes da Akatisuke?");
                        printf("\nA-Gaara nunca foi capturado");
                        printf("\nB-Itachi e kizame");
                        printf("\nC-Hidan e Kakuzu");
                        printf("\nD-Sasori e Deidara");
                        printf("\nE-Pein e Konan");
                        printf("\n\nResposta: ");
                        scanf("%s",&naruto7);
                        naruto7[0]=toupper(naruto7[0]);
                        compnaruto7=strncmp(respostad, naruto7, 2);
                        printf("\nVocê digitou %s: ",naruto7);
                        if(compnaruto7==0 ){
                            printf(" resposta certa");
                            Sleep(1000);
                            pontos++;
                            }else{
                                printf(" F");
                                Sleep(1000);
                                }

                        system("cls");
                        printf("\n\t QUESTÃO 8");
                        printf("\nQuem matou Kakuzu?");
                        printf("\nA-Kakashi");
                        printf("\nB-Sakura");
                        printf("\nC-Sai");
                        printf("\nD-Naruto");
                        printf("\nE-Jiraiya");
                        printf("\n\nResposta: ");
                        scanf("%s",&naruto8);
                        naruto8[0]=toupper(naruto8[0]);
                        compnaruto8=strncmp(respostaa, naruto8, 2);
                        printf("\nVocê digitou %s: ",naruto8);
                        if(compnaruto8==0 ){
                            printf(" resposta certa");
                            Sleep(1000);
                            pontos++;
                            }else{
                                printf(" F");
                                Sleep(1000);
                                }

                        system("cls");
                        printf("\n\t QUESTÃO 9");
                        printf("\nEntre esses, qual tem o Sharingan?");
                        printf("\nA-Tobi");
                        printf("\nB-Kakuzu");
                        printf("\nC-Hidan");
                        printf("\nD-Zetsu");
                        printf("\nE-Kisame");
                        printf("\n\nResposta: ");
                        scanf("%s",&naruto9);
                        naruto9[0]=toupper(naruto9[0]);
                        compnaruto9=strncmp(respostaa, naruto9, 2);
                        printf("\nVocê digitou %s: ",naruto9);
                        if(compnaruto9==0 ){
                            printf(" resposta certa");
                            Sleep(1000);
                            pontos++;
                            }else{
                                printf(" F");
                                Sleep(1000);
                                }

                        system("cls");
                        printf("\n\t QUESTÃO 10");
                        printf("\nQual membro da Akatsuki luta usando marionetes?");
                        printf("\nA-Hidan");
                        printf("\nB-Tobi");
                        printf("\nC-Konan");
                        printf("\nD-Pain");
                        printf("\nE-Sasori");
                        printf("\n\nResposta: ");
                        scanf("%s",&naruto10);
                        naruto10[0]=toupper(naruto10[0]);
                        compnaruto10=strncmp(respostae, naruto10, 2);
                        printf("\nVocê digitou %s: ",naruto10);
                        if(compnaruto10==0 ){
                            printf(" resposta certa\n");
                            Sleep(1000);
                            pontos++;
                            }else{
                                printf(" F");
                                Sleep(1000);
                                }

                        printf("\n <<FIM DE JOGO>>");
                        Sleep(1000);
                        printf(" PONTUAÇÃO TOTAL: %d",pontos);
                        //abrindo o arquivo_frase em modo "somente leitura"
                        pont = fopen("arquivo_palavra.txt", "a");
                        //usando fprintf para armazenar a string no arquivo
                        fprintf(pont, ":%d PONTOS", pontos);
                        pontos=0;
                        //fechando o arquivo
                        fclose(pontoss);
                        Sleep(1000);

                        goto comeco;

                    case '2':
                        system("cls");
                        printf("\t\tPOKÉMON");
                        system("pause");

                    case '3':
                        system("cls");
                        printf("\t\tDRAGON BALL");
                        system("pause");
                    case '4':
                        system("cls");
                        printf("\t\tONE PIECE");
                        system("pause");

                    case '5':
                        system("cls");
                        printf("\t\tDEATH NOTE");
                        system("pause");
                    case '6':
                        system("cls");
                        //abrindo o arquivo_frase em modo "somente leitura"
                        pontoss = fopen("arquivo_palavra.txt", "r");

                        //enquanto não for fim de arquivo o looping será executado
                        //e será impresso o texto
                        while(fgets(palavra, 40, pontoss) != NULL)
                        printf("\n%s", palavra);
                        if(pont>=0&&pont<=10){
                        printf("%d ",pont);
                        }
                        Sleep(2000);
                        goto menu;

                        //fechando o arquivo
                        fclose(pontoss);
                        getch();}

        }while(anime!=(anime<7&&anime>=0));

        fim:
        return(0);
}

