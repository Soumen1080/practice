#include <stdio.h>

int main(){
     
struct pokemons{
 int hp;
    int attack;
    int defense;
    int speed;
    int special;
    int level;
};
 struct pokemons pikachu;
    pikachu.hp = 35;
    pikachu.attack = 55;
    pikachu.defense = 40;
    pikachu.speed = 90;
    pikachu.special = 50;
    pikachu.level = 1;
    printf("Pikachu's HP: %d\n", pikachu.hp);
    printf("Pikachu's Attack: %d\n", pikachu.attack);
    printf("Pikachu's Defense: %d\n", pikachu.defense);
    printf("Pikachu's Speed: %d\n", pikachu.speed);
    printf("Pikachu's Special: %d\n", pikachu.special);
    printf("Pikachu's Level: %d\n", pikachu.level);





     
    return 0;
}
