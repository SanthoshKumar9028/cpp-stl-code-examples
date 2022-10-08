#include <iostream>
#include <vector>
#include <set>

using namespace std;

void print(string title, const auto &values)
{
    cout << title << endl;

    for (auto it = values.begin(); it != values.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
}

/*** Declarations ***/
int main()
{
    multiset<int> ranks1;
    multiset<int> ranks2 = {10, 5, 5, 4, 2, 2, 1, 20};
    multiset<int> ranks3{10, 5, 5, 4, 2, 2, 1, 20};

    multiset<int> assendingRanks = {10, 5, 5, 4, 2, 2, 3, 3, 1, 20};
    multiset<int, std::greater<>> decendingRanks = {10, 5, 5, 4, 2, 2, 3, 3, 1, 20};

    print("assendingRanks", assendingRanks);
    print("decendingRanks", decendingRanks);

    return 0;
}

/*** Capacity ***/
int Capacity()
{
    multiset<int> ranks = {10, 5, 5, 4, 2, 2, 3, 3, 1, 20};
    print("multiSet values", ranks);

    cout << "Size : " << ranks.size() << endl;
    cout << "Empty : " << ranks.empty() << endl;

    return 0;
}

/*** Modifiers ***/
int Modifiers()
{
    vector<int> lowRanks = {4, 5};
    multiset<int> ranks = {3, 3, 1, 20};

    ranks.insert(4);
    ranks.insert({4, 5});
    ranks.insert(lowRanks.begin(), lowRanks.end());
    print("After insert", ranks);

    cout << "4 Erase Count : " << ranks.erase(4) << endl;
    print("After erase(4)", ranks);

    ranks.erase(ranks.begin());
    print("After erase(ranks.begin())", ranks);

    cout << "Before clear, Size : " << ranks.size() << endl;
    ranks.clear();
    cout << "After clear, Size : " << ranks.size() << endl;

    return 0;
}

/*** Lookup ***/
int Lookup()
{
    multiset<int> ranks = {3, 3, 1, 20};
    cout << "Count of 3: " << ranks.count(3) << endl;

    multiset<int>::iterator foundIt = ranks.find(1);
    if (foundIt != ranks.end())
    {

        cout << "Fount 1" << endl;
    }
    else
    {

        cout << "Not Found 1" << endl;
    }

    // cout << "Contains 3: " << ranks.contains(3) << endl;

    multiset<int>::iterator positionItr = ranks.lower_bound(3);
    cout << "Elements after 3 : ";
    while (positionItr != ranks.end())
    {
        cout << *positionItr << " ";
        positionItr++;
    }
    cout << endl;

    multiset<int>::iterator positionLowerItr = ranks.lower_bound(3);
    multiset<int>::iterator positionUpperItr = ranks.upper_bound(3);

    cout << "Elements from 3 lower to 3 upper : ";
    while (positionLowerItr != positionUpperItr)
    {
        cout << *positionLowerItr << " ";
        positionLowerItr++;
    }
    cout << endl;

    return 0;
}

/*** User Defined Data Types ***/

class SuperHero
{
public:
    string name;
    int power;
    SuperHero(string nm, int pwr) : name(nm), power(pwr) {}
    SuperHero(const SuperHero &hero)
    {
        name = hero.name;
        power = hero.power;
    }
};

bool operator<(const SuperHero &hero1, const SuperHero &hero2)
{
    return hero1.power < hero2.power;
}

int UserDefinedDataTypes()
{
    set<SuperHero> assendingRanks = {{"Batman", 10}, {"Superman", 10}};

    assendingRanks.emplace("WonderWoman", 10);

    for (auto hero : assendingRanks)
    {
        cout << hero.name << " : " << hero.power << endl;
    }

    return 0;
}