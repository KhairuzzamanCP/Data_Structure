#include<bits/stdc++.h>
using namespace std;
int main(){

/************
setp 1
vector<int>v; //0;

setp 2
vector<int>v(3);//10 20 30
setp 3
vector<int>v(3,10);//10 10 10
step 4
vector<int>v2(3,100);//100
vector<int>v(v2);100 100 100
setp 5
int a[6]={1,2,3,4,5,6};copy
vector<int> v(a,a+6);1 2 3 4 5 6
*************/
int a[6]={1,2,3,4,5,6};
vector<int> v(a,a+6);
for(int i= 0;i<v.size();i++){

cout<<v[i]<<" ";
}
cout<<endl;
cout<<v.size();
return 0;
}
