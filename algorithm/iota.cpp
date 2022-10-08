#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{

    vector<int> ranks(10);
    iota(ranks.begin(), ranks.end(), 0);

    for (auto rank : ranks)
    {
        cout << rank << ", ";
    }
    cout << endl;

    return 0;
}