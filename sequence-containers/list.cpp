#include <iostream>
#include <list>

using namespace std;

void printList(string title, const list<string> &string_list)
{
    cout << title << endl;
    for (auto item : string_list)
    {
        cout << item << " ";
    }
    cout << endl;
}

/*** Declarations ***/
int main()
{
    list<string> superheros1;
    list<string> superheros2(10);
    list<string> superheros3(10, "man");
    list<string> superheros4 = {"Batman"};
    list<string> superheros5{"Superman"};
    printList("list values", superheros3);

    return 0;
}

/*** Element access ***/
int ElementAccess()
{
    list<string> superheros{"Batman", "Superman", "WonderWoman", "Flash"};

    cout << "Front : " << superheros.front() << endl;
    cout << "Back : " << superheros.back() << endl;

    return 0;
}

/*** Capacity ***/
int Capacity()
{
    list<string> superheros{"Batman", "Superman", "WonderWoman", "Flash"};
    list<string> supervillains;

    cout << "Superheros Size: " << superheros.size() << endl;
    cout << "Superheros Empty: " << superheros.empty() << endl;
    cout << "Supervillains Size: " << supervillains.size() << endl;
    cout << "Supervillains Empty: " << supervillains.empty() << endl;

    return 0;
}

/*** Modifiers ***/
int Modifiers()
{
    list<string> superheros;

    superheros.push_back("Superman");
    superheros.push_front("Batman");
    superheros.push_front("WonderWoman");

    printList("After push", superheros);

    superheros.pop_front();
    superheros.pop_back();

    printList("After pop", superheros);

    superheros.insert(superheros.begin(), "Superman");
    superheros.insert(std::next(superheros.begin(), 1), {"WonderWoman", "Flash"});

    printList("After insert", superheros);

    return 0;
}

/*** Operations ***/
int Operations()
{
    list<string> supervillains{"Joker", "Cheetah", "Darkseid", "Joker"};

    supervillains.remove("Joker");

    printList("remmove", supervillains);

    supervillains.remove_if([](string name)
                            { return name.find("ee") != string::npos; });

    printList("remove_if", supervillains);

    return 0;
}