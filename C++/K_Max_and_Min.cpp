#include<bits/stdc++.h>
using namespace std;
int main(){

int a,b,c;
cin >>a>>b>>c;
int mx,mn;
mx=max(a,b);
mx =max(mx,c);
mn= min(a,b);
mn =min(mn,c);

cout <<mn<<" "<<mx;

return 0;
}
