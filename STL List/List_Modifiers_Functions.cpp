#include<bits/stdc++.h>
using namespace std;
int main(){
/* 
    //1.Assign another list.
Time Complexity O(N) 
output: 10 20 30 
list<int>mylist={10,20,30};
list<int>newlist;
//newlist=mylist;
newlist.assign(mylist.begin(),mylist.end());
//range for loop
for(int val: newlist){
    cout<<val<<" ";
} */


/*2. push_back or  tail
Time Complexity O(1) 
output: 10 20 30 100
 list<int>mylist={10,20,30};
mylist.push_back(100);
//range for loop
for(int val: mylist){
    cout<<val<<" ";
}
 */

/*3. pop_back or delete tail
Time Complexity O(1) 
output: 10 20 
list<int>mylist={10,20,30};
mylist.pop_back();
//range for loop
for(int val: mylist){
    cout<<val<<" ";
}*/

/*4. push_fornt or head
Time Complexity O(1) 
output: 100 10 20 30 
list<int>mylist={10,20,30};
mylist.push_front(100);
//range for loop
for(int val: mylist){
    cout<<val<<" ";
} */

/*4. pop_fornt or delete head
Time Complexity O(1) 
output:  20 30 
list<int>mylist={10,20,30};
mylist.pop_front();
//range for loop
for(int val: mylist){
    cout<<val<<" ";
}*/ 


/*5.insert 
 Time Complexity O(N+k) 
output:  10 20 100 30 
list<int>mylist={10,20,30};
mylist.insert(next(mylist.begin(),2),100);
//range for loop
for(int val: mylist){
    cout<<val<<" ";
} */

/* 6.insert multiple
 Time Complexity O(N+K) 
output:  10 20 100 200 300 30 
list<int>mylist={10,20,30};
mylist.insert(next(mylist.begin(),2),{100,200,300});
//range for loop
for(int val: mylist){
    cout<<val<<" ";
} */

/* 7.insert multiple
 Time Complexity O(N+k) 
output:  10 20 100 200 300 30 
list<int>mylist={10,20,30};
list<int>newlist ={100,200,300};
mylist.insert(next(mylist.begin(),2),newlist.begin(),newlist.end());
//range for loop
for(int val: mylist){
    cout<<val<<" ";
} */


/*8.erase
 Time Complexity O(N+K) 
output:  10 20  
 list<int>mylist={10,20,30};
mylist.erase(next(mylist.begin(),2));
//range for loop
for(int val: mylist){
    cout<<val<<" ";
} 
 */

/*9.erase multiple
 Time Complexity O(N+K) 
output:  10 20 70  
 list<int>mylist={10,20,30,50,60,70};
mylist.erase(next(mylist.begin(),2),next(mylist.begin(),5));
//range for loop
for(int val: mylist){
    cout<<val<<" ";
} */
 
/* 10.replace
Time Complexity O(N) 
output: 10 20 100 50 100 70 
  list<int>mylist={10,20,30,50,30,70};
  replace(mylist.begin(),mylist.end(),30,100);
//range for loop
for(int val: mylist){
    cout<<val<<" ";
}  */

 list<int>mylist={10,20,30,50,30,70};

auto it = find(mylist.begin(),mylist.end(),30);
if(it==mylist.end()){
    cout<<"Not Found";
}
else{
    cout<<"Found";
}
return 0;
}
