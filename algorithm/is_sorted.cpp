#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    {
        vector<int> ranks{0, 1, 2, 3, 4};
        cout << "Is sorted in Ascending: " << is_sorted(ranks.begin(), ranks.end()) << endl;
    }
    {
        vector<int> ranks{5, 4, 3, 2, 1, 0};
        cout << "Is sorted in Descending: " << is_sorted(ranks.begin(), ranks.end(), greater<int>()) << endl;
    }
    {
        vector<int> ranks{0, 1, 2, 10, 4};
        cout << "Is sorted in Ascending: " << is_sorted(ranks.begin(), ranks.end()) << endl;
        cout << "Is sorted in Ascending except last element: " << is_sorted(ranks.begin(), (ranks.begin() + (ranks.size() - 1))) << endl;
    }
    return 0;
}