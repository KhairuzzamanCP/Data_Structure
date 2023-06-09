#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int cls;
    char section;
    int math_marks;
    int eng_marks;
};

int main() {
    int N;
   cin >> N;

   Student Obj[N];

    for (int i = 0; i < N; i++) {
      cin >> Obj[i].name >> Obj[i].cls >> Obj[i].section >> Obj[i].math_marks >> Obj[i].eng_marks;
    }

 
    for (int i = N - 1; i >= 0; i--) {
      cout << Obj[i].name << " " << Obj[i].cls << " " << Obj[i].section << " "
                  << Obj[i].math_marks << " " << Obj[i].eng_marks << endl;
    }

    return 0;
}
