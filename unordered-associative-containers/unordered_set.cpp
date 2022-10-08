#include <iostream>
#include <vector>
#include <unordered_set>

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

/*** Declarations ***/
int main()
{
    unordered_set<int> ranks1;
    unordered_set<int> ranks2 = {10, 5, 5, 4, 2, 2, 1, 20};
    unordered_set<int> ranks3{10, 5, 5, 4, 2, 2, 1, 20};

    print("unordered set values", ranks3);
}

/*** Capacity ***/
int Capacity()
{
    unordered_set<int> ranks = {10, 5, 5, 4, 2, 2, 3, 3, 1, 20};
    print("unordered_set values", ranks);

    cout << "Size : " << ranks.size() << endl;
    cout << "Empty : " << ranks.empty() << endl;

    return 0;
}

/*** Modifiers ***/
int Modifiers()
{
    vector<int> lowRanks = {4, 5};
    unordered_set<int> ranks = {3, 3, 1, 20};

    ranks.insert(4);
    ranks.insert({4, 5});
    ranks.insert(lowRanks.begin(), lowRanks.end());
    print("After insert", ranks);

    cout << "10 Erase Count : " << ranks.erase(10) << endl;
    print("After erase(10)", ranks);

    ranks.erase(ranks.begin());
    print("After erase(ranks.begin())", ranks);

    cout << "Before clear, Size : " << ranks.size() << endl;
    ranks.clear();
    cout << "After clear, Size : " << ranks.size() << endl;

    return 0;
}

/*** Lookup ***/
int Lookup()
{
    // Lookup
    unordered_set<int> ranks = {3, 3, 1, 20};
    cout << "Count of 3: " << ranks.count(3) << endl;

    unordered_set<int>::iterator foundIt = ranks.find(1);
    if (foundIt != ranks.end())
    {

        cout << "Fount 1" << endl;
    }
    else
    {

        cout << "Not Found 1" << endl;
    }

    // cout << "Contains 3: " << ranks.contains(3) << endl;

    return 0;
}

/*** Bucket interface ***/
int BucketInterface()
{
    unordered_set<int> ranks = {3, 3, 1, 20};
    size_t total_buckets = ranks.bucket_count();
    cout << "Number of Buckets: " << total_buckets << endl;

    cout << "Buckets Size: ";
    for (size_t i = 0; i < total_buckets; i++)
    {
        cout << i << "(" << ranks.bucket_size(i) << "), ";
    }
    cout << endl;

    return 0;
}