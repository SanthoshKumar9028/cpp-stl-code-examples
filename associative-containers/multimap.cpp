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
    multimap<string, int> power1;

    multimap<string, int> power2 = {
        {"Batman", 10},
        {"Superman", 100},
        {"WonderWoman", 50}};

    multimap<string, int> power3{
        {"Batman", 10},
        {"Superman", 100},
        {"WonderWoman", 50}};

    multimap<string, int> power4(power3);

    print("Multimap values", power4);

    return 0;
}

/*** Capacity ***/
int Capacity()
{
    // Capacity
    multimap<string, int> power{
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
    multimap<string, int> villains{
        {"Joker", 10},
        {"Darkseid", 100}};

    multimap<string, int> power{
        {"Batman", 10},
        {"Superman", 100},
        {"Superman", 60},
        {"WonderWoman", 50},
        {"WonderWoman", 60}};

    power.insert(make_pair("Flash", 47));
    power.insert(villains.begin(), villains.end());

    print("After insert", power);

    cout << "Erase Superman : " << power.erase("Superman") << endl;
    print("After erase('Superman')", power);

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
    multimap<string, int> power{
        {"Batman", 10},
        {"Superman", 100},
        {"Superman", 60},
        {"WonderWoman", 50},
        {"WonderWoman", 60}};

    cout << "Count of WonderWoman: " << power.count("WonderWoman") << endl;

    multimap<string, int>::iterator foundIt = power.find("WonderWoman");
    if (foundIt != power.end())
    {

        cout << "Fount WonderWoman => " << foundIt->second << endl;
    }
    else
    {

        cout << "Not Found WonderWoman" << endl;
    }

    // cout << "Contains 3: " << power.contains(3) << endl;

    multimap<string, int>::iterator positionItr = power.lower_bound("Superman");
    cout << "Elements from Superman key to end : ";
    while (positionItr != power.end())
    {
        cout << positionItr->first << " => " << positionItr->second << ", ";
        positionItr++;
    }
    cout << endl;

    multimap<string, int>::iterator positionLowerItr = power.lower_bound("Superman");
    multimap<string, int>::iterator positionUpperItr = power.upper_bound("Superman");

    cout << "Elements in Superman key : ";
    while (positionLowerItr != positionUpperItr)
    {
        cout << positionLowerItr->first << " => " << positionLowerItr->second << ", ";
        positionLowerItr++;
    }
    cout << endl;

    return 0;
}