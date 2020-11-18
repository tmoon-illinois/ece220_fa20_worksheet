#include <iostream>

using namespace std;
const int MAX_SIZE = 5;

class twodvec{
private:
    double x, y;
public:
    twodvec(double _x=0, double _y=0){ x = _x; y = _y;}
    twodvec operator+(const twodvec &b) { twodvec tmp(x+b.x, y+b.y); return tmp; }
    double operator[](int z) const { if (!z) return x; if (z==1) return y; return 0;}
    twodvec operator*(const twodvec &b);
    void show() { cout << x << " " << y << endl;}
};

class VecArray{
private:
    twodvec array[MAX_SIZE];
    int idx;
public:
    VecArray(){ idx = 0;}
    void AddElem(const twodvec& elem);
    void ShowAllElem();
    twodvec& operator[](int _idx);
};

int main(){
    VecArray s;

    s.AddElem(twodvec(1,0));
    s.AddElem(twodvec(0,1));
    s.AddElem(twodvec(1,1));
    s.ShowAllElem();

    s[0] = twodvec(2,0);
    s[1] = twodvec(0,2);
    s[2] = s[0]+s[1];
    s.ShowAllElem();

    s[2] = s[0]*s[1];
    s.ShowAllElem();

    s.AddElem(twodvec(5,6));
    s.AddElem(twodvec(11,20));
    s.AddElem(twodvec(100,100));
    s.ShowAllElem();
    
    return 0;
}
