#include <iostream>
using namespace std;
int x = 10;
class A {
   public:
    static int value;
    void display();
};
void A::display() {
    cout << "display() is a member of class A" << endl;
}
namespace n1 {
int x = 30;
}
int A::value = 40;
int main() {
    // 1) Accessing the global variable x
    int x = 20;
    cout << "global x is : " << ::x << endl;
    cout << "local x is : " << x << endl;

    // 2) To define a function outside a class
    A a;
    a.display();

    // 3) Accessing namespace value
    cout << "The namespace value is of x : " << n1::x << endl;

    // 4) Accessing static member of class
    cout << "The static member of class A is : " << A::value << endl;
    return 0;
}
