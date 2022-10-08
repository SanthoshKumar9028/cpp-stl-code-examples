#include <iostream>
#include <map>

using namespace std;

void print(string title, const auto &values)
{
    cout << title << endl;

    for (auto it = values.begin(); it != values.end(); it++)
    {
        cout << it->first << " ==> " << it->second << endl;
    }

    cout << endl;
}

/*** Declarations ***/
int main()
{
    map<string, int> power1;
    power1["Batman"] = 10;
    power1["Superman"] = 100;
    power1["WonderWoman"] = 50;

    map<string, int> power2 = {
        {"Batman", 10},
        {"Superman", 100},
        {"WonderWoman", 50}};

    map<string, int> power3{
        {"Batman", 10},
        {"Superman", 100},
        {"WonderWoman", 50}};

    map<string, int> power4(power3);

    print("Map values", power4);

    return 0;
}

/*** Element access ***/
int ElementAccess()
{
    map<string, int> power{
        {"Batman", 10},
        {"Superman", 100},
        {"WonderWoman", 50}};

    cout << "power['Batman'] : " << power["Batman"] << endl;
    cout << "power.at('Batman') : " << power.at("Batman") << endl;

    return 0;
}

/*** Capacity ***/
int Capacity()
{
    // Capacity
    map<string, int> power{
        {"Batman", 10},
        {"Superman", 100},
        {"Superman", 60},
        {"WonderWoman", 50},
        {"WonderWoman", 60}};

    cout << "Size : " << power.size() << endl;
    cout << "Empty : " << power.empty() << endl;

    return 0;
}

/*** Modifiers ***/
int Modifiers()
{
    map<string, int> villains{
        {"Joker", 10},
        {"Darkseid", 100}};

    map<string, int> power{
        {"Batman", 10},
        {"Superman", 100},
        {"Superman", 60},
        {"WonderWoman", 50},
        {"WonderWoman", 60}};

    power["Cheetah"] = 25;
    power.insert(make_pair("Flash", 47));
    // power.insert_or_assign(pair<string, int>("Flash", 49));
    // power["Flash"] = 49;
    power.insert(villains.begin(), villains.end());

    print("After insert", power);

    cout << "Erase Cheetah : " << power.erase("Cheetah") << endl;
    print("After erase('Cheetah')", power);

    power.erase(power.begin());
    print("After erase(power.begin())", power);

    cout << "Before clear, Size : " << power.size() << endl;
    power.clear();
    cout << "After clear, Size : " << power.size() << endl;

    return 0;
}

/*** Lookup ***/
int Lookup()
{
    map<string, int> power{
        {"Batman", 10},
        {"Superman", 100},
        {"WonderWoman", 50}};

    cout << "Count of WonderWoman: " << power.count("WonderWoman") << endl;

    map<string, int>::iterator foundIt = power.find("WonderWoman");
    if (foundIt != power.end())
    {

        cout << "Fount WonderWoman => " << foundIt->second << endl;
    }
    else
    {

        cout << "Not Found WonderWoman" << endl;
    }

    // cout << "Contains 3: " << power.contains(3) << endl;
    return 0;
}