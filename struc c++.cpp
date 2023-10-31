#include <iostream>
#include <string>
using namespace std;

struct student{
    string name;
    int age;
    double waight;
};
student s[1000];

int main() {

    cin>>s[0].name>>s[0].age>>s[0].waight;
    cout<<s[0].name<<" "<<s[0].age<<" "<<s[0].waight;

    return 0;
}
