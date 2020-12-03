#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));///menentukan random number secara acak
    char name[50];
    char action;
    int main_character, enemy;
    int warrior_hp=1000;
    int archer_hp=800;
    int mage_hp=500;
    int warrior_attack = rand()%100+20;///%100+20 >> Maximal 100 dimulai dari 20
    int archer_attack = rand()%150+50;///%150+50 >> Maximal 150 dimulai dari 50
    int mage_attack = rand()%200+100;///%200+100 >> Maximal 200 dimulai dari 100
    int enemy_health, player_health;
    puts("==================== Game Sederhana ====================");
    puts("1. Warrior");
    puts("2. Archer");
    puts("3. Mage");
    puts("--------------------------------------------------------");
    printf("Select Your Class   : "); scanf("%i", &main_character);
    getc(stdin);
    printf("Input Name          : "); gets(name);
    puts("--------------------------------------------------------");
    puts("1. Warrior");
    puts("2. Archer");
    puts("3. Mage");
    puts("--------------------------------------------------------");
    printf("Select Your Enemy   : "); scanf("%i", &enemy);
    puts("--------------------------------------------------------");
    getc(stdin);
    switch(main_character)
    {
        case 1:
            if(enemy==1)
            {
                puts("Your Character Class    : Warrior");
                printf("Your Character Name     : %s\n", name);
                printf("Your Health             : %i\n\n", warrior_hp);
                puts("Enemy Class             : Warrior");
                printf("Enemy Health            : %i\n", warrior_hp);
                puts("--------------------------------------------------------");
                puts("X. Attack\t\tY. Defense\t\tZ. Run");
                puts("--------------------------------------------------------");
                printf("Your action     : "); scanf("%c", &action);
                puts("--------------------------------------------------------");
                if(action=='x'||action=='X')
                {
                    enemy_health = warrior_hp-warrior_attack;
                    printf("Your Damage     : %i\n", warrior_attack);
                    printf("Enemy Health    : %i\n", enemy_health);
                }
                else if(action=='y'||action=='Y')
                {
                    player_health = warrior_hp-(warrior_attack/2);
                    printf("Enemy Damage    : %i\n", warrior_attack/2);
                    printf("Your Health     : %i\n", player_health);
                }
                else if(action=='z'||action=='Z')
                {
                    printf("You Run Away !");
                }
                else
                return 0;
            }
            else if(enemy==2)
            {
                puts("Your Character Class    : Warrior");
                printf("Your Character Name     : %s\n", name);
                printf("Your Health             : %i\n\n", warrior_hp);
                puts("Enemy Class             : Archer");
                printf("Enemy Health            : %i\n", archer_hp);
                puts("--------------------------------------------------------");
                puts("X. Attack\t\tY. Defense\t\tZ. Run");
                puts("--------------------------------------------------------");
                printf("Your action     : "); scanf("%c", &action);
                puts("--------------------------------------------------------");
                if(action=='x'||action=='X')
                {
                    enemy_health = archer_hp-warrior_attack;
                    printf("Your Damage     : %i\n", warrior_attack);
                    printf("Enemy Health    : %i\n", enemy_health);
                }
                else if(action=='y'||action=='Y')
                {
                    player_health = warrior_hp-(archer_attack/2);
                    printf("Enemy Damage    : %i\n", archer_attack/2);
                    printf("Your Health     : %i\n", player_health);
                }
                else if(action=='z'||action=='Z')
                {
                    printf("You Run Away !");
                }
                else
                return 0;
            }
            else if(enemy==3)
            {
                puts("Your Character Class    : Warrior");
                printf("Your Character Name     : %s\n", name);
                printf("Your Health             : %i\n\n", warrior_hp);
                puts("Enemy Class             : Mage");
                printf("Enemy Health            : %i\n", mage_hp);
                puts("--------------------------------------------------------");
                puts("X. Attack\t\tY. Defense\t\tZ. Run");
                puts("--------------------------------------------------------");
                printf("Your action     : "); scanf("%c", &action);
                puts("--------------------------------------------------------");
                if(action=='x'||action=='X')
                {
                    enemy_health = mage_hp-warrior_attack;
                    printf("Your Damage     : %i\n", warrior_attack);
                    printf("Enemy Health    : %i\n", enemy_health);
                }
                else if(action=='y'||action=='Y')
                {
                    player_health = warrior_hp-(mage_hp/2);
                    printf("Enemy Damage    : %i\n", archer_attack/2);
                    printf("Your Health     : %i\n", player_health);
                }
                else if(action=='z'||action=='Z')
                {
                    printf("You Run Away !");
                }
                else
                return 0;
            }
            else
            return 0;
            break;
        case 2:
            if(enemy==1)
            {
                puts("Your Character Class    : Archer");
                printf("Your Character Name     : %s\n", name);
                printf("Your Health             : %i\n\n", archer_hp);
                puts("Enemy Class             : Warrior");
                printf("Enemy Health            : %i\n", warrior_hp);
                puts("--------------------------------------------------------");
                puts("X. Attack\t\tY. Defense\t\tZ. Run");
                puts("--------------------------------------------------------");
                printf("Your action     : "); scanf("%c", &action);
                puts("--------------------------------------------------------");
                if(action=='x'||action=='X')
                {
                    enemy_health = warrior_hp-archer_attack;
                    printf("Your Damage     : %i\n", archer_attack);
                    printf("Enemy Health    : %i\n", enemy_health);
                }
                else if(action=='y'||action=='Y')
                {
                    player_health = archer_hp-(warrior_attack/2);
                    printf("Enemy Damage    : %i\n", warrior_attack/2);
                    printf("Your Health     : %i\n", player_health);
                }
                else if(action=='z'||action=='Z')
                {
                    printf("You Run Away !");
                }
                else
                return 0;
            }
            else if(enemy==2)
            {
                puts("Your Character Class    : Archer");
                printf("Your Character Name     : %s\n", name);
                printf("Your Health             : %i\n\n", archer_hp);
                puts("Enemy Class             : Archer");
                printf("Enemy Health            : %i\n", archer_hp);
                puts("--------------------------------------------------------");
                puts("X. Attack\t\tY. Defense\t\tZ. Run");
                puts("--------------------------------------------------------");
                printf("Your action     : "); scanf("%c", &action);
                puts("--------------------------------------------------------");
                if(action=='x'||action=='X')
                {
                    enemy_health = archer_hp-archer_attack;
                    printf("Your Damage     : %i\n", archer_attack);
                    printf("Enemy Health    : %i\n", enemy_health);
                }
                else if(action=='y'||action=='Y')
                {
                    player_health = archer_hp-(archer_attack/2);
                    printf("Enemy Damage    : %i\n", archer_attack/2);
                    printf("Your Health     : %i\n", player_health);
                }
                else if(action=='z'||action=='Z')
                {
                    printf("You Run Away !");
                }
                else
                return 0;
            }
            else if(enemy==3)
            {
                puts("Your Character Class    : Warrior");
                printf("Your Character Name     : %s\n", name);
                printf("Your Health             : %i\n\n", archer_hp);
                puts("Enemy Class             : Mage");
                printf("Enemy Health            : %i\n", mage_hp);
                puts("--------------------------------------------------------");
                puts("X. Attack\t\tY. Defense\t\tZ. Run");
                puts("--------------------------------------------------------");
                printf("Your action     : "); scanf("%c", &action);
                puts("--------------------------------------------------------");
                if(action=='x'||action=='X')
                {
                    enemy_health = mage_hp-archer_attack;
                    printf("Your Damage     : %i\n", archer_attack);
                    printf("Enemy Health    : %i\n", enemy_health);
                }
                else if(action=='y'||action=='Y')
                {
                    player_health = archer_hp-(mage_hp/2);
                    printf("Enemy Damage    : %i\n", archer_attack/2);
                    printf("Your Health     : %i\n", player_health);
                }
                else if(action=='z'||action=='Z')
                {
                    printf("You Run Away !");
                }
                else
                return 0;
            }
            else
            return 0;
            break;
        case 3:
            if(enemy==1)
            {
                puts("Your Character Class    : Mage");
                printf("Your Character Name     : %s\n", name);
                printf("Your Health             : %i\n\n", mage_hp);
                puts("Enemy Class             : Warrior");
                printf("Enemy Health            : %i\n", warrior_hp);
                puts("--------------------------------------------------------");
                puts("X. Attack\t\tY. Defense\t\tZ. Run");
                puts("--------------------------------------------------------");
                printf("Your action     : "); scanf("%c", &action);
                puts("--------------------------------------------------------");
                if(action=='x'||action=='X')
                {
                    enemy_health = warrior_hp-mage_attack;
                    printf("Your Damage     : %i\n", mage_attack);
                    printf("Enemy Health    : %i\n", enemy_health);
                }
                else if(action=='y'||action=='Y')
                {
                    player_health = mage_hp-(warrior_attack/2);
                    printf("Enemy Damage    : %i\n", warrior_attack/2);
                    printf("Your Health     : %i\n", player_health);
                }
                else if(action=='z'||action=='Z')
                {
                    printf("You Run Away !");
                }
                else
                return 0;
            }
            else if(enemy==2)
            {
                puts("Your Character Class    : Mage");
                printf("Your Character Name     : %s\n", name);
                printf("Your Health             : %i\n\n", mage_hp);
                puts("Enemy Class             : Archer");
                printf("Enemy Health            : %i\n", archer_hp);
                puts("--------------------------------------------------------");
                puts("X. Attack\t\tY. Defense\t\tZ. Run");
                puts("--------------------------------------------------------");
                printf("Your action     : "); scanf("%c", &action);
                puts("--------------------------------------------------------");
                if(action=='x'||action=='X')
                {
                    enemy_health = archer_hp-mage_attack;
                    printf("Your Damage     : %i\n", mage_attack);
                    printf("Enemy Health    : %i\n", enemy_health);
                }
                else if(action=='y'||action=='Y')
                {
                    player_health = mage_hp-(archer_attack/2);
                    printf("Enemy Damage    : %i\n", archer_attack/2);
                    printf("Your Health     : %i\n", player_health);
                }
                else if(action=='z'||action=='Z')
                {
                    printf("You Run Away !");
                }
                else
                return 0;
            }
            else if(enemy==3)
            {
                puts("Your Character Class    : Mage");
                printf("Your Character Name     : %s\n", name);
                printf("Your Health             : %i\n\n", mage_hp);
                puts("Enemy Class             : Mage");
                printf("Enemy Health            : %i\n", mage_hp);
                puts("--------------------------------------------------------");
                puts("X. Attack\t\tY. Defense\t\tZ. Run");
                puts("--------------------------------------------------------");
                printf("Your action     : "); scanf("%c", &action);
                puts("--------------------------------------------------------");
                if(action=='x'||action=='X')
                {
                    enemy_health = mage_hp-mage_attack;
                    printf("Your Damage     : %i\n", mage_attack);
                    printf("Enemy Health    : %i\n", enemy_health);
                }
                else if(action=='y'||action=='Y')
                {
                    player_health = mage_hp-(mage_hp/2);
                    printf("Enemy Damage    : %i\n", archer_attack/2);
                    printf("Your Health     : %i\n", player_health);
                }
                else if(action=='z'||action=='Z')
                {
                    printf("You Run Away !");
                }
                else
                return 0;
            }
            else
            return 0;
            break;
        default:
            return 0;
    }
    puts("========================================================");
    return 0;
}
