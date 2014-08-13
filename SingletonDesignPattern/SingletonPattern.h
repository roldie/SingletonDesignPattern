//
//  SingletonPattern.h
//  Design_Patterns
//
//  Created by Harold Serrano on 7/27/14.
//  Copyright (c) 2014 Roldie.com. All rights reserved.
//

#ifndef __Design_Patterns__SingletonPattern__
#define __Design_Patterns__SingletonPattern__

#include <iostream>

class SingletonPattern{
    
private:
    
    int i;
    
protected:
    
    //constructor
    SingletonPattern():i(0){};
    
    //destructor
    ~SingletonPattern(){};
    
public:
    
    //instance for class singleton
    
    static SingletonPattern* instance;
    
    //shared instance for the singleton
    
    static SingletonPattern* sharedInstance();
    
    //set the value of i
    void setValue(int uValue);
    
    //get the value of i
    int getValue();
};

#endif /* defined(__Design_Patterns__SingletonPattern__) */
