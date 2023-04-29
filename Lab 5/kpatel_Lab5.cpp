//
//  main.cpp
//  Classes and Objects
//
//  Created by Krish Patel on 10/14/19.
//  Copyright © 2019 Krish Patel. All rights reserved.
//

#include <iostream>
#include <string>
#include "student.h"

using namespace std;


int main()
{
    Student student1, student2, student3;
    
    student1 = Student();
    student2 = Student(4);
    student3 = Student("Joe", 40, 5);
    student3.setName("Joe");
    
    cout << "Calling the set functions" << endl;
   
    student1.setName("Tom");
    student1.setID(200);
    student1.setID(20);
    student1.setScore(1, 75);
    student1.setScore(2, 85);
    student1.setScore(3, 95);
    
    student2.setName("John");
    student2.setID(30);
    student2.setScore(1, 70);
    student2.setScore(2, 80);
    student2.setScore(3, 90);
    student2.setScore(4, 100);
    
    student3.setScore(5, 195);
    student3.setScore(4, 105);
    student3.setScore(-5, -105);
    student3.setScore(1, 90);
    student3.setScore(2, 91);
    student3.setScore(3, 92);
    student3.setScore(4, 93);
    student3.setScore(5, 94);
   
    cout << endl << endl << endl;
    cout << "Calling the display function" << endl;
    student1.display();
    cout << endl << endl;
    student2.display();
    cout << endl << endl;
    student3.display();
     cout << endl << endl;
}
