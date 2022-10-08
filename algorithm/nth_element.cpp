#include <iostream>
#include <vector>
#include <algorithm>

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

int main()
{
    {
        vector<int> ranks{13, 9, 1, 0, 5, 3, 6, 8, 4};
        nth_element(ranks.begin(), ranks.begin() + 2, ranks.end());
        print("After nth_element", ranks);
    }
    {
        // finding median
        vector<int> ranks{13, 9, 1, 0, 5, 3, 6, 8, 4};
        nth_element(ranks.begin(), ranks.begin() + (ranks.size() / 2), ranks.end());
        cout << "Median " << ranks[ranks.size() / 2] << endl;
    }
    return 0;
}