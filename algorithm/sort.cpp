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

/*** integral data types ***/
int main()
{
    vector<int> ranks{4, 3, 7, 1, 8, 0, 18};

    sort(ranks.begin(), ranks.end());

    print("After sort", ranks);

    return 0;
}

/*** user defined data types ***/
class Character
{
public:
    int rank;
    string name;

    Character(int r, string n) : rank(r), name(n) {}
};

bool operator<(const Character &lhs, const Character &rhs)
{
    return lhs.rank < rhs.rank;
}

bool operator>(const Character &lhs, const Character &rhs)
{
    return lhs.rank > rhs.rank;
}

int UserDefinedDataTypes()
{

    vector<string> names{"Cheetah", "Darkseid", "Superman", "Batman", "WonderWoman"};
    vector<int> ranks{5, 2, 3, 1, 4};
    vector<Character> characters;

    for (int i = 0; i < names.size(); i++)
    {
        characters.emplace_back(ranks[i], names[i]);
    }

    sort(characters.begin(), characters.end(), greater<Character>());

    for (auto character : characters)
    {
        cout << character.rank << " : " << character.name << endl;
    }

    cout << endl;

    return 0;
}

/*** Function object ***/
struct GreaterCamparator
{
    bool operator()(int lhs, int rhs) const
    {
        return lhs > rhs;
    }
} greaterCamparatorObject;

int FunctionObject()
{
    vector<int> ranks{4, 3, 7, 1, 8, 0, 18};

    sort(ranks.begin(), ranks.end(), greaterCamparatorObject);

    print("After sort", ranks);

    return 0;
}

/*** lambda expression ***/
int LambdaExpression()
{
    vector<int> ranks{4, 3, 7, 1, 8, 0, 18};

    sort(ranks.begin(), ranks.end(), [](int a, int b)
         { return a > b; });

    print("After sort", ranks);
    return 0;
}
