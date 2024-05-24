#include <iostream>
#include <vector>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

int calculateFactorial(int n) {
    if (n <= 1) return 1;
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result = multiply(result, i);
    }
    return result;
}
int main() {
    int number;
    vector<int> arrayVector = {1, 2, 3, 4, 5};

    cout << "Digite um número: " << endl;
    cin >> number;

    int factorial = calculateFactorial(number);

    cout << "O fatorial de " << number << " é " << factorial << endl;

    return 0;
}