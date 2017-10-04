/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Oct 4th, 2017, 9:35 AM
 * Purpose:  Menu without Loops
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    
    //Input Data/Variables
    cout<<"Choose from the Menu"<<endl;
    cout<<"1. Problem Savitch 9thEd Chap 3 Prob 3 Roman Numerals"<<endl;
    cout<<"2. Problem 2"<<endl;
    cout<<"3. Problem 3"<<endl;
    cout<<"4. Problem 4"<<endl;
    cout<<"5. Problem 5"<<endl;
    cout<<"6. Problem 6"<<endl;
    cout<<"7. Problem 7"<<endl;
    cout<<"8. Problem 8"<<endl;
    cout<<"9. Problem 9"<<endl;
    cin>>choice;
    
    //Process or map the inputs to the outputs
    switch(choice){
        case 1:{
            cout<<"You are in Problem 1"<<endl;
            break;
        }
        case 2:{
            cout<<"You are in Problem 2"<<endl;
            break;
        }
        case 3:{
            cout<<"You are in Problem 3"<<endl;
            break;
        }
        case 4:{
            cout<<"You are in Problem 4"<<endl;
            break;
        }
        case 5:{
            cout<<"You are in Problem 5"<<endl;
            break;
        }
        case 6:{
            cout<<"You are in Problem 6"<<endl;
            break;
        }
        case 7:{
            cout<<"You are in Problem 7"<<endl;
            break;
        }
        case 8:{
            cout<<"You are in Problem 8"<<endl;
            break;
        }
        case 9:{
            cout<<"You are in Problem 9"<<endl;
            break;
        }
        default:{
            cout<<"You seem to have problems with instructions"<<endl;
            cout<<"You are unworthy of running this code"<<endl;
        }
    }
    
    //Exit the program
    return 0;
}