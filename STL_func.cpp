/* Single level Inheritence by using template */
#include<iostream>
#include<iomanip>

using namespace std;
template <class T>

class alpha{
protected:
    T a;

public:
    void check(){
        cout<<"Hello\n";
    }
};

template <class T, class T1>

class beta : public alpha<T>{
private:
    T1 b;

public:
    void get_value(){
        cin >> alpha<T>::a;
        cin >> b;
    }
    
    void display(){
        cout<<"A: "<<alpha<T>::a<<endl;
        cout<<"B: "<<b<<endl;
        alpha<T>::check();
    }
};

int main() {

    beta<int , float> b1;
    beta<int, char> b2;

    cout<<"Enter the int and float values for b1: "<<endl;
    b1.get_value();
    b1.display();

    cout<<"Enter the int and char values for b2: "<<endl;
    b2.get_value();
    b2.display();

    return 0;
}