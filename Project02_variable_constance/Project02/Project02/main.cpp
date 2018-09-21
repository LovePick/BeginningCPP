//
//  main.cpp
//  Project02
//
//  Created by DW02 on 21/9/2561 BE.
//  Copyright © 2561 DW02. All rights reserved.
//

#include <iostream>


#define PI 3.14159

using namespace std;

int main() {
    
    
    // 1
    int a = 2;
    int b = 2;
    int sum = a + b;
    cout << "a + b = " << sum << endl;
    
    cout << " ----- " << endl;
    
    //2
    int age = 18;
    double weight = 70.5;
    char c = 'C';
    bool pass = true;
    
    
    cout << "age = " << age << endl;
    cout << "weight = " << weight << endl;
    cout << "c = " << c << endl;
    cout << "pass = " << pass << endl;
    
    cout << " ----- " << endl;
    
    
    
    
    //3
    int my_int = 20;
    cout << "my_int = " << my_int << endl;
    
    my_int = 15;
    cout << "my_int = " << my_int << endl;
    
    my_int = 3.14159;
    cout << "my_int = " << my_int << endl;
    
    cout << " ----- " << endl;
    
    
    //4
    double my_double = 30;
    cout << "my_double = " << my_double << endl;
    my_double = 30.75;
    cout << "my_double = " << my_double << endl;
    
    my_int = 10;
    my_double = my_int;
    cout << "my_double = " << my_double << endl;
    
    
    
    //5
    char my_char = 'A';
    cout << "my_char = " << my_char << endl;
    
    //error
    //my_char = "A";
    //cout << "my_char = " << my_char << endl;
    
    
    my_char = 'ABCDE';
    cout << "my_char = " << my_char << endl;
    
    my_char = 'A';
    cout << "my_char = " << int(my_char) << endl;
    
    my_char = 'B';
    cout << "my_char = " << int(my_char) << endl;
    
    
    
    
    //6
    const int k = 20;

    //k = 30;
    cout << "k = " << k << endl;
    
    const float pi = 3.14;
    //pi = 3
    cout << "pi = " << pi << endl;
  
    cout << "PI = " << PI << endl;
    
    return 0;
}
