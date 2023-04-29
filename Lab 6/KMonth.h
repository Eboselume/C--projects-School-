//
//  Header.h
//  C and O
//
//  Created by Krish Patel on 10/29/19.
//  Copyright © 2019 Krish Patel. All rights reserved.
//

#ifndef Header_h
#define Header_h
#include <iostream>
#include <string>

using namespace std;

class Month
{
    private:
        string Name;
        int monthNumber;
    public:
        Month()
        {
            Name = "January";
            monthNumber = 1;
    
        }
        Month(string mNfame)
        {
            setMonthName(mName);
            if(mName == "January"){
                setMonthNumber(1);
            }else if(mName == "February"){
                setMonthNumber(2);
            }else if(mName == "March"){
                setMonthNumber(3);
            }else if(mName == "April"){
                setMonthNumber(4);
            }else if(mName == "May"){
                setMonthNumber(5);
            }else if(mName == "June"){
                setMonthNumber(6);
            }else if(mName == "July"){
                setMonthNumber(7);
            }else if(mName == "August"){
                setMonthNumber(8);
            }else if(mName == "Septmber"){
                setMonthNumber(9);
            }else if(mName == "October"){
                setMonthNumber(10);
            }else if(mName == "November"){
                setMonthNumber(11);
            }else if(mName == "December"){
                setMonthNumber(12);
            }
            
        }
        Month(int mNum)
        {
            setMonthNumber(mNum);
        }
    
        string getMonthName() const
        {
            return Name;
        }
        int getMonthNumber() const
        {
            return monthNumber;
        }
        void setMonthName(string mName)
        {
            Name = mName;
        }
        void setMonthNumber(int mNum)
        {
            monthNumber = mNum;
        }
        void updateMonth(int mNum){
            if(mNum == 1){
                setMonthName("January");
            }else if(mNum == 2){
                setMonthName("February");
            }else if(mNum == 3){
                setMonthName("March");
            }else if(mNum == 4){
                setMonthName("April");
            }else if(mNum == 5){
                setMonthName("May");
            }else if(mNum == 6){
                setMonthName("June");
            }else if(mNum == 7){
                setMonthName("July");
            }else if(mNum == 8){
                setMonthName("August");
            }else if(mNum == 9){
                setMonthName("Septmber");
            }else if(mNum == 10){
                setMonthName("October");
            }else if(mNum == 11){
                setMonthName("November");
            }else if(mNum == 12){
                setMonthName("December");
            }else {
                setMonthName("January");
                mNum = 1;
            }
            setMonthNumber(mNum);
        }
        
        Month operator ++(){
            int num = getMonthNumber();
            int s = ++num;
            setMonthNumber(num);
            updateMonth(num);
            return *this;
        }
        
        
        Month operator ++(int){ //POST INCREMENT
            Month tempMonth;
            tempMonth.setMonthNumber(getMonthNumber());
            int num = tempMonth.getMonthNumber();
            tempMonth.updateMonth(num);
            int s = num++;
            setMonthNumber(s);
            updateMonth(num);
            return tempMonth;
        }
        
        //'=' operator overlod
        Month operator =(const Month &tempMonth)
        {
            setMonthNumber(tempMonth.getMonthNumber());
            setMonthName(tempMonth.getMonthName());
            return *this;
        }
    
        //cout << operator overlod
        friend ostream & operator << (ostream &out, Month &tempMonth)
        {
            out << "The name is " << tempMonth.getMonthName() << " and the number is " << tempMonth.getMonthNumber() << endl;
           return out;
        }
    
        //cin >> operator overlod
        friend istream & operator >> (istream &in, Month &tempMonth)
        {
            string monthName;
            in >> monthName;
            if(monthName == "January"){
                tempMonth.setMonthNumber(1);
            }else if(monthName == "February"){
                tempMonth.setMonthNumber(2);
            }else if(monthName == "March"){
                tempMonth.setMonthNumber(3);
            }else if(monthName == "April"){
                tempMonth.setMonthNumber(4);
            }else if(monthName == "May"){
                tempMonth.setMonthNumber(5);
            }else if(monthName == "June"){
                tempMonth.setMonthNumber(6);
            }else if(monthName == "July"){
                tempMonth.setMonthNumber(7);
            }else if(monthName == "August"){
                tempMonth.setMonthNumber(8);
            }else if(monthName == "Septmber"){
                tempMonth.setMonthNumber(9);
            }else if(monthName == "October"){
                tempMonth.setMonthNumber(10);
            }else if(monthName == "November"){
                tempMonth.setMonthNumber(11);
            }else if(monthName == "December"){
                tempMonth.setMonthNumber(12);
            }else{
                monthName = "January";
                tempMonth.setMonthNumber(1);
            }
            tempMonth.setMonthName(monthName);
             return in;
        }
       
    };

#endif /* Header_h */
