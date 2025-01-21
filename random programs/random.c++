#include <iostream>
using namespace std;
class Factorial {
   private:
    int number;

   public:
    Factorial(int n) : number(n) {}
    int calculate() {
        if (number <= 1) return 1;
        int result = 1;
        for (int i = 2; i <= number; i++) {
            result *= i;
        }
        return result;
    }
};
int main() {
    int n;
    cout << "Enter Number : ";
    cin >> n;
    Factorial fact(n);
    cout << "Factorial: " << fact.calculate() << endl;
    return 0;
}