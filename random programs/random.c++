#include <iostream>
using namespace std;
class vehicle {
   public:
    vehicle() {
        cout << "four wheeler";
    }
};
class car {
   public:
    car() {
        cout << "four wheeler vehicle";
    }
};
class car1 : public vehicle, public car {};
int main() {
    car1 obj;
    return 0;
}
