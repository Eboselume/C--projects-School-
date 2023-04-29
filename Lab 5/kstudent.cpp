//
//  student.cpp
//  Classes and Objects
//
//  Created by Krish Patel on 10/14/19.
//  Copyright © 2019 Krish Patel. All rights reserved.
//
#include <iostream>
#include "student.h"
#include <string>

void Student::setName(string nm)
{
    name = nm;
}
void Student::setID(int id)
{
    string tempName{""};
    tempName = getName();
    if(id >= 10 && id <=99)
    {
        sid = id;
    } else{
        sid = 10;
        cout << "Invalid. Cannot set id to " << id << " for " << tempName << endl;
       
    }
}
void Student::setScore(int i, int score)
{
    string tempName{""};
    tempName = getName();
    
        if(score >= 0 && score <= 100 &&
           (i > 0 && i <= num))
        {
            tests[i] = score;
        } else {
            cout << "Invalid. Cannot set test " << i << " to " << score << " for " << tempName << endl;
        }
    
}
string Student::getName() const
{
    return name;
}
int Student::getID() const
{
    return sid;
}
void Student::showScores()
{
    for(int in{0}; in < num; in++)
    {
        cout << "Test " << in+1 << " had a score of " << tests[in+1] << endl;
        
    }
}
void Student::display()
{
    getName();
    getID();
    cout << "Student Name: " << name << endl;
    cout << "Student ID: " << sid << endl;
       showScores();
    
}
