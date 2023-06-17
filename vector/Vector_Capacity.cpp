#include<bits/stdc++.h>
using namespace std;
int main(){

    /* 
    1.size:  cout<<v.size();//0
    2.max_size :cout<<v.max_size();//536870911|| 10^9
    3.capacity: cout<< v.capacity()<<endl;
v.push_back(10);//0
cout<< v.capacity()<<endl;
v.push_back(20);//1
cout<< v.capacity()<<endl;
v.push_back(30);//2
cout<< v.capacity()<<endl;
v.push_back(40);//4
cout<< v.capacity()<<endl;
v.push_back(50);//4
cout<< v.capacity()<<endl;
v.push_back(50);//8
4.clear:v.push_back(10);
v.push_back(20);
v.push_back(30);
v.clear();
cout<<v.size()<<endl;//all elements 0
     */
 vector<int>v;
 //cout<<v.max_size();

v.push_back(10);

v.push_back(20);

v.push_back(30);

v.push_back(40);

v.push_back(50);

v.push_back(50);
//v.clear();
v.resize(3);
v.resize(7,100);
cout<<v.size()<<endl;
for(int i =0; i<v.size();i++){
    cout<<v[i]<<" ";
}

return 0;
}
