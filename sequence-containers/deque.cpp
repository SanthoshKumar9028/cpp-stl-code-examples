#include <iostream>
#include <deque>

using namespace std;

void printList(string title, const deque<string> &string_list)
{
    cout << title << endl;
    for (auto item : string_list)
    {
        cout << item << " ";
    }
    cout << endl;
}

/*** Element access ***/
int main()
{
    deque<string> superheros{"Batman", "Superman", "WonderWoman", "Cheetah", "Flash"};

    cout << "superheros[0] : " << superheros[0] << endl;
    superheros[0] = "Bruce Wayne";
    cout << "superheros[0] : " << superheros[0] << endl;

    cout << "superheros.at(0) : " << superheros.at(0) << endl;

    cout << "superheros.front() : " << superheros.front() << endl;

    cout << "superheros.back() : " << superheros.back() << endl;

    return 0;
}

/*** Modifiers ***/
int Modifiers()
{

    deque<string> superheros;
    superheros.push_back("Batman");
    superheros.push_back("Superman");
    superheros.push_front("Catwoman");
    superheros.push_front("WonderWoman");

    printList("After push", superheros);

    superheros.pop_front();
    superheros.pop_back();

    printList("After pop", superheros);

    superheros.insert(superheros.begin(), "Flash");

    printList("After Insert", superheros);

    return 0;
}