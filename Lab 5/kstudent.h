//
//  student.h
//  Classes and Objects
//
//  Created by Krish Patel on 10/14/19.
//  Copyright © 2019 Krish Patel. All rights reserved.
//

#ifndef student_h
#define student_h
#include <iostream>
#include <string>

using namespace std;

class Student
{
    private:
        string name;
        int sid;
        int num;
        int *tests{nullptr};
        
        void makeArray()
        {
            if (tests == nullptr)
                tests = new int[num]{0};
        }
    
    
    
    
    public:
        //Fucntion Prototypes
        void setName(string nm);
        void setID(int ids);
        void setScore(int i, int score);
        string getName() const;
        int getID() const;
        void showScores();
        void display();
    
        Student()
        {
            setName("None");
            setID(10);
            num = 3;
            makeArray();
        }
        Student(int n)
        {
            setName("None");
            setID(10);
            if(n > 0)
            {
                num = n;
            } else {
                num = 3;
            }
            makeArray();
        }
        Student(string nm, int ids, int n)
        {
            setName(nm);
            setID(ids);
            if(n > 0)
            {
                num = n;
            } else {
                num = 3;
            }
            makeArray();
        }
        ~Student()
        {
            //delete [] tests;
            
        }
        
};


#endif /* student_h */

