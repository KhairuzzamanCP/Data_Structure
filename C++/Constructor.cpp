#include<bits/stdc++.h>
using namespace std;

class Student{
 public:
 char name[100];
 int roll;
 int cls;
 char section;
 Student(int r,char s, int c, char *n ){
roll = r;
section = s;
cls = c;
strcpy(name,n);

}
};
int main(){
 Student Rahim(29,'A',7, "Rana");
 cout<<Rahim.name<<endl;
 cout<<Rahim.roll<<endl;
 cout<<Rahim.section<<endl;
 cout<<Rahim.cls<<endl;

return 0;
}
