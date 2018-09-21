//
//  main.cpp
//  Project01
//
//  Created by DW02 on 21/9/2561 BE.
//  Copyright © 2561 DW02. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
 
    //1
    string name;

    std::cout << "Please Enter your name : ";
    std::cin >> name;
    std::cout << "Hello " << name << " nice to meet you." << std::endl;
    
    
    
    std::cout << " ----- " << std::endl;
    
    //2
    string first_name;
    string last_name;
    
    std::cout << "Please Enter your full name : ";
    std::cin >> first_name >> last_name;
    std::cout << "Hello " << first_name << "  " << last_name << " have a nice day." << std::endl;
    
    
    
    std::cout << " ----- " << std::endl;
  
    
    //3.5
    string fixBug;
    std::getline(std::cin, figBug);
    
    
    //3
        
    string movie;
    std::cout << "Please Enter your fovorite movie : ";
    std::getline(std::cin, movie);
    std::cout << movie << std::endl;
  
    
    return 0;
}
