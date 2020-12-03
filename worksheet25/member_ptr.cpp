#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 100;

class Person{
protected:
    char *name;
    int age;
public:
    Person(){}
    virtual ~Person();
    virtual void Print();
};
Person::~Person(){
    delete []name;
}
void Person::Print(){
    cout<<"Name: "<<name
        <<"\nAge: "<<age
        <<endl;
}

class Student: public Person{
private:
    char *major;
    float gpa;
public:
    Student(char const *_name, int _age, char const *_major, float _gpa);
    ~Student();
    void Print();
};

Student::Student(char const *_name, int _age, char const *_major, float _gpa){
    name = new char[strlen(_name)+1];
    strcpy(name, _name);
    age = _age;

    major = new char[strlen(_major)+1];
    strcpy(major, _major);
    gpa= _gpa;

}
Student::~Student(){
    delete []major;
}
void Student::Print(){
    cout<<"***Occupation: Student"
        <<"\nName: "<<name
        <<"\nAge: "<<age
        <<"\nMajor: "<<major
        <<"\nGPA: "<<gpa
        <<endl;
}

class Faculty: public Person{
private:
    char *office;
    int salary;
public:
    Faculty(char const *_name, int _age, char const *_office, int _salary);
    ~Faculty();
    void Print();
};

Faculty::Faculty(char const *_name, int _age, char const *_office, int _salary){
    name = new char[strlen(_name)+1];
    strcpy(name, _name);
    age = _age;

    office = new char[strlen(_office)+1];
    strcpy(office, _office);
    salary= _salary;

}
Faculty::~Faculty(){
    delete []office;
}
void Faculty::Print(){
    cout<<"***Occupation: Faculty"
        <<"\nName: "<<name
        <<"\nAge: "<<age
        <<"\nOffice: "<<office
        <<"\nsalary: "<<salary
        <<endl;
}


template <class T>
class stack{
private:
    int TOS;
    int size;
    T *data;
public:
    // implement the methods 
    stack(int _size );
    ~stack();
    void push(const T &value);
    T top();
    void pop();
    bool empty();
};

int main(){
    stack<int*> s(5);
    s.push(new int(1));
    s.push(new int(2));
    s.push(new int(3));
    s.push(new int(4));
    s.push(new int(5));
    s.push(new int(6)); // overflow
    while(!s.empty()){
        cout<<*(s.top())<<endl;
        s.pop();
    }
    s.pop();    // underflow
    return 0;
}
