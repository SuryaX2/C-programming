#include <iostream>
using namespace std;
class Prime {
   private:
    int n;

   public:
    Prime(int n) : n(n) {}
    void isPrime() {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                cout << "Not Prime" << endl;
                return;
            }
        }
        cout << "Prime" << endl;
    }
};
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Prime p(n);
    p.isPrime();
    return 0;
}