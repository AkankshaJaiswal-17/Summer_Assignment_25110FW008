#include <bits/stdc++.h>

int factorial(int n) {
    // Base case
    if (n == 0 || n == 1) {
        return 1;
    }
    
    // Recursive case
    return n * factorial(n - 1);
}

int main() {
    using namespace std;
    
    int num;
    
    cout<< "Enter any number:" ;
    cin >> num ;
    
    cout << "Factorial of " << num << " is " << factorial(num);

    return 0;
}
