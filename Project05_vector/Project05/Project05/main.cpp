//
//  main.cpp
//  Project05
//
//  Created by DW02 on 21/9/2561 BE.
//  Copyright © 2561 DW02. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;


void printValue(vector<int> arData){
    
    auto size = arData.size();
    
    for(int i = 0; i < size; i++){
        cout << "i : " << arData[i] << endl;
    }
}



int main() {
    
    
    std::vector<int> vNumber;
    
    vNumber.push_back(0);
    vNumber.push_back(1);
    vNumber.push_back(2);
    vNumber.push_back(3);
    vNumber.push_back(4);
    
    
    
    cout << vNumber[1] << endl;
    auto size = vNumber.size();
    
    cout << "size : " << size << endl;
    
    printValue(vNumber);
    
    cout << " --- "<< endl;
    vNumber.push_back(5);
    vNumber.push_back(6);
    
    size = vNumber.size();
    cout << "size : " << size << endl;
    printValue(vNumber);
    
    cout << " --- "<< endl;
    
    // Deletes the second element (vec[1])
    vNumber.erase(vNumber.begin() + 1);
    size = vNumber.size();
    cout << "size : " << size << endl;
    printValue(vNumber);
    
    cout << " --- "<< endl;
    
    
    // Deletes the second through third elements (vNumber[1], vNumber[2])
    vNumber.erase(vNumber.begin() + 1, vNumber.begin() + 3);
    size = vNumber.size();
    cout << "size : " << size << endl;
    printValue(vNumber);
    
    cout << " --- "<< endl;
    
    
    return 0;
}
