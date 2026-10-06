#include <cstdint>
#include <iostream>
using namespace std;

/*
 * *** STUDENTS SHOULD WRITE CODE FOR THIS FUNCTION ***
 */
uint16_t factorial(const uint16_t x) {
    uint16_t result = 1;
    for (uint16_t i = 2; i <= x; ++i) {
        result *= i;
    }
    return result;
}

/*
 * *** STUDENTS SHOULD WRITE CODE FOR THIS FUNCTION ***
 */
int main() {
    int n;
    int k;

    // get and validate user input
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;

    if (n <= 0 || k <= 0) {
        cout << "Error: n and k must be greater than 0." << endl;
        return -1;
    }

    // calculate C(n,k) = n! / (k! * (n-k)!)
    uint16_t n_fact = factorial(n);
    uint16_t k_fact = factorial(k);
    uint16_t n_k_fact = factorial(n - k);
    uint16_t c_n_k = n_fact / (k_fact * n_k_fact);

    // write out results
    cout << "result = " << c_n_k << endl;

    return 0;
}
