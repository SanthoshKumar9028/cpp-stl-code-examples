#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    {
        vector<int> ranks{0, 1, 8, 3, 4};
        vector<int>::iterator end_itr = is_sorted_until(ranks.begin(), ranks.end());
        cout << "Last sorted until element " << *end_itr << endl;
        for (auto itr = ranks.begin(); itr != end_itr; ++itr)
        {
            cout << *itr << ", ";
        }
        cout << endl;
    }
    {
        vector<int> ranks{9, 1, 8, 3, 4};
        vector<int>::iterator end_itr = is_sorted_until(ranks.begin(), ranks.end(), greater<int>());
        
        cout << "Last sorted until element " << *end_itr << endl;
        for (auto itr = ranks.begin(); itr != end_itr; ++itr)
        {
            cout << *itr << ", ";
        }
        cout << endl;
    }
    return 0;
}