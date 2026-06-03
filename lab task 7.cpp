#include<iostream>
using namespace std;

class Quadrangle {
protected:
    int A, B, C, D;

public:
    Quadrangle(int a, int b, int c, int d) {
        A = a;
        B = b;
        C = c;
        D = d;
    }

    virtual float calcArea() = 0;

    void display() {
        cout << "A: " << A << endl;
        cout << "B: " << B << endl;
        cout << "C: " << C << endl;
        cout << "D: " << D << endl;
    }
};

class Parallelogram : public Quadrangle {
protected:
    int Height;

public:
    Parallelogram(int a, int b, int h) : Quadrangle(a, b, a, b) {
        Height = h;
    }

    float calcArea() {
        return A * Height;
    }

    void display() {
        Quadrangle::display();
        cout << "Height: " << Height << endl;
        cout << "Area: " << calcArea() << endl;
    }
};

class Rectangle : public Parallelogram {
public:
    Rectangle(int a, int b) : Parallelogram(a, b, a) {
    }

    float calcArea() {
        return A * Height;
    }

    void display() {
        Quadrangle::display();
        cout << "Height: " << Height << endl;
        cout << "Area: " << calcArea() << endl;
    }
};

int main() {
    int a, b, h;
    Quadrangle* ptr;

    cout << "Sample Output:" << endl;
    Parallelogram sp(7, 4, 3);
    ptr = &sp;
    cout << "Parallelogram:" << endl;
    sp.display();
    cout << "Area via base pointer: " << ptr->calcArea() << endl;
    Rectangle sr(8, 5);
    ptr = &sr;
    cout << "\nRectangle:" << endl;
    sr.display();
    cout << "Area via base pointer: " << ptr->calcArea() << endl;

    cout << "\nEnter A, B and Height for Parallelogram:" << endl;
    cout << "A: "; cin >> a;
    cout << "B: "; cin >> b;
    cout << "Height: "; cin >> h;
    Parallelogram p(a, b, h);
    ptr = &p;
    cout << "\nParallelogram:" << endl;
    p.display();
    cout << "Area via base pointer: " << ptr->calcArea() << endl;

    cout << "\nEnter A and B for Rectangle:" << endl;
    cout << "A: "; cin >> a;
    cout << "B: "; cin >> b;
    Rectangle r(a, b);
    ptr = &r;
    cout << "\nRectangle:" << endl;
    r.display();
    cout << "Area via base pointer: " << ptr->calcArea() << endl;

    return 0;
}
