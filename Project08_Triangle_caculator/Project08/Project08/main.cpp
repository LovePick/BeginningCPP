//
//  main.cpp
//  Project08
//
//  Created by DW02 on 21/9/2561 BE.
//  Copyright © 2561 DW02. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

//http://www.mathopenref.com/coordtrianglearea.html

double area(double ax, double ay, double bx, double by, double cx, double cy){
    
    return  abs(((ax * (by - cy)) + (bx * (cy - ay)) + (cx * (ay - by))) * 0.5);
}

int main() {

    double ax;
    double ay;
    double bx;
    double by;
    double cx;
    double cy;
    
    
    cout << "Ax : ";
    cin >> ax;
    
    cout << "Ay : ";
    cin >> ay;
    
    cout << "Bx : ";
    cin >> bx;
    
    cout << "By : ";
    cin >> by;
    
    
    cout << "Cx : ";
    cin >> cx;
    
    cout << "Cy : ";
    cin >> cy;
    
    
    double answer = area(ax, ay, bx, by, cx, cy);
    cout << "area : "<< answer << endl;
    
    
    return 0;
}
