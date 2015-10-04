//
//  main.cpp
//  Prime Numbers
//
//  Created by Faiz Abidi on 03/10/15.
//  Copyright © 2015 Faiz Abidi. All rights reserved.
//

#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
            break;
        }
    }
    return true;
}
int main() {
    int n;
    cout << "Enter number of primes needed: ";
    cin >> n;
    for (int i = 0; n > 0; i++) {
        if (isPrime(i)) {
            cout<< i <<"\n";
            n--;
        }
    }
    return 0;
}