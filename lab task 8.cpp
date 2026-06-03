#include<bits/stdc++.h>
using namespace std;
class Vector {
public:
int a, b, c;
Vector(int a=0, int b=0, int c=0) {
this->a = a;
this->b = b;
this->c = c;
}
void out() {
cout << a << "i";
if(b < 0) cout << " - " << abs(b) << "j";
else cout << " + " << b << "j";
if(c < 0) cout << " - " << abs(c) << "k";
else cout << " + " << c << "k";
cout << endl;
}
Vector operator+(Vector v2) {
return Vector(a + v2.a, b + v2.b, c + v2.c);
}
Vector operator-(Vector v2) {
return Vector(a - v2.a, b - v2.b, c - v2.c);
}
int operator*(Vector v2) {
return (a * v2.a) + (b * v2.b) + (c * v2.c);
}
};
int main() {
int a, b, c;

cout << "Sample Output:" << endl;
Vector sv1(5, -3, 7);
Vector sv2(2, 4, -1);
cout << "Vector 1: "; sv1.out();
cout << "Vector 2: "; sv2.out();
Vector sAdd = sv1 + sv2;
cout << "Addition: "; sAdd.out();
Vector sSub = sv1 - sv2;
cout << "Subtraction: "; sSub.out();
cout << "Dot Product: " << (sv1 * sv2) << endl;
cout << "\nEnter Vector 1:" << endl;
cout << "a: "; cin >> a;
cout << "b: "; cin >> b;
cout << "c: "; cin >> c;
Vector v1(a, b, c);
cout << "Enter Vector 2:" << endl;
cout << "a: "; cin >> a;
cout << "b: "; cin >> b;
cout << "c: "; cin >> c;
Vector v2(a, b, c);
cout << "\nVector 1: "; v1.out();
cout << "Vector 2: "; v2.out();
Vector vAdd = v1 + v2;
cout << "Addition: "; vAdd.out();
Vector vSub = v1 - v2;
cout << "Subtraction: "; vSub.out();
cout << "Dot Product: " << (v1 * v2) << endl;
return 0;
}
