// Hierarchical Inheritance
#include <iostream>
using namespace std;
class GrandFather
{
private:
    int age = 70;

public:
    void show_grandfater_age()
    {
        cout << "GrandFather Age is :" << age << endl;
    }
};
class Son : public GrandFather
{
private:
    int age = 45;

public:
    void show_son_age()
    {
        cout << "Son's age is: " << age << endl;
    }
};
class Son_child_1 : public Son
{
private:
    int age = 20;

public:
    void show_son_child_1_age()
    {
        cout << "Son's child 1 age is:" << age << endl;
    }
};

class Son_child_2 : public Son
{
private:
    int age = 10;

public:
    void show_son_child_2_age()
    {
        cout << "Son's child 2 age is:" << age << endl;
    }
};

class Daughter : public GrandFather
{
private:
    int age = 50;

public:
    void show_daughter_age()
    {
        cout << "The age of a daughter is:" << age << endl;
    }
};
class Daughter_child_1 : public Daughter
{
private:
    int age = 25;

public:
    void show_daughter_child_1_age()
    {
        cout << "The age of the daughter's daughter is: " << age << endl;
    }
};
int main()
{
    Son_child_1 sc1;
    Son_child_2 sc2;
    Daughter_child_1 dc1;
    sc1.show_son_child_1_age();
    sc1.show_son_age();
    sc1.show_grandfater_age();
    sc2.show_son_child_2_age();
    sc2.show_son_age();
    sc2.show_grandfater_age();
    dc1.show_daughter_child_1_age();
    dc1.show_daughter_age();
    dc1.show_grandfater_age();

    return 0;
}