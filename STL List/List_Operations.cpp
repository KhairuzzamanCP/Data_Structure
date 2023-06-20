#include<bits/stdc++.h>
using namespace std;
int main(){


/* 1.remove
Time Complexity O(N) 
output: 20 40 50 
list<int>mylist={10,20,10,40,10,50,10};
  mylist.remove(10);
//range for loop
for(int val: mylist){
    cout<<val<<" ";
}  */

/* 2.sort assinding
Time Complexity O(NlogN) 
output: 10 10 20 40 50 60 80 
list<int>mylist={10,20,60,40,80,50,10};
mylist.sort();
//range for loop
for(int val: mylist){
    cout<<val<<" ";
}   */

/* 3.sort dessinding
Time Complexity O(NlogN) 
output: 80 60 50 40 20 10 10  
list<int>mylist={10,20,60,40,80,50,10};
mylist.sort(greater<int>());
//range for loop
for(int val: mylist){
    cout<<val<<" ";
}  */ 

/* 4.unique 
Time Complexity O(N) 
output: 10 60 80 50 
list<int>mylist={10,10,60,60,80,50,50};
mylist.unique();
//range for loop
for(int val: mylist){
    cout<<val<<" ";
}   */

/* 5.unique sort assinding
Time Complexity O(NlogN) 
output: 10 20 50 60 80 
list<int>mylist={10,20,60,10,80,50,60,50};
mylist.sort();
mylist.unique();
//range for loop
for(int val: mylist){
    cout<<val<<" ";
}   
 */

 /* 6.unique sort  dessinding
Time Complexity O(NlogN) 
output: 80 60 50 20 10 
list<int>mylist={10,20,60,10,80,50,60,50};
mylist.sort(greater<int>());
mylist.unique();
//range for loop
for(int val: mylist){
    cout<<val<<" ";
}    */



return 0;
}
 
