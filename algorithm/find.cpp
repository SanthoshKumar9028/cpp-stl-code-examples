#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

/*** find ***/
int main()
{
    {
        vector<int> ranks{4, 3, 7, 1, 8, 0, 18};
        int toFound = 8;

        vector<int>::iterator it = find(ranks.begin(), ranks.begin(), toFound);

        if (it == ranks.end())
        {
            cout << toFound << " Not found" << endl;
        }
        else
        {
            cout << toFound << " Found" << endl;
        }
    }

    {
        set<int> ranks{4, 3, 7, 1, 1, 8, 0, 8, 18};
        int toFound = 7;

        set<int>::iterator it = find(ranks.begin(), ranks.end(), toFound);

        if (it == ranks.end())
        {
            cout << toFound << " Not found" << endl;
        }
        else
        {
            cout << toFound << " Found" << endl;
        }
    }

    return 0;
}

/*** find_if ***/
int FindIF()
{
    map<string, int> power{
        {"Batman", 10},
        {"Superman", 100},
        {"WonderWoman", 50}};

    string toFound = "Batman";

    map<string, int>::iterator it = find_if(power.begin(), power.end(), [toFound](auto &value)
                                            { return value.first == toFound; });

    if (it == power.end())
    {
        cout << toFound << " Not found" << endl;
    }
    else
    {
        cout << it->first << " " << it->second << " Found" << endl;
    }
}