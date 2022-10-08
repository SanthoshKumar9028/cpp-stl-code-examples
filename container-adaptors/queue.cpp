#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> superheros;

    superheros.push("Batman");
    superheros.push("Superamn");
    superheros.push("WonderWoman");
    superheros.push("Cheetha");

    cout << "Size : " << superheros.size() << endl;
    cout << "Front : " << superheros.front() << endl;
    cout << "Back : " << superheros.back() << endl;

    while (superheros.empty() == false)
    {
        cout << superheros.front() << " ";
        superheros.pop();
    }

    return 0;
}