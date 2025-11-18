/* Using of template keyword... */
// // template is used to give all the the variables same datatype....

// #include<iostream>
// #include<iomanip>
// #include<vector>
// #include<cstring>

// using namespace std;
// template <typename T1, typename T2>

// void func(T1 a, T2 b){
    
//     cout<<"The value of A: "<<a<<endl;
//     cout<<"The value of B: "<<b<<endl;

// }

// int main(){

//     func<int, char>(10, 'a');
//     func<char, string>('X', "C++ code!");
//     func<double, double>(11.23, 22.25);

// }

// #include <iostream>
// #include <string>
// using namespace std;

// // Function template to concatenate two strings
// template <typename T>
// T concatenate(const T& str1, const T& str2) {
//     return str1 + str2;
// }

// int main() {
//     string s1 = "Hello, ";
//     string s2 = "World!";
    
//     // Using the template function for strings
//     cout << "Concatenated string: " << concatenate(s1, s2) << endl;

//     // Using the template function for C-style strings
//     const char* c1 = "Template ";
//     const char* c2 = "Example";
//     cout << "Concatenated C-style strings: " << concatenate(string(c1), string(c2)) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// template <typename T>
// class Box {
// private:
//     T value;
// public:
//     Box(T v) : value(v) {}
//     void display() {
//         cout << "Value: " << value << endl;
//     }
// };

// int main() {
//     Box<int> intBox(10);       // T is int
//     Box<double> doubleBox(5.5); // T is double
    
//     intBox.display();
//     doubleBox.display();
    
//     return 0;
// }
