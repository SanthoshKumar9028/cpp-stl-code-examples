#include <iostream>
#include <vector>
#include <queue>

using namespace std;

/*** Min Priority ***/
int main()
{
    priority_queue<int> marks;

    marks.push(10);
    marks.push(1);
    marks.push(100);
    marks.push(19);
    marks.push(78);

    cout << "Top : " << marks.top() << endl;
    cout << "Elements : ";
    while (marks.empty() == false)
    {
        cout << marks.top() << " ";
        marks.pop();
    }
    cout << endl;

    return 0;
}

/*** Max Priority ***/
int MaxPriority()
{
    priority_queue<int, std::vector<int>, std::greater<int>> marks;

    marks.push(10);
    marks.push(1);
    marks.push(100);
    marks.push(19);
    marks.push(78);

    cout << "Top : " << marks.top() << endl;
    cout << "Elements : ";
    while (marks.empty() == false)
    {
        cout << marks.top() << " ";
        marks.pop();
    }
    cout << endl;

    return 0;
}