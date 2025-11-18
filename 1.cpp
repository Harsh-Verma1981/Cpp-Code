// #include <iostream>
// #include <string>
// #include <cstring>

// using namespace std;

// class String {
//     char a[100];

// public:
//     void getdata(const char *s) {
//         strcpy(a, s);
//     }

//     void putdata() const {
//         cout << "string: " << a << endl;
//     }

//     String operator*(int n) {
//         String tempObj;
//         char temp[100];
//         strcpy(temp, a); 

//         int len = strlen(a);
//         if (len * n >= 100) {
//             cout << "Error: Resulting string is too long!" << endl;
//             return *this;
//         }

//         strcpy(tempObj.a, a);
//         for (int i = 1; i < n; i++) {
//             strcat(tempObj.a, temp);
//         }
//         return tempObj;
//     }
// };

// int main() {
//     String ob1, ob2;
//     ob1.getdata("Hello ");
//     ob2 = ob1 * 6;
//     ob2.putdata();

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class A{
//     public:
//     A(){
//         cout<<"calling default base class constructor"<<endl; // constructor 
//     }
//     ~A(){
//         cout<<"calling base class destructor"<<endl; // destructor 
//     }
// };

// class B : public A{
//     public:
//     B(){
//         cout<<"calling default derived class constructor"<<endl; // constructor 
//     }
//     ~B(){
//         cout<<"calling derived class destructor"<<endl; // destructor 
//     }
// };

// int main(){
//     B obj;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Alpha{
//     public:
//     int a;
//     Alpha(int x){
//         a = x; // constructor 
//     }
//     void getValue1(){
//         cout<<a<<endl;
//     }
// };

// class Beta {
//     public:
//     int b;
//     Beta(int y){ // constructor 
//         b = y; // constructor 
//     }
//     void getValue2(){
//         cout<<b<<endl;
//     }
// };

// int main(){

//     Alpha a1(10);
//     a1.getValue1();

//     Beta obj(30);
//     // obj.getValue1();
//     obj.getValue2();

//     return 0;

// }

// #include<iostream>
// using namespace std;
// // multilevel inheritance 
// class Alpha{
//     public:
//     int a;
//     Alpha(int x){
//         a = x; // constructor 
//     }
//     void getValue1(){
//         cout<<"A: "<<a<<endl;
//     }
// };

// class Beta {
//     public:
//     float b;
//     Beta(float y){ // constructor 
//         b = y; // constructor 
//     }
//     void getValue2(){
//         cout<<"B: "<<b<<endl;
//     }
// };

// class Gamma : public Alpha , public Beta{
//     public:
//     int m, n;
//     Gamma(int p, float q, int r, int s) : Alpha(p) , Beta(q){ // constructor
//         m = r;
//         n = s;
//     }
//     void display(){
//         getValue1(); // calling display func of class alpha
//         getValue2();

//         cout<<"M: "<<m<<endl;
//         cout<<"N: "<<n<<endl;
//     }
// };
// int main(){
//     Alpha o1(1);
//     o1.getValue1();

//     Beta o2(2.3);
//     o2.getValue2();

//     Gamma g1(10, 23.43, 3,4); // give the new updated value for a and b
//     g1.display();
//     // g1.getValue1();
//     // g1.getValue2();
    
//     return 0;
// }

/* static question */

// #include<iostream>
// #include<iomanip>
// using namespace std;

// class Accelaration{
//     public:
//     double a;
//     void getdata(){
//         cin >> a;
//     }
//     double operator*(double t){
//         double x;
//         x = a * t;
//         return x;
//     }
// };

// int main(){
//     Accelaration ob;
//     double u, t, f; // 10.3||5.0||2.8
//     cin >> u;
//     ob.getdata();
//     cin>>t;
//     f = u + ob*t;
//     cout<<fixed<<setprecision(1)<<f<<" m/s";

//     return 0;
// }

// /* Virtual destructor! */ //

// #include<iostream>
// #include<iomanip>
// #include<string>
// using namespace std;

// class ABC{
//     public:
//     int a,b;

//     ABC()// base class constructor 
//     { cout<<"constructing base \n"; }

//     virtual~ABC(){// base class destructor 
//         cout<< "Destructor called!"<<endl;
//     }
// };
// class AAA : public ABC{
//     public:

//     AAA() // derieved class constructor 
//     { cout<<"Derieved constructor called!"<<endl; }

//     ~AAA() // derived class destructor 
//     { cout<<"Derieved class destructor called!"<<endl; }
// };
// // main function 
// int main(){
    
//     // cout<<">>!!<<"<<endl;
//     ABC *p = new AAA;
//     delete p;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class one {
//     public:
//     int a,b;

//     virtual void getdata(){
//         cout<<"A: ";
//         cin>>a;

//         cout<<"B: ";
//         cin>>b;

//         // cout<<a<<endl;
//         // cout<<b<<endl;
//     }
// };
// class two : public one{
//     public:
//     int c;

//     void getdata() override {
//         one::getdata();
//         cout<<"C: ";
//         cin>>c;
//         // one::getdata();
//         cout<<"A is "<<a<<endl;
//         cout<<"B is "<<b<<endl;
//         cout<<"C is "<<c<<endl;
//     }
// };

// int main(){
//     one *Z = new two;
//     Z->getdata();

//     // delete Z;

//     return 0;
// }


#include<iostream>
using namespace std;

class base {
    public:
    void show(){
        cout<<"Base\n";
    }

};
class deriv1 : public base {
    public: 
    virtual void show(){
        cout<<"Derieve 1\n";
    }
};
class deriv2 : public base {
    public:
    virtual void show(){
        cout<<"Derirve 2\n";
    }
};

int main(){
    deriv1 d1;
    deriv2 d2;
    
    base *ptr;
    ptr = &d1;
    ptr->show();

    ptr = &d2;
    ptr->show();

    return 0;
}

