#include <iostream>

using namespace std;

class Base{
    int a; // Private , not inheritable

public:
    int b;       // public, ready for inheritance
    void get_ab();
    int get_a(void);
    void show_a(void);
};

class Derived : public Base
{
    int c;

public:
    void mul(void);
    void display(void);

};

void Base ::get_ab(void){
    a = 5; b =10;
}

int Base::get_a(void){
    return a;
}

void Base :: show_a()
{
    cout << "a = " << a << "\n";
}

void Derived ::mul()
{
    c = b * get_a();
}

void Derived :: display()
{
    cout << "a = " << get_a() << "\n";
    cout << "b = " << b << "\n";
    cout << "C = " << c << "\n\n";
}


int main()
{
    Derived d;

    d.get_ab();
    d.mul();
    d.show_a();
    d.display();

    d.b = 20;

    d.mul();
    d.show_a();
    d.display();

    return 0;
}