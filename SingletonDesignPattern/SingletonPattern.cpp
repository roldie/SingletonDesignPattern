//
//  SingletonPattern.cpp
//  Design_Patterns
//
//  Created by Harold Serrano on 7/27/14.
//  Copyright (c) 2014 Roldie.com. All rights reserved.
//

#include "SingletonPattern.h"

SingletonPattern* SingletonPattern::instance=0;

SingletonPattern* SingletonPattern::sharedInstance(){
    
    if (instance==0) {
        instance=new SingletonPattern();
    }
    
    return instance;
    
}

void SingletonPattern::setValue(int uValue){
    
    i=uValue;
}

int SingletonPattern::getValue(){
    return i;
}