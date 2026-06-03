#include&lt;iostream&gt;
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
void displayQuadrangle() {
cout &lt;&lt; &quot;A: &quot; &lt;&lt; A &lt;&lt; endl;
cout &lt;&lt; &quot;B: &quot; &lt;&lt; B &lt;&lt; endl;
cout &lt;&lt; &quot;C: &quot; &lt;&lt; C &lt;&lt; endl;
cout &lt;&lt; &quot;D: &quot; &lt;&lt; D &lt;&lt; endl;
}
};
class Parallelogram : public Quadrangle {
protected:
int Height;
public:
Parallelogram(int a, int b, int h) : Quadrangle(a, b, a, b) {
Height = h;
}
void displayParallelogram() {
cout &lt;&lt; &quot;A: &quot; &lt;&lt; A &lt;&lt; endl;
cout &lt;&lt; &quot;B: &quot; &lt;&lt; B &lt;&lt; endl;
cout &lt;&lt; &quot;C: &quot; &lt;&lt; C &lt;&lt; endl;
cout &lt;&lt; &quot;D: &quot; &lt;&lt; D &lt;&lt; endl;
cout &lt;&lt; &quot;Height: &quot; &lt;&lt; Height &lt;&lt; endl;
}
};
class Rectangle : public Parallelogram {
public:
Rectangle(int a, int b) : Parallelogram(a, b, b) {
}
void displayRectangle() {
cout &lt;&lt; &quot;A: &quot; &lt;&lt; A &lt;&lt; endl;
cout &lt;&lt; &quot;B: &quot; &lt;&lt; B &lt;&lt; endl;
cout &lt;&lt; &quot;C: &quot; &lt;&lt; C &lt;&lt; endl;
cout &lt;&lt; &quot;D: &quot; &lt;&lt; D &lt;&lt; endl;
cout &lt;&lt; &quot;Height: &quot; &lt;&lt; Height &lt;&lt; endl;
}
};

int main() {
int a, b, c, d, h;
cout &lt;&lt; &quot;Sample Output:&quot; &lt;&lt; endl;
Quadrangle sq(5, 6, 5, 6);
sq.displayQuadrangle();
cout &lt;&lt; &quot;\nEnter sides for Quadrangle:&quot; &lt;&lt; endl;
cout &lt;&lt; &quot;A: &quot;; cin &gt;&gt; a;
cout &lt;&lt; &quot;B: &quot;; cin &gt;&gt; b;
cout &lt;&lt; &quot;C: &quot;; cin &gt;&gt; c;
cout &lt;&lt; &quot;D: &quot;; cin &gt;&gt; d;
Quadrangle q(a, b, c, d);
q.displayQuadrangle();
cout &lt;&lt; &quot;\nEnter Height for Parallelogram:&quot; &lt;&lt; endl;
cout &lt;&lt; &quot;Height: &quot;; cin &gt;&gt; h;
Parallelogram p(a, b, h);
p.displayParallelogram();
cout &lt;&lt; &quot;\nRectangle:&quot; &lt;&lt; endl;
Rectangle r(a, b);
r.displayRectangle();
return 0;
}
