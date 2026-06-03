#include <bits/stdc++.h>

int reverse(int n, int count) {
    // Base case
    if (n < 10) {
        return n;
    }
    
    // Recursive case
    return (n % 10) * pow(10, count - 1) + reverse(n / 10, count - 1);
}

int main() {
    using namespace std;
    int num, temp;
    int count = 0; 
    
    cout << "Enter any number: ";
    cin >> num;
    
    temp = num;
    
    while (temp > 0) {
        count = count + 1;
        temp = temp / 10;
    }
    
    cout << "Reverse of " << num << " is: " << reverse(num, count);
    
    return 0;
}