//
//  main.cpp
//  Hello World
//
//  Created by Faiz Abidi on 02/10/15.
//  Copyright © 2015 Faiz Abidi. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    // insert code here...
    int n, num = 0;
    cout << "Enter value of N: ";
    cin>>n;
//print Hello World using a for loop
    /*for (; num<n; a++) {
        cout << "Hello World!\n";
    }*/
//print Hello World using a while loop
    /*while (num < n) {
        cout<<"Hello World!\n";
        num+= 1;
    }*/
//print Hello World using a do-while loop
    /*do {
        cout << "Hello World!\n";
        num+= 1;
    }
    while (num < n);*/
//print Hello World using char *
    const char* str = "Hello World!\n";
    cout << str;
    
    return 0;
}
