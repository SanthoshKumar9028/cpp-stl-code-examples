#include <iostream>
#include <forward_list>

using namespace std;

void printList(string title, const forward_list<string> &string_list)
{
    cout << title << endl;
    for (auto item : string_list)
    {
        cout << item << " ";
    }
    cout << endl;
}

/*** Declaration ***/
int main()
{
    forward_list<string> superheros;
    forward_list<string> superheros = {"Batman", "Superman", "WonderWoman"};
    forward_list<string> superheros{"Batman", "Superman", "WonderWoman"};
    printList("forward list values", superheros);

    return 0;
}

/*** Modifiers ***/
int Modifiers()
{
    forward_list<string> superheros = {"Batman", "Superman", "WonderWoman"};

    superheros.push_front("Darkseid");
    printList("insert at front", superheros);

    superheros.pop_front();
    printList("pop_front", superheros);

    superheros.insert_after(superheros.begin(), "Flash");
    printList("insert_after", superheros);

    superheros.erase_after(superheros.begin());
    printList("erase_after", superheros);

    superheros.insert_after(superheros.before_begin(), "Flash");
    printList("insert at front", superheros);

    return 0;
}

/*** Operations ***/
int Operations()
{
    forward_list<string> superheros = {"Batman", "Superman", "WonderWoman"};
    forward_list<string> supervillains = {"Joker", "Darkseid", "Cheetah"};

    superheros.reverse();
    printList("reverse", superheros);

    superheros.sort();
    printList("sorted Superheros", superheros);

    supervillains.sort();
    printList("sorted Supervillains", supervillains);

    forward_list<string> dc;
    dc.merge(superheros);
    dc.merge(supervillains);

    printList("merge", dc);
    cout << "Empty superheros : " << superheros.empty() << endl;
    cout << "Empty supervillains : " << supervillains.empty() << endl;

    superheros = {"CatWoman"};
    dc.splice_after(dc.before_begin(), superheros);
    printList("splice_after", dc);

    cout << "Empty superheros : " << superheros.empty() << endl;

    {
        forward_list<string> superheros{"Batman", "Superman", "Superman", "Superman", "Catwoman", "WonderWoman", "Superman"};
        superheros.unique();
        printList("unique", superheros);
    }

    {
        forward_list<string> superheros{"Batman", "Superman", "Superman", "Superman", "Catwoman", "WonderWoman", "Superman"};
        superheros.remove("Superman");
        printList("remove", superheros);
    }

    {
        forward_list<string> superheros{"Batman", "Superman", "Flash", "Catwoman", "WonderWoman"};
        superheros.remove_if([](string name)
                             { return name.length() <= 6; });
        printList("remove_if", superheros);
    }
    
    return 0;
}