#include <bits/stdc++.h>

#define nl '\n'

using namespace std;

class Student{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student a, Student b){
    return a.marks < b.marks;
}

int main(){
{
//this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}
// My Code Starts Here         
    int n;
    cin >> n;

    Student a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    
    sort(a, a + n, cmp);

    for(int i = 0; i < n; i++){
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << nl;
    }

    return 0;
}