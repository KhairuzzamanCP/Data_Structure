#include <bits/stdc++.h>
using namespace std;

class Students
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Students obj[n];
    for (int i = 0; i < n; i++)
    {  
        cin >> obj[i].nm>> obj[i].cls>> obj[i].s>> obj[i].id;
        cin.ignore();
    }
    for (int i = 0; i < n/2; i++)
    {
        swap(obj[i].id,obj[n-1-i].id);
    }
    for (int i = 0; i < n; i++)
    {
        cout <<obj[i].nm << " " << obj[i].cls << " " << obj[i].s<<" "<<obj[i].id<< endl;
    }
    return 0;
}