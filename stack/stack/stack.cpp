
#include <iostream>
#include <string>
#include <stack>

using namespace std;
void ReverseTheString(string&);
int main()
{
    string s;
    cout << "Lutfen bir string giriniz: ";
    getline(cin, s);
    cout << "Girdiginiz strinin tersine cevrilmis hali" << endl;
    ReverseTheString(s);
    cout <<s<< endl;
    return 0;
}
void ReverseTheString(string &x)
{
    stack<char> s;
    for (int i = 0; i < x.length(); i++)
    {
        s.push(x[i]);
    }
    for (int i = 0; !s.empty(); i++, s.pop())
    {
        x[i] = s.top();
    }
}