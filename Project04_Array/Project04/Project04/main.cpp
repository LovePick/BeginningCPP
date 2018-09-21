//
//  main.cpp
//  Project04
//
//  Created by DW02 on 21/9/2561 BE.
//  Copyright © 2561 DW02. All rights reserved.
//

#include <iostream>
using namespace std;



int main() {
    
    //1
    double t1 = 27.5;
    double t2 = 30;
    double t3 = 28.5;
    double t4 = 31.5;
    double t5 = 26.7;
    double t6 = 28.8;
    double t7 = 29.5;
    
    double avg = (t1 + t2 + t3 + t4 + t5 + t6 + t7) / 7;
    
    
    cout << "avg = " << avg << endl;
 
    
    
    
    //2
    double arTemperature[7] = { 27.5, 30, 28.5, 31.5, 26.7, 28.8, 29.5 };
    
    double sum = 0;
    for(int i = 0; i < 7; i ++){
        sum = sum + arTemperature[i];
    }
    
    avg = sum / 7;
    cout << "avg = " << avg << endl;
    
    
    
    
    //3
    int arN1[] = { 1, 2, 3, 4, 5, 6, 7};
    for(int i = 0; i < 7; i ++){
        cout << arN1[i] << endl;
    }

    
    int arN2[5];
    arN2[0] = 1;
    arN2[1] = 2;
    arN2[2] = 3;
    arN2[3] = 4;
    arN2[4] = 5;
  
    
    
    //4
    char c[] = { 'A', 'B', 'C', 'D' };
    cout << "c[2] = " << c[2] << endl;
    
    
    
    string flowers[] = { "rose", "tulip", "lily"};
    cout << "flowers[1] = " << flowers[1] << endl;
    
    
    
    
    //8
    int a[] = {1, 2, 3, 4, 5};
    
    cout << "sizeof int = " << sizeof(int) << endl;
    cout << "sizeof a[] = " << sizeof(a) << endl;
    
    
    int array_lebgth = sizeof(a) / sizeof(int);
    
    cout << "array_lebgth = " << array_lebgth << endl;
    
    
    
    return 0;
}
