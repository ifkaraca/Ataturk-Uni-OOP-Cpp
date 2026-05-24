#include <list>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    list<string> lst;
    lst.push_back("Dal");
    lst.push_front("Deniz");
    lst.insert(++lst.begin(), "Erzurum");
    list<string>::iterator it = lst.begin();
    it++;
    it++;
    lst.insert(it, 3, "Artvin");
    it--;
    lst.erase(it);
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << endl;
    }
    lst.sort();
    while (!lst.empty())
    {
        cout << lst.front() << endl;
        lst.pop_front();
    }
    return 0;
}
