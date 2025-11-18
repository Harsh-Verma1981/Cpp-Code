/* NeoColab Questions practice for ETP */
// // constructor and destructor 

// #include<iostream>
// #include<iomanip>
// using namespace std;

// class Complex{
//     public:
//     double real, img;
//     double value, number;

//     Complex(double r, double i){
//         real = r;
//         img = i;
//     }

//     Complex sum(const Complex& obj){
//         return Complex(real + obj.real, img  + obj.img);
//     }

//     void display(){
//         cout<<"Sum: "<<fixed<<setprecision(1)<<real<<" + "<<img<<" i"<<endl;
//     }
// };

// int main(){
//     Complex c1(3.0, 2.4);
//     Complex c2(1.0, 1.6);

//     Complex c3 = c1.sum(c2);
//     c3.display();
    
//     return 0;
// }

// /* Copy Constructor */
#include<iostream>
#include<iomanip>

using namespace std;

class Number{
    int a;

public:
    Number(){
        a = 0;// default value..
    }

    Number(int num){ // parameterized constructor...
        a = num;
    }

    // copy constructor declaration..
    Number(Number &obj){
        cout<<"Copy Constructor called !"<<endl;
        a = obj.a;
    }

    void display(){
        cout<<"Number: "<<a <<endl;
    }

};

int main(){
    Number n(10);
    Number n2 = n;// Copy constructor 
    Number n3 = n2;//  called and passed as instances

    n.display();
    n2.display();
    n3.display();

    return 0;
}

// /* File Handling in C++ */
// #include<iostream>
// #include<fstream>

// using namespace std;
// /*
// The useful classes in order to work with files..
// # fstreambase 
// ## ifstream --> derive form  fstreambase
// ### ofstream --> derive form  fstreambase
// */

// int main(){

//     string st = "I love God";
//     // opening files using constructor and writing it...
//     ofstream out("learn.txt");// to write the data in the file .. 
//     out<<st;

//     string st2;
//     // opening files suing constructor and reading it...
//     ifstream in("sample.txt");// to read from file 
//     getline(in, st2);
//     getline(in, st2);

//     cout<<st2;

//     return 0;
// }

// #include<iostream>
// #include<fstream>
// #include<string>

// using namespace std;

// int main(){

//     // ofstream out("learn.txt");// to open and write the file...
//     // string data;
//     // getline(cin , data);

//     // out<<"Hii there, " + data;
//     // out.close();// to close the file 

//     ifstream in("learn.txt");
//     string content;
//     getline(in ,content);
//     // getline(in ,content);

//     cout<<content;
//     in.close();

//     return 0;
// }

// #include<iostream>
// #include<fstream>
// #include<string>

// using namespace std;

// int main(){

    // ofstream out("learn.txt");// to open and write the file...
    // string data;
    // getline(cin , data);

    // out<<"Hii there, " + data;
    // out.close();// to close the file 

    /* 
    using of eof() in file 
    It is use to call as end of file , it will terminate the entire file data
    */

//     ifstream in;
//     in.open("learn.txt");// open keyword to open just a file 
//     string content;

//     while(in.eof() == 0){
//         getline(in, content);
//         cout<<content;
//     }

//     in.close();// closing the file..
    
//     return 0;
// }

#include <iostream>

int main() {
    try {
        throw 42;
    }
    catch (int num) {
        std::cout << "Caught exception with value: " << num << std::endl;
    }
    return 0;
}