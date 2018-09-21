//
//  main.cpp
//  Project07
//
//  Created by DW02 on 21/9/2561 BE.
//  Copyright © 2561 DW02. All rights reserved.
//

#include <iostream>
using namespace std;



int main() {
    
    string name;
    int score;
    char grade = 'F';
    
    
    
    
    
    cout << "Pleast enter your name : ";
    cin >> name;
    
    cout << "Pleast enter your score : ";
    cin >> score;
    
    
    if((score >= 40) && (score < 50)){
        grade = 'D';
    }else if((score >= 50) && (score < 60)){
        grade = 'C';
    }else if((score >= 60) && (score < 70)){
        grade = 'B';
    }else if((score >= 70) && (score < 80)){
        grade = 'B';
    }else if(score >= 80){
        grade = 'A';
    }
    
    
    
    
    
    cout << "Hello " << name << " your grade is : " << grade << endl;
    
    
    return 0;
}
