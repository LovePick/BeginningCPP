//
//  main.cpp
//  Project06
//
//  Created by DW02 on 21/9/2561 BE.
//  Copyright © 2561 DW02. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    
    //1
    int x = 10;
    int y = 3;
    
    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x / y = " << x / y << endl;
    cout << "x % y = " << x % y << endl;
    
    
    cout << " ---- "<< endl;
    //2
    
    int c = 2;
    
    cout << "c = " << c << endl;
    c += 1;
    cout << "c += 1 = " << c << endl;
  
    c -= 1;
    cout << "c -= 1 = " << c << endl;
    
    c *= 2;
    cout << "c *= 2 = " << c << endl;
    
    c /= 2;
    cout << "c /= 2 = " << c << endl;
    
    c %= 3;
    cout << "c %= 3 = " << c << endl;
    
    
    cout << " ---- "<< endl;
    
    
    //3
    int k = 0;
    cout << "k++ = " << k++ << endl;
    cout << "++k = " << ++k << endl;
    
    cout << "k = " << k << endl;
    
    cout << "k-- = " << k-- << endl;
    cout << "--k = " << --k << endl;
    
    
    cout << " ---- "<< endl;
    
    //4
    int a = 10;
    int b = 15;
    
    bool logic = a == b;
    if(logic){
        cout << "a equal b" << endl;
    }
    
    
    if(a == b){
        cout << "a equal b" << endl;
    }
    
    if(a != b){
        cout << "a not equal b" << endl;
    }
    
    if(a < b){
        cout << "a less than b" << endl;
    }
    
    if(a > b){
        cout << "a greater than b" << endl;
    }
    
    if(a <= b){
        cout << "a less than or equal to b" << endl;
    }
    
    if(a >= b){
        cout << "a greater than or equal to b" << endl;
    }
    
    cout << " ---- "<< endl;
    //5
    bool value1 = true;
    bool value2 = !value1;
    
    if(value2){
        cout << "value2 = true" << endl;
    }else{
        cout << "value2 = false" << endl;
    }
    
    
    if(value1 && value2){
        cout << "value1 and value2 = true" << endl;
    }
    
    if(value1 || value2){
        cout << "value1 or value2 = true" << endl;
    }
    
    
    cout << " ---- "<< endl;
    //6
    int money = 50000;
   
    string myPhone;
    
    if(money >= 40000){
        myPhone = "iPhone";
    }else{
        myPhone = "android";
    }
    
    cout << "my phone is " << myPhone << endl;
    
    myPhone = money >= 4000 ? "iPhone" : "android";
    
    cout << "my phone is " << myPhone << endl;
    
    
    return 0;
}
