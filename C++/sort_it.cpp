#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int cls;
    char section;
    int student_id;
    int math_marks;
    int eng_marks;
};
bool compare_marks(Student a,Student b){
    if((a.math_marks+a.eng_marks)>(b.math_marks+b.eng_marks))return true;
    else if((a.math_marks+a.eng_marks)==(b.math_marks+b.eng_marks)){
        if(a.student_id<b.student_id)return true;
        else return false;
    }
    else return false;
}
int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].student_id>>a[i].math_marks>>a[i].eng_marks;
    }
    sort(a,a+n,compare_marks);
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].student_id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
return 0;
}