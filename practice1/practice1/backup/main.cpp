//#include<iostream>
//#include<string>
//
//class Champions
//{
//public:
//    std::string name;
//    int level;
//    int exp;
//
//    int hp;
//    int maxHp;
//
//    int mana;
//    int maxMana;
//
//    int attack;
//    int defense;
//
//    bool isDead;
//
//    void attackTarget();
//    void takeDamage(int damage);
//    void heal(int amount);
//};
//
//void PrintChampionsInfo(const Champions& champion)
//{
//    std::cout << "Name: " << champion.name << std::endl;
//    std::cout << "HP: " << champion.hp << std::endl;
//    std::cout << "MP: " << champion.mana << std::endl;
//    std::cout << "Lv: " << champion.level << std::endl;
//    std::cout << "Exp: " << champion.exp << std::endl;
//    std::cout << "ATK: " << champion.attack << std::endl;
//    std::cout << "DEF: " << champion.defense << std::endl;
//    std::cout << "Alive: " << (champion.isDead ? "No" : "Yes") << std::endl;
//}
//
//void Champions::attackTarget()
//{
//    if (isDead)
//    {
//        std::cout << name << ": Champion is dead." << std::endl;
//        return;
//    }
//    std::cout << name << " attacked " << attack << " Damage." << std::endl;
//}
//
//void Champions::takeDamage(int damage)
//{
//    int Result_Damage = damage - defense;
//
//    if(Result_Damage <= 0)
//    {
//        Result_Damage = 0;
//        std::cout << "Damage Miss!" << std::endl;
//    }
//    hp = hp - Result_Damage;
//
//    if (hp <= 0)
//    {
//        hp = 0;
//        isDead = true;
//
//        std::cout << name << " is dead." << std::endl;
//        return;
//    }
//
//    std::cout << name << "is took damage!" << std::endl;
//    std::cout << "Damage: " << Result_Damage << std::endl;
//    std::cout << "HP: " << hp << std::endl;
//}
//
//void Champions::heal(int amount)
//{
//    hp += amount;
//
//    if(isDead)
//    {
//        std::cout << name << " is alreay Dead. Cannot be healed." << std::endl;
//        return;
//    }
//
//    if (hp > maxHp)
//    {
//        hp = maxHp;
//    }
//    std::cout << name << " got a "<< amount <<" heal." << std::endl;
//    std::cout << "HP: " << hp << std::endl;
//}
//
//
//
//int main()
//{
//    Champions Hero;
//
//    Hero.level = 1;
//    Hero.exp = 0;
//
//    Hero.hp = 500;
//    Hero.maxHp = 800;
//
//    Hero.mana = 300;
//    Hero.maxMana = 300;
//
//    Hero.attack = 20;
//    Hero.defense = 15;
//
//    Hero.isDead = false;
//
//    PrintChampionsInfo(Hero);
//
//    Hero.takeDamage(30);
//    Hero.heal(50);
//    Hero.attackTarget();
//
//    PrintChampionsInfo(Hero);
//
//    return 0;
//}

#include <string>
#include <iostream>

struct TestCase
{
    std::string str; // 테스트 할 문자열
    int expectedWordCount; // 실제 이 문자열에 단어의 갯수 
};

int CountWord(const std::string &text)      //wordcount의 함수
{
    int count = 0;
    bool is_word = false;
    
    for (int i = 0;i < text.length(); ++i)
    {
        if (is_word == false)
        {
            if (text[i] != ' ')     //문자가 존재하면
            {                       //
                count++;            //카운트를 1개 증가시키고
                is_word = true;     //
            }
        }

        if (text[i] == ' ')         
        {
            is_word = false;
        }

    }
    return count;
};

int main(void)
{
    int testSize = 6;
    TestCase tests[] =
    {
        {"I am counting my calories, yet I really want dessert.", 10},
        {"Had he known what was going to happen, he would have never stepped into the shower.", 16},
        {"He didn't heed the warning and it had turned out surprisingly well.", 12},
        {"     He didn't heed the warning and it had turned out surprisingly well.", 12},
        {"He    didn't     heed the       warning       and it had       turned out surprisingly well.", 12},
        {"He    didn't     heed the       warning       and it had       turned out surprisingly well.         ", 12}
    };

    int passTest = 0;

    for (int i = 0; i < testSize; ++i)
    {
        //word
        int wordCount = CountWord(tests[i].str); // <--- 여러분들이 작성해야하는 코드,, 함수로 만들어서 해주세요!!



        if (wordCount == tests[i].expectedWordCount)
        {
            passTest++;
        }
        std::cout << "Test" << i + 1 << " : " << wordCount << ", expecting " << tests[i].expectedWordCount << std::endl;
    }

    std::cout << "Test Result: " << passTest << "/" << testSize << std::endl;
}
