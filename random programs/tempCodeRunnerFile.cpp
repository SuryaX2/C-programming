#include <iostream>
using namespace std;
class CopyConstructor {
private:
    int *data;
public:
    CopyConstructor(int val) {
        data = new int;
        *data = val;
    }
    CopyConstructor(const CopyConstructor& obj) {
        data = new int;
        *data = *obj.data;
    }
    void display() {
        cout << "Value: " << *data << endl;
    }
    ~CopyConstructor() {
        delete data;
    }
};
int main() {
    CopyConstructor obj1(10);
    CopyConstructor obj2 = obj1;
    obj1.display();
    obj2.display();
    return 0;
}