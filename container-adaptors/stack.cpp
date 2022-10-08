#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> superheros;

    superheros.push("Batman");
    superheros.push("Superman");
    superheros.push("Cheetah");
    superheros.push("WonderWoman");

    cout << "Size : " << superheros.size() << endl;
    cout << "Top : " << superheros.top() << endl;

    superheros.pop();

    cout << "After pop" << endl;
    cout << "Size : " << superheros.size() << endl;
    cout << "Top : " << superheros.top() << endl;

    // Not possible to iterate elements
    // for (auto name : superheros)
    // {
    //     cout << name << " ";
    // }

    while (superheros.empty() == false)
    {
        cout << superheros.top() << " ";
        superheros.pop();
    }

    return 0;
}