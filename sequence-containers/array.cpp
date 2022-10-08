#include <iostream>
#include <array>

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
    array<string, 10> superheros1;

    // Declaration with initialization
    array<string, 10> superheros2 = {"Batman", "Superman"}; // initializer list
    array<string, 10> superheros3{"Batman", "Superman"};    // uniform initialization

    printList("Array values ", superheros3);
    return 0;
}

/*** Element access ***/
int ElementAccess()
{
    array<string, 5> superheros{"Batman", "Superman", "WonderWoman", "Cheetah", "Flash"};

    cout << "superheros[0] : " << superheros[0] << endl;
    superheros[0] = "Bruce Wayne";
    cout << "superheros[0] : " << superheros[0] << endl;

    cout << "superheros.at(0) : " << superheros.at(0) << endl;

    cout << "superheros.front() : " << superheros.front() << endl;

    cout << "superheros.back() : " << superheros.back() << endl;

    return 0;
}
