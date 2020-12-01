#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 100;

class Person{
protected:
    char *name;
    int age;
public:
    // Your code here
};

class Student: public Person{
private:
    char *major;
    float gpa;
public:
    // Your code here
};

class Faculty: public Person{
private:
    char *office;
    int salary;
public:
    // Your code here
};

int main(){
    Person *p[SIZE];
    char name[SIZE], major[SIZE], office[SIZE];
    int age, salary;
    float gpa;

    int code, cnt = 0;

    while(1){
        cout<<"Enter 1 for student, 2 for faculty, 0 to exit: ";   cin>>code;
        // Your code here

    
    
    }
    cout<<"\n\nPrint all objects\n";
    for(int i=0;i<cnt;i++)
        p[i]->Print();

    for(int i=0;i<cnt;i++)
        delete p[i];

    return 0;
}
