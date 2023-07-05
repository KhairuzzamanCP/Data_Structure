#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool emmty()
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    myStack st1;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    while (st1.emmty() == false && st.emmty() == false)
    {
        if (st.top() != st1.top())
        {
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        st1.pop();
    }
    cout << "Yes" << endl;

    return 0;
}