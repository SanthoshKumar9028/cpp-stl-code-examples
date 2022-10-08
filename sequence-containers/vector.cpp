#include <iostream>
#include <vector>

using namespace std;

void printList(string title, const auto &data)
{
    cout << title << endl;
    for (auto datum : data)
    {
        cout << datum << " ";
    }
    cout << endl;
}

/*** Declaration ***/
int main()
{
    vector<string> superheros1;
    vector<string> superheros2(10, "superhero");

    // Declaration with initialization
    vector<string> superheros3 = {"Batman", "Superman"}; // initializer list
    vector<string> superheros4{"Batman", "Superman"};    // uniform initialization

    printList("Vector values", superheros4);
    return 0;
}

/*** Element access ***/
int ElementAccess()
{
    vector<string> superheros{"Batman", "Superman"};
    cout << "superheros[0] : " << superheros[0] << endl;
    superheros[0] = "Bruce Wayne";
    cout << "superheros[0] : " << superheros[0] << endl;

    cout << "superheros.at(0) : " << superheros.at(0) << endl;

    cout << "superheros.begin() : " << *superheros.begin() << endl;

    cout << "superheros.size() : " << superheros.size() << endl;

    return 0;
}

/*** Capacity ***/
int Capacity()
{
    vector<string> superheros{"Batman", "Superman", "WonderWoman", "Flash"};
    superheros.reserve(10);

    cout << "superheros.size() : " << superheros.size() << endl;
    cout << "superheros.capacity() : " << superheros.capacity() << endl;

    superheros.resize(20);

    cout << "superheros.size() : " << superheros.size() << endl;
    cout << "superheros.capacity() : " << superheros.capacity() << endl;

    printList("Super Heros : ", superheros);
}

/*** Modifiers ***/
int Modifiers()
{
    vector<string> superheros{"Batman", "Superman"};
    superheros.push_back("WonderWoman");
    superheros.push_back("Flash");

    printList("After push_back", superheros);

    superheros.pop_back();

    printList("After pop_back", superheros);

    superheros.insert(superheros.begin(), "Flash");
    superheros.insert(superheros.begin(), {"Joker", "Cheetah"});
    superheros.insert(superheros.begin(), 2, "Darkseid");

    printList("After insert", superheros);

    superheros.erase(superheros.begin());

    printList("After erase", superheros);

    return 0;
}