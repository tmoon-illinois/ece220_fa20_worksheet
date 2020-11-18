#include <iostream>
#include <cstring>

using namespace std;

class Student{
private:
    char *Name;
    int UIN;
    float GPA;
public:
    Student(char const *_Name, int _UIN, float _GPA);
    ~Student();
    void ShowData();
    int getUIN();
    void setUIN(int _UIN);
    float getGPA();
    void setGPA(float _GPA);
    char* getName();
    void setName(char const *_Name);
};


int main(){
    Student s("", 0, 0.0);
    s.ShowData();
    
    s.setUIN(1);
    s.setGPA(3.0);
    s.setName("Tom");
    cout<<"New data set to: ("<<s.getName()<<", "<<s.getUIN()<<", "<<s.getGPA()<<")"<<endl;
    s.ShowData();
}
