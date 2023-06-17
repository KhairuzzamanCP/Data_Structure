#include<bits/stdc++.h>
using namespace std;

string replace(string str, string subStr, char replaceChar) 
{
    
     while (str.find(subStr) != -1)
    {
       
        str.replace(str.find(subStr), subStr.length(), "$");
    }
    return str;
}


int main()
{
    int T;
    cin >> T;
    cin.ignore(); 

    while(T--) 
    {
        string S, X;
        getline(cin, S,' ');
        getline(cin,X);

        S = replace(S, X, '$');
        cout <<S<< endl;
    }

    return 0;
}
