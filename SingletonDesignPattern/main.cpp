//
//  main.cpp
//  SingletonDesignPattern
//
//  Created by Harold Serrano on 8/12/14.
//  Copyright (c) 2014 Roldie.com. All rights reserved.
//

#include <iostream>
#include "SingletonPattern.h"

using namespace::std;
int main(int argc, const char * argv[])
{

    //instantiate a singleton class
    
    SingletonPattern *singleton=SingletonPattern::sharedInstance();
    
    singleton->setValue(5); //set the value of i to 5
    
    cout<<singleton->getValue()<<endl; //print the value of i
    
    //instantiate another singleton class
    
    SingletonPattern *singletonCopy=SingletonPattern::sharedInstance();
    
    singletonCopy->setValue(32); //set the value of the singleton copy to 32
    
    cout<<singleton->getValue()<<endl; //get the value of the original singleton
    
    return 0;
}

