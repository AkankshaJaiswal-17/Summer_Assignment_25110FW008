#include <bits/stdc++.h>

int fibonacci(int n) {
    // Base Case
    if (n <= 1) {
        return 0;
    }
    
    else if (n == 2) {
        return 1;
    }
    
    // Recursive Case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    
    using namespace std;
    int term;
    
 cout << "Enter any term:";
 cin >> term;
    
 cout << " Fibonacci " << term << " term is : " << fibonacci(term) ; 
    
    return 0;
} 
 