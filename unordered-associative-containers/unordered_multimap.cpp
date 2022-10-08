#include <iostream>
#include <unordered_map>

using namespace std;

void print(string title, const auto &values)
{
    cout << title << endl;

    for (auto it = values.begin(); it != values.end(); it++)
    {
        cout << it->first << " ==> " << it->second << endl;
    }

    cout << endl;
}

/*** Declarations ***/
int main()
{
    unordered_multimap<string, int> power1;

    unordered_multimap<string, int> power2 = {
        {"Batman", 10},
        {"Superman", 100},
        {"WonderWoman", 50}};

    unordered_multimap<string, int> power3{
        {"Batman", 10},
        {"Superman", 100},
        {"WonderWoman", 50}};

    print("Unordered multimap values", power3);

    return 0;
}

/*** Capacity ***/
int Capacity() {
    unordered_multimap<string, int> power{
        {"Batman", 10},
        {"Superman", 100},
        {"Superman", 60},
        {"WonderWoman", 50},
        {"WonderWoman", 60}};

    cout << "Size : " << power.size() << endl;
    cout << "Empty : " << power.empty() << endl;

    return 0;
}

/*** Modifiers ***/
int Modifiers() {
    unordered_multimap<string, int> villains{
        {"Joker", 10},
        {"Darkseid", 100}};

    unordered_multimap<string, int> power{
        {"Batman", 10},
        {"Superman", 100},
        {"Superman", 60},
        {"WonderWoman", 50},
        {"WonderWoman", 60}};

    power.insert(make_pair("Flash", 47));
    power.insert(villains.begin(), villains.end());

    print("After insert", power);

    cout << "Erase Cheetah : " << power.erase("Cheetah") << endl;
    print("After erase('Cheetah')", power);

    power.erase(power.begin());
    print("After erase(power.begin())", power);

    cout << "Before clear, Size : " << power.size() << endl;
    power.clear();
    cout << "After clear, Size : " << power.size() << endl;

    return 0;
}

/*** Lookup ***/
int Lookup() {
    unordered_multimap<string, int> power{
        {"Batman", 10},
        {"Superman", 100},
        {"WonderWoman", 50}};

    cout << "Count of WonderWoman: " << power.count("WonderWoman") << endl;

    unordered_multimap<string, int>::iterator foundIt = power.find("WonderWoman");
    if (foundIt != power.end())
    {

        cout << "Fount WonderWoman => " << foundIt->second << endl;
    }
    else
    {

        cout << "Not Found WonderWoman" << endl;
    }

    // cout << "Contains 3: " << power.contains(3) << endl;

    return 0;
}

/*** Bucket interface ***/
int BucketInterface() {
    unordered_multimap<string, int> power{
        {"Batman", 10},
        {"Batman", 100},
        {"Superman", 100},
        {"WonderWoman", 50}};

    size_t total_buckets = power.bucket_count();
    cout << "Number of Buckets: " << total_buckets << endl;

    cout << "Buckets Size: ";
    for (size_t i = 0; i < total_buckets; i++)
    {
        cout << i << "(" << power.bucket_size(i) << "), ";
    }
    cout << endl;

    cout << "Elements in 0th index Buckets: ";
    for (auto itr = power.begin(0); itr != power.end(0); itr++)
    {
        cout << itr->first << " => " << itr->second << ", ";
    }
    cout << endl;

    return 0;
}