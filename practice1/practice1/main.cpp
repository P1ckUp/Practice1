#include<iostream>
#include<string>

class Champions
{
public:
    std::string name;
    int level;
    int exp;

    int hp;
    int maxHp;

    int mana;
    int maxMana;

    int attack;
    int defense;

    bool isDead;

    void attackTarget();
    void takeDamage(int damage);
    void heal(int amount);
};

void PrintChampionsInfo(const Champions& champion)
{
    std::cout << "Name: " << champion.name << std::endl;
    std::cout << "HP: " << champion.hp << std::endl;
    std::cout << "MP: " << champion.mana << std::endl;
    std::cout << "Lv: " << champion.level << std::endl;
    std::cout << "Exp: " << champion.exp << std::endl;
    std::cout << "ATK: " << champion.attack << std::endl;
    std::cout << "DEF: " << champion.defense << std::endl;
    std::cout << "Alive: " << (champion.isDead ? "No" : "Yes") << std::endl;
}

void Champions::attackTarget()
{
    if (isDead)
    {
        std::cout << name << ": Champion is dead." << std::endl;
        return;
    }
    std::cout << name << " attacked " << attack << " Damage." << std::endl;
}

void Champions::takeDamage(int damage)
{
    int Result_Damage = damage - defense;

    if(Result_Damage <= 0)
    {
        Result_Damage = 0;
        std::cout << "Damage Miss!" << std::endl;
    }
    hp = hp - Result_Damage;

    if (hp <= 0)
    {
        hp = 0;
        isDead = true;

        std::cout << name << " is dead." << std::endl;
        return;
    }

    std::cout << name << "is took damage!" << std::endl;
    std::cout << "Damage: " << Result_Damage << std::endl;
    std::cout << "HP: " << hp << std::endl;
}

void Champions::heal(int amount)
{
    hp += amount;

    if(isDead)
    {
        std::cout << name << " is alreay Dead. Cannot be healed." << std::endl;
        return;
    }

    if (hp > maxHp)
    {
        hp = maxHp;
    }
    std::cout << name << " got a "<< amount <<" heal." << std::endl;
    std::cout << "HP: " << hp << std::endl;
}



int main()
{
    Champions Hero;

    Hero.level = 1;
    Hero.exp = 0;

    Hero.hp = 500;
    Hero.maxHp = 800;

    Hero.mana = 300;
    Hero.maxMana = 300;

    Hero.attack = 20;
    Hero.defense = 15;

    Hero.isDead = false;

    PrintChampionsInfo(Hero);

    Hero.takeDamage(30);
    Hero.heal(50);
    Hero.attackTarget();

    PrintChampionsInfo(Hero);

    return 0;
}






