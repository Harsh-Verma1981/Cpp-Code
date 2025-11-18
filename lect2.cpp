/* Virtual function...*/
// // Run time polymorphism...

#include<iostream>
using namespace std;

class baseclass{
public:
    int var_base = 1;

    virtual void display(){
        cout<<"displaying base class var_base "<<var_base<<endl;
    }
};

class derivedclass : public baseclass {
public: 
    int var_derived = 2;

    void display(){
        cout<<"displaying  base class var_base "<<var_base<<endl;
        cout<<"displaying derived class var_derived "<<var_derived<<endl;
    }
};

int main(){

    baseclass *base_class_ptr;
    // baseclass object_base;

    derivedclass object_derived;
    base_class_ptr = &object_derived;

    base_class_ptr->display();
    bool isTrue = true;
    return 0;
}

/* Abrstract base class */
// contain atleast one pure func...

// #include<iostream>
// #include<iomanip>

// using namespace std;

// class Shape{
// public: 

//     virtual void Area() = 0;
//     virtual void Parameters() = 0;

// };

// class Rectangle : public Shape {
//     public: 
//     // typing code..
//     int lenght;
//     int breadth;

//     Rectangle(int l, int b){
//         lenght = l;
//         breadth = b;
//     }

//     void Area(){
//         cout<<"The Area is "<< lenght * breadth<<endl;
//     }

//     void Parameters(){
//         cout<<"Lenght: "<<lenght<<endl;
//         cout<<"Breadth: "<<breadth<<endl;
//     }
// };

// int main(){

//     int a, b;
//     cout<<"lenght and breadth are: "<<endl;
//     cin >> a >> b;

//     Shape *shape_pointer = new Rectangle(a, b);
//     shape_pointer->Area();
//     shape_pointer->Parameters();

//     return 0;
// }

// You are using GCC
// #include<iostream>
// #include<cmath>

// using namespace std;

// class AbstractBase{
// public: 
//     // int a, b;
    
//     // AbstractBase(int x, int y){
//     //     a = x;
//     //     b = y;
//     // }
    
//     virtual void addition() = 0;
//     virtual void subtraction() = 0;
//     virtual void multiplication() = 0;
//     virtual void division() = 0;
    
// };

// class ABSderive : public AbstractBase {
//     public:
//     int var_1, var_2;
    
//     ABSderive(int num1, int num2){
//         var_1 = num1;
//         var_2 = num2;
//     }
    
//     void addition(){
//         cout<<var_1+var_2<<" ";
//     }
    
//     void subtraction(){
//         cout<<var_1-var_2<<" ";
//     }
    
//     void multiplication(){
//         cout<<var_1*var_2<<" ";
//     }
    
//     void division(){
//         if(var_1 != 0 && var_2 != 0){
//             cout<<var_1/var_2<<" ";
//         }
//         // cout<<endl;
//         else if(var_1 | var_2 == 0){
//             cout<<"Division by 0 is not allowed."<<endl;
//             // break;
//         }
//     }
// };

// int main(){
    
//     int n1, n2;
//     cin >> n1 >> n2;
    
//     AbstractBase *obj_pointer = new ABSderive(n1, n2);
    
//     obj_pointer->addition();
//     obj_pointer->subtraction();
//     obj_pointer->multiplication();
    
//     obj_pointer->division();
    
//     return 0;
// }

