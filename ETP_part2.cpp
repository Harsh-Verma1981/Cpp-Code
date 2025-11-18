/* Unary Operator Overloading */

/* + operator */
// #include<iostream>
// #include<iomanip>
// using namespace std;

// class Complex{
//     public:
//     int real, img;

//     Complex(int r=0,int i=0){
//         real = r;
//         img = i;
//     }

//     // operator function to perform addition of two instances..
//     Complex operator +(Complex c){
//         Complex temp;
//         temp.real = real + c.real;
//         temp.img = img + c.img;
//         return temp;
//     }

//     void print(){
//         cout<<real<<"i + "<<img<<"j"<<endl;
//     }

// };

// int main(){
//     Complex c1(12, 10);
//     Complex c2(13, 20);

//     Complex c3 = c1 + c2;
//     c3.print();

//     return 0;
// }


/* ++ operator */
#include <iostream>
#include <cctype> // For isalpha() and toupper()
#include <string>
using namespace std;

class CustomString {
private:
    string str;

public:
    // Constructor
    CustomString(string s) : str(s) {}

    // Overload prefix increment operator (++obj)
    CustomString& operator++() {
        // Check if the first character is alphabetic
        if (!str.empty() && isalpha(str[0])) {
            str[0] = toupper(str[0]); // Capitalize the first letter
        }
        return *this; // Return current object
    }

    // Function to display the string
    void display() const {
        cout << str << endl;
    }
};

int main() {
    string input;
    getline(cin, input); // Read the input string

    CustomString customStr(input); // Create an object of CustomString
    cout << "Original string: ";
    customStr.display();

    // customStr++; // Apply the overloaded ++ operator

    cout << "Modified string: ";
    customStr.display();

    return 0;
}

/* ==  operator */
#include <iostream>
using namespace std;

class Point {
private:
    int x, y; // Coordinates of the point

public:
    // Constructor
    Point(int x_val, int y_val) : x(x_val), y(y_val) {}

    // Overload the == operator
    bool operator==(const Point& other) const {
        return (x == other.x && y == other.y);
    }

    // Display function for testing
    void display() const {
        cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    Point p1(2, 3);
    Point p2(2, 3);
    Point p3(4, 5);

    // Test overloaded == operator
    if (p1 == p2) {
        cout << "p1 and p2 are equal." << endl;
    } else {
        cout << "p1 and p2 are not equal." << endl;
    }

    if (p1 == p3) {
        cout << "p1 and p3 are equal." << endl;
    } else {
        cout << "p1 and p3 are not equal." << endl;
    }

    return 0;
}

/* * operator overloading.. */
#include<iostream>
#include<string>
using namespace std;

class CustomString {
public:
    string str;

    // Constructor to initialize the string
    CustomString(string s) : str(s) {}

    // Overloading the + operator for concatenation
    CustomString operator+(const CustomString& other) const {
        return CustomString(str + other.str);
    }

    // Overloading the * operator for repetition
    CustomString operator*(int n) const {
        string repeated = "";
        for (int i = 0; i < n; i++) {
            repeated += str;
        }
        return CustomString(repeated);
    }

    // Function to display the string
    void display() const {
        cout << str << endl;
    }
};

int main() {
    string str1, str2;
    int n;

    // Reading input
    getline(cin, str1);  // First string
    getline(cin, str2);  // Second string
    cin >> n;             // Number of repetitions

    // Creating CustomString objects
    CustomString s1(str1);
    CustomString s2(str2);

    // Concatenating the two strings and displaying the result
    CustomString concatenated = s1 + s2;
    concatenated.display();

    // Repeating the first string 'n' times and displaying the result
    CustomString repeated1 = s1 * n;
    repeated1.display();

    // Repeating the second string 'n' times and displaying the result
    CustomString repeated2 = s2 * n;
    repeated2.display();

    return 0;
}
