#include<bits/stdc++.h>
using namespace std;
int main(){

/* step:1
Time Complexity O(1)
   output:0
   */
//list<int>mylist; 

/*step:2
Time Complexity O(N) 
output:10; */
//list<int>mylist(10); 
//cout<<mylist.size();

/* step:3
Time Complexity O(N) 
output:5 5 5 5 5 5 5 5 5 5 
list<int>mylist(10,5); 
for(auto it=mylist.begin(); it!=mylist.end();it++){

    cout<<*it<<" ";
} */

/* step:4
Time Complexity O(N) 
output: 1 2 3 4 5 
list<int>list2={1,2,3,4,5};
list<int>mylist(list2); 
for(auto it=mylist.begin(); it!=mylist.end();it++){

    cout<<*it<<" ";
}  */

/* step:5
Time Complexity O(N) 
output: 10 20 30 40 50 
int a[5]={10,20,30,40,50};
list<int>mylist(a,a+5); 
for(auto it=mylist.begin(); it!=mylist.end();it++){

    cout<<*it<<" ";
}  */

vector<int> v={100,200,300};
list<int>mylist(v.begin(),v.end()); 
for(auto it=mylist.begin(); it!=mylist.end();it++){

    cout<<*it<<" ";
}  

//range base for loop
return 0;
}
