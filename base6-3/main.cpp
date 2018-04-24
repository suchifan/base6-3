//
//  main.cpp
//  base6-3
//
//  Created by suchao on 4/24/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;
bool isPrime(int x){
    if(x == 2)
        return true;
    if(x == 1)
        return false;
    for(int i=2; i<x; i++){
        if(x % i == 0)
            return false;
    }
    
    return true;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "input n:\n";
    int n;
    while(cin >> n){
        if(n % 2 == 0 && n > 2)
            break;
        cout << "reinput:" << endl;
    }
    
    for(int i=2; i<=n/2; i++){
        if(isPrime(i) && isPrime(n-i))
            cout << n << " = " << i << " + " << n-i << endl;
        
    }
    
    
    return 0;
}
