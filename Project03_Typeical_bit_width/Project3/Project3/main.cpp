//
//  main.cpp
//  Project3
//
//  Created by DW02 on 21/9/2561 BE.
//  Copyright © 2561 DW02. All rights reserved.
//

#include <iostream>

using namespace std;


int main() {
    
    
    
    cout << "Size of char : " << sizeof(char) << endl;              //  -127 to 127 or 0 to 255
    cout << "Size of int : " << sizeof(int) << endl;                //  -2147483648 to 2147483647
    cout << "Size of short int : " << sizeof(short int) << endl;    //  -32768 to 32767
    cout << "Size of long int : " << sizeof(long int) << endl;      //  -2,147,483,648 to 2,147,483,647
    cout << "Size of float : " << sizeof(float) << endl;            //  +/- 3.4e +/- 38 (~7 digits)
    cout << "Size of double : " << sizeof(double) << endl;          //  +/- 1.7e +/- 308 (~15 digits)
    
    
    
    int num = 2147483647;
    cout << "num = " << num << endl;
    
    num = num + 1;
    cout << "num + 1 = " << num << endl;
    
    
    
   cout << " ----- " << endl;
    //sample
    struct Person{
        //set values mango_count to use memory 4 bit
        unsigned int mango_count: 4;
    };
    
    
    struct Person joy, jo;
    joy.mango_count = 12;
    jo.mango_count = joy.mango_count + 8;
    
    cout << "Joy has " << joy.mango_count << " mangos" << endl;
    cout << "Jo has " << jo.mango_count << " mangos" << endl;
    
    return 0;
}
