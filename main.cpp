#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int FibonacciRecursion(int n){
    if(n <= 1){
        return n;
    }
    else{
        return FibonacciRecursion(n - 1) + FibonacciRecursion(n - 2);
    }
}

int FibonacciIterative(int n){
    if(n <= 1){
        return n;
    }
    else{
        int pN;
        int ppN;
        int cN = 1;
        for(int i = 1; i < n; i++){
            ppN = pN;
            pN = cN;
            cN = ppN + pN;
        }
        return cN;
    }
}

int main() {
    cout << FibonacciRecursion(11) << endl;
    cout << FibonacciIterative(11) << endl;
}