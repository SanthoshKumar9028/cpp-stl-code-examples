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
        vector<int> ranks{9, 1, 0, 5, 3, 6, 8, 4};

        partial_sort(ranks.begin(), ranks.begin() + 4, ranks.end());

        print("After partial_sort in Ascending: ", ranks);
    }
    {
        vector<int> ranks{9, 1, 0, 5, 3, 6, 8, 4};

        partial_sort(ranks.begin(), ranks.begin() + 4, ranks.end(), greater<int>());

        print("After partial_sort in Descending: ", ranks);
    }
    {
        vector<int> ranks{9, 1, 2, 10, 5, 3, 6, 8, 4, 7};

        partial_sort(ranks.begin(), ranks.begin() + 5, ranks.end());
        partial_sort(ranks.begin() + 5, ranks.end(), ranks.end(), greater<int>());

        print("After partial_sort in Ascending and Descending: ", ranks);
    }
    return 0;
}