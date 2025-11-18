#include<iostream>
using namespace std;

// Base class
class Animal {
public:
    string name;
    int age;

    // Base class constructor
    Animal(string n, int a) : name(n), age(a) {}

    // Base class method
    void sleep() {
        cout << name << " is sleeping." << endl;
    }

    // Base class method
    void eat() {
        cout << name << " is eating." << endl;
    }
};

// Derived class from Animal
class Dog : public Animal {
public:
    string breed;

    // Derived class constructor
    Dog(string n, int a, string b) : Animal(n, a), breed(b) {}

    // Method specific to Dog
    void bark() {
        cout << name << " is barking." << endl;
    }
};

// Another derived class from Animal
class Cat : public Animal {
public:
    string furColor;

    // Derived class constructor
    Cat(string n, int a, string color) : Animal(n, a), furColor(color) {}

    // Method specific to Cat
    void meow() {
        cout << name << " is meowing." << endl;
    }
};

int main() {
    // Creating an object of Dog
    Dog d("Buddy", 3, "Labrador");
    d.eat();       // Inherited method
    d.sleep();     // Inherited method
    d.bark();      // Dog-specific method

    cout << endl;

    // Creating an object of Cat
    Cat c("Whiskers", 2, "White");
    c.eat();       // Inherited method
    c.sleep();     // Inherited method
    c.meow();      // Cat-specific method

    return 0;
}

#include<iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    // Constructor to initialize complex number
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Display method to print the complex number
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    // Overloading the + operator for addition
    Complex operator+(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    // Overloading the - operator for subtraction
    Complex operator-(const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    // Overloading the * operator for multiplication
    Complex operator*(const Complex& c) const {
        int realPart = (real * c.real);// - (imag * c.imag);
        int imagPart = (real * c.imag);// + (imag * c.real);
        return Complex(realPart, imagPart);
    }
};

int main() {
    // Creating two complex numbers....
    Complex c1(3, 4);
    Complex c2(1, 2);

    cout << "Complex Number 1: ";
    c1.display();

    cout << "Complex Number 2: ";
    c2.display();

    // Adding two complex numbers
    Complex sum = c1 + c2;
    cout << "Sum: ";
    sum.display();

    // Subtracting two complex numbers
    Complex diff = c1 - c2;
    cout << "Difference: ";
    diff.display();

    // Multiplying two complex numbers
    Complex product = c1 * c2;
    cout << "Product: ";
    product.display();

    return 0;
}

/* Multi-level Inheritance */
#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "Base class function called!" << endl;
    }
};

class Intermediate : public Base {
public:
    void showIntermediate() {
        cout << "Intermediate class function called!" << endl;
    }
};

class Derived : public Intermediate {
public:
    void showDerived() {
        cout << "Derived class function called!" << endl;
    }
};

int main() {
    Derived obj;
    obj.showBase();
    obj.showIntermediate();
    obj.showDerived();
    return 0;
}

/* Hierarchial Inheritance */
#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "Base class function called!" << endl;
    }
};

class Derived1 : public Base {
public:
    void showDerived1() {
        cout << "Derived1 class function called!" << endl;
    }
};

class Derived2 : public Base {
public:
    void showDerived2() {
        cout << "Derived2 class function called!" << endl;
    }
};

int main() {
    Derived1 obj1;
    Derived2 obj2;

    obj1.showBase();
    obj1.showDerived1();

    obj2.showBase();
    obj2.showDerived2();

    return 0;
}

/*Hybrid Inheritance */
#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "Base class function called!" << endl;
    }
};

class Derived1 : public Base {
public:
    void showDerived1() {
        cout << "Derived1 class function called!" << endl;
    }
};

class Derived2 : public Base {
public:
    void showDerived2() {
        cout << "Derived2 class function called!" << endl;
    }
};

class FinalDerived : public Derived1, public Derived2 {
public:
    void showFinal() {
        cout << "FinalDerived class function called!" << endl;
    }
};

int main() {
    FinalDerived obj;

    // Resolving ambiguity for showBase()
    obj.Derived1::showBase();// to avoid ambiguity
    obj.Derived2::showBase();//  comflict... 

    obj.showDerived1();
    obj.showDerived2();
    obj.showFinal();

    return 0;
}
