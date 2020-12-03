///IRHAN PRABASUKMA
///A11.2016.09945
///KELOMPOK 4118
///32
///DASAR PEMROGRAMAN
///

#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///KAMUS
    char name[30];
    char pokemon;
    int hp=1000;
    int eat_hp;
    int sleep_hp;
    int run;
    int run_hp;
    int act;
    int eat;
    int enemy;
    char practice;
    ///====================
    int raticate_hp=300;
    int raticate_attack=200;
    int raticate_defense=150;
    ///=====================
    int golbat_hp=250;
    int golbat_attack=150;
    int golbat_defense=200;
    ///====================
    int psyduck_hp=200;
    int psyduck_attack=200;
    int psyduck_defense=170;
    ///====================
    int arbok_hp=450;
    int arbok_attack=350;
    int arbok_defense=250;
    ///=====================
    int wizzle_hp=150;
    int wizzle_attack=200;
    int wizzle_defense=350;
    ///=====================
    int machop_hp=500;
    int machop_attack=600;
    int machop_defense=500;
    ///=====================
    int pikachu_attack=650;
    int defense_pikachu=400;
    int ran;
    int thunder_bolt=600;
    int tackle_attack=350;
    char attack;
    int after_fight;
    ///ALGORITMA
    printf("\t\t================================POKEMON'S LIFE!================================");
    printf("\n\t\tTRAINER NICKNAME\t:\t");
    gets(name);
    printf("\n\t\t\t\tHELLO %s , WELCOME TO POKEMON WORLD!",name);
    printf("\n\nt\t\tA.PIKACHU");
    printf("\tB.CHARMANDER");
    printf("\tC.BULBASAUR");
    printf("\tD.SQUIRTLE");
    printf("\n\n\tCHOOSE YOUR MAIN POKEMON\t:");
    scanf("%c",&pokemon);
    switch(pokemon)
    {
        case 'A'  :
        case 'a'  :
            printf("\tYOU CHOOSE PIKACHU");
            printf("\n\n\t1.Run");
            printf("\t2.Eat");
            printf("\t3.Sleep");
            printf("\t4.Practice");
            printf("\n\n\tWHAT YOU WANT TO DO ?");
            scanf("%d",&act);
            switch(act)
            {
                case 1  :
                    printf("\n\tPIKACHU RUN!");
                    printf("\n\tHOW FAR YOU WANT PIKACHU'S RUN (KM)?");
                    scanf("%d",&run);
                        if(run>=1 && run<=5)
                        {
                            printf("\n\tI'm so happy!");
                            run_hp=hp-50;
                            printf("\n\tHP:%d",run_hp);
                        }
                        else if(run>=6 && run<=10)
                        {
                            printf("\n\tI'm ok!");
                            run_hp=hp-100;
                            printf("\n\tHP:%d",run_hp);
                        }
                        else if(run>=11 && run<=100)
                        {
                            printf("\n\tYou're cruel!");
                            run_hp=hp-500;
                            printf("\n\tHP:%d",run_hp);
                        }
                        else
                        {
                            printf("\n\tERROR");
                        }
                break;
                case 2    :
                    printf("\n\tEAT");
                    printf("\n\t1.BANANA");
                    printf("\n\t2.APPLE");
                    printf("\n\t3.MANGO");
                    printf("\n\t4.ORANGE");
                    printf("\n\tWHAT YOU WANT TO GIVE TO PIKACHU'S ?");
                    scanf("%d",&eat);
                    switch(eat)
                        {
                        case 1  :
                            printf("\n\tBANANA");
                            eat_hp=hp+10;
                            printf("\n\tHP:%d",eat_hp);
                        break;
                        case 2  :
                            printf("\n\tAPPLE");
                            eat_hp=hp+150;
                            printf("\n\tHP:%d",eat_hp);
                        break;
                        case 3  :
                            printf("\n\tMANGO");
                            eat_hp=hp+50;
                            printf("\n\tHP:%d",eat_hp);
                        break;
                        case 4  :
                            printf("\n\tORANGE");
                            eat_hp=hp+100;
                            printf("\n\tHP:%d",eat_hp);
                        break;
                        default:
                            printf("\nERROR");
                        break;
                        }
                break;
                case 3  :
                    printf("\n\tPIKACHU'S SLEEP");
                    sleep_hp=hp+1000;
                    printf("\n\tHP:%d",sleep_hp);
                break;
                case 4  :
                    printf("\n\tIT'S TIME TO FIGHT!");
                    printf("\n\t1.RATICATE");
                    printf("\t2.GOLBAT");
                    printf("\t3.PSYDUCK");
                    printf("\t4.ARBOK");
                    printf("\t5.WIZZLE");
                    printf("\t6.MACHOP");
                    printf("\n\tCHOOSE YOUR ENEMY:");
                    scanf("%d",&enemy);
                    switch(enemy)
                    {
                        case 1  :
                            printf("\n\tPIKACHU VS RATICATE");
                            printf("\n\tX.ATTACK");
                            printf("\tY.DEFENSE");
                            printf("\tZ.RUN");
                            printf("\n\tSELECT ACTION:");
                            printf("%c",&practice);
                            switch(practice)
                                {
                                case 'X'    :
                                    printf("\n\tA.THUNDER BOLT");
                                    printf("\tB.TACKLE ATTACK");
                                    printf("\n\tCHOOSE YOUR ATTACK:");
                                    scanf("%c",&attack);
                                    switch(attack)
                                        {
                                            case 'a'    :
                                            case 'A'    :
                                                after_fight=raticate_hp-thunder_bolt;
                                                printf("\n\tPIKACHU'S HP:%d",hp);
                                                printf("\t\tRATICATE HP:%d",after_fight);
                                            break;
                                            case 'b'    :
                                            case 'B'    :
                                                after_fight=raticate_hp-tackle_attack;
                                                printf("\n\tPIKACHU'S HP:%d",hp);
                                                printf("\t\tRATICATE HP:%d",after_fight);
                                            break;
                                        }

                                break;
                                default :
                                    printf("ERROR");
                                break;
                                }
                        default   :
                        printf("\n\tERROR");
                        break;
                    }
                break;
            }
        case 'B'    :
        case 'b'    :
            printf("\tYOU CHOOSE CHARMANDER");
            printf("\n\n\t1.Run");
            printf("\t2.Eat");
            printf("\t3.Sleep");
            printf("\t4.Practice");
            printf("\n\tWHAT YOU WANT TO DO ?");
            scanf("%d",&act);
            switch(act)
            {
                case 1  :
                    printf("\tCHARMANDER RUN!");
                    printf("\n\tHOW FAR YOU WANT CHARMANDER'S RUN (KM)?");
                    scanf("%d",&run);
                        if(run>=1 && run<=5)
                        {
                            printf("\n\tI'm so happy!");
                            run_hp=hp-50;
                            printf("\n\tHP:%d",run_hp);
                        }
                        else if(run>=6 && run<=10)
                        {
                            printf("\n\tI'm ok!");
                            run_hp=hp-100;
                            printf("\n\tHP:%d",run_hp);
                        }
                        else if(run>=11 && run<=100)
                        {
                            printf("\n\tYou're cruel!");
                            run_hp=hp-500;
                            printf("\n\tHP:%d",run_hp);
                        }
                        else
                        {
                            printf("\n\tERROR");
                        }
                break;
                case 2    :
                    printf("\n\tEAT");
                    printf("\n\t1.BANANA");
                    printf("\n\t2.APPLE");
                    printf("\n\t3.MANGO");
                    printf("\n\t4.ORANGE");
                    printf("\n\tWHAT YOU WANT TO GIVE TO CHARMANDER'S ?");
                    scanf("%d",&eat);
                    switch(eat)
                        {
                        case 1  :
                            printf("\n\tBANANA");
                            eat_hp=hp+10;
                            printf("\n\tHP:%d",eat_hp);
                        break;
                        case 2  :
                            printf("\n\tAPPLE");
                            eat_hp=hp+150;
                            printf("\n\tHP:%d",eat_hp);
                        break;
                        case 3  :
                            printf("\n\tMANGO");
                            eat_hp=hp+50;
                            printf("\n\tHP:%d",eat_hp);
                        break;
                        case 4  :
                            printf("\n\tORANGE");
                            eat_hp=hp+100;
                            printf("\n\tHP:%d",eat_hp);
                        break;
                        default:
                            printf("\nERROR");
                        break;
                        }
                break;
                case 3  :
                    printf("\n\tCHARMANDER'S SLEEP");
                    sleep_hp=hp+1000;
                    printf("\n\tHP:%d",sleep_hp);
                break;
                default   :
                    printf("\n\tERROR");
                break;

            }
        break;
        case 'C'  :
        case 'c'  :
            printf("\tYOU CHOOSE BULBASAUR");
            printf("\n\n\t1.Run");
            printf("\t2.Eat");
            printf("\t3.Sleep");
            printf("\t4.Practice");
            printf("\n\tWHAT YOU WANT TO DO ?");
            scanf("%d",&act);
            switch(act)
            {
                case 1  :
                    printf("\tBULBASAUR RUN!");
                    printf("\n\tHOW FAR YOU WANT BULBASAUR'S RUN (KM)?");
                    scanf("%d",&run);
                        if(run>=1 && run<=5)
                        {
                            printf("\n\tI'm so happy!");
                            run_hp=hp-50;
                            printf("\n\tHP:%d",run_hp);
                        }
                        else if(run>=6 && run<=10)
                        {
                            printf("\n\tI'm ok!");
                            run_hp=hp-100;
                            printf("\n\tHP:%d",run_hp);
                        }
                        else if(run>=11 && run<=100)
                        {
                            printf("\n\tYou're cruel!");
                            run_hp=hp-500;
                            printf("\n\tHP:%d",run_hp);
                        }
                        else
                        {
                            printf("\n\tERROR");
                        }
                break;
                case 2    :
                    printf("\n\tEAT");
                    printf("\n\t1.BANANA");
                    printf("\n\t2.APPLE");
                    printf("\n\t3.MANGO");
                    printf("\n\t4.ORANGE");
                    printf("\n\tWHAT YOU WANT TO GIVE TO BULBASAUR'S ?");
                    scanf("%d",&eat);
                    switch(eat)
                        {
                        case 1  :
                            printf("\n\tBANANA");
                            eat_hp=hp+10;
                            printf("\n\tHP:%d",eat_hp);
                        break;
                        case 2  :
                            printf("\n\tAPPLE");
                            eat_hp=hp+150;
                            printf("\n\tHP:%d",eat_hp);
                        break;
                        case 3  :
                            printf("\n\tMANGO");
                            eat_hp=hp+50;
                            printf("\n\tHP:%d",eat_hp);
                        break;
                        case 4  :
                            printf("\n\tORANGE");
                            eat_hp=hp+100;
                            printf("\n\tHP:%d",eat_hp);
                        break;
                        default:
                            printf("\nERROR");
                        break;
                        }
                break;
                case 3  :
                    printf("\n\tBULBASAUR'S SLEEP");
                    sleep_hp=hp+1000;
                    printf("\n\tHP:%d",sleep_hp);
                break;
                default   :
                    printf("\n\tERROR");
                break;

            }
        break;
        case  'D'  :
        case    'd':
            printf("\tYOU CHOOSE SQUIRTLE");
            printf("\n\n\t1.Run");
            printf("\t2.Eat");
            printf("\t3.Sleep");
            printf("\t4.Practice");
            printf("\n\tWHAT YOU WANT TO DO ?");
            scanf("%d",&act);
            switch(act)
            {
                case 1  :
                    printf("\tSQUIRTLE RUN!");
                    printf("\n\tHOW FAR YOU WANT SQUIRTLE'S RUN (KM)?");
                    scanf("%d",&run);
                        if(run>=1 && run<=5)
                        {
                            printf("\n\tI'm so happy!");
                            run_hp=hp-50;
                            printf("\n\tHP:%d",run_hp);
                        }
                        else if(run>=6 && run<=10)
                        {
                            printf("\n\tI'm ok!");
                            run_hp=hp-100;
                            printf("\n\tHP:%d",run_hp);
                        }
                        else if(run>=11 && run<=100)
                        {
                            printf("\n\tYou're cruel!");
                            run_hp=hp-500;
                            printf("\n\tHP:%d",run_hp);
                        }
                        else
                        {
                            printf("\n\tERROR");
                        }
                break;
                case 2    :
                    printf("\n\tEAT");
                    printf("\n\t1.BANANA");
                    printf("\n\t2.APPLE");
                    printf("\n\t3.MANGO");
                    printf("\n\t4.ORANGE");
                    printf("\n\tWHAT YOU WANT TO GIVE TO SQUIRTLE'S ?");
                    scanf("%d",&eat);
                    switch(eat)
                        {
                        case 1  :
                            printf("\n\tBANANA");
                            eat_hp=hp+10;
                            printf("\n\tHP:%d",eat_hp);
                        break;
                        case 2  :
                            printf("\n\tAPPLE");
                            eat_hp=hp+150;
                            printf("\n\tHP:%d",eat_hp);
                        break;
                        case 3  :
                            printf("\n\tMANGO");
                            eat_hp=hp+50;
                            printf("\n\tHP:%d",eat_hp);
                        break;
                        case 4  :
                            printf("\n\tORANGE");
                            eat_hp=hp+100;
                            printf("\n\tHP:%d",eat_hp);
                        break;
                        default:
                            printf("\nERROR");
                        break;
                        }
                break;
                case 3  :
                    printf("\n\tSQUIRTLE'S SLEEP");
                    sleep_hp=hp+1000;
                    printf("\n\tHP:%d",sleep_hp);
                break;
                default   :
                    printf("\n\tERROR");
                break;

            }
        break;
        default :
            printf("ERROR");
        break;
    }
    return 0;
}
