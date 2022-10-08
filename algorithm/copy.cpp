#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>
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
        vector<int> ranks{4, 3, 5, 7, 8, 1, 0, 9, 2};
        vector<int> all_ranks(ranks.size());

        copy(ranks.begin(), ranks.end(), all_ranks.begin());

        print("After copy", all_ranks);
    }

    {
        vector<int> ranks{4, 3, 5, 7, 8, 1, 0, 9, 2};
        vector<int> all_ranks = ranks;

        print("After copy", all_ranks);
    }

    return 0;
}

/*** copy_n ***/
int CopyN()
{
    vector<int> ranks{4, 3, 5, 7, 8, 1, 0, 9, 2};
    vector<int> all_ranks(ranks.size());

    copy_n(ranks.begin(), 6, all_ranks.begin());

    print("After copy", all_ranks);

    return 0;
}

/*** copy_if ***/
int CopyIf()
{
    vector<int> ranks{4, 3, 5, 7, 8, 1, 0, 9, 2};
    vector<int> all_ranks(ranks.size());

    copy_if(ranks.begin(), ranks.end(), all_ranks.begin(), [](int value)
            { return value % 2; });

    print("After copy", all_ranks);

    return 0;
}