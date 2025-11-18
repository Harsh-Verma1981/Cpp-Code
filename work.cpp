#include<iostream>
#include<iomanip>
using namespace std;

class shape{
    public:
    double a;

    virtual void area(){
        a = 0;
    }
};

class Circle : public shape{
    public:
    double r;
    Circle(double x){
        r = x;
    }
    void area(){
        a = 3.14 * r * r;
        cout<<fixed<<setprecision(2)<<"Area of circle: "<<a<<endl;
    }
};

class Rectangle : public shape {
    public:
    double q, s;

    Rectangle(double i, double j){
        q = i;
        s = j;
    }

    void area(){
        a = q * s;
        cout<<fixed<<setprecision(2)<<"Area of rect: "<<a<<endl;
    }
};
class Triangle : public shape{
    public:
    double q, s;

    Triangle(double x, double y){
        q = x;
        s = y;
    }

    void area(){
        a = 0.5 * q * s;
        cout<<fixed<<setprecision(2)<<"Area of Triangle: "<<a<<endl;
    }
};

int main(){

    shape *ptr;
    ptr = new Circle(2.5);
    ptr->area();

    ptr = new Triangle(3.6, 4.1);
    ptr->area();

    ptr = new Rectangle(3.1, 4.6);
    ptr->area();

    return 0;
}

/* Pure Virtaul opertaor */

// #include<iostream>
// #include<string>
// using namespace std;

// class Shape{
//     public:

//     virtual float calc_Area() = 0; // pure virtual func && it don't contain body or condition statement to perform anything 
    
// };

// class Square : public Shape{
//     public: 

//     float side;

//     Square(float l){
//         side = l;
//     }

//     float calc_Area(){
//         return side * side;
//     }
// };

// class Circle : public Shape{
//     public: 
//     float rad;

//     Circle(float r){
//         rad = r;
//     }

//     float calc_Area(){
//         return 3.14 * rad * rad;
//     }
// };

// int main(){

//     Shape * shape;

//     double c1,c2;
//     cin>>c1>>c2;

//     Square s(c1);
//     Circle c(c2);

//     shape = &s;
//     int a1 = shape ->calc_Area();

//     shape = & c;
//     int a3 = shape ->calc_Area();

//     cout<<"Area of Square: "<<a1<<endl;
//     cout<<"Area od Circle: "<<a3<<endl;

//     return 0;
// }