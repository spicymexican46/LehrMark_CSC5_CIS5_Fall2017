/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Sept 13th, 2017, 9:50 AM
 * Purpose:  Create a big C
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstring>      //String Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char c;          //Letter forming the Big C
    string sp1=" ";  //1 Space
    string sp2="  "; //2 Space

    //Input Data/Variables
    cout<<"Big C Program"<<endl;
    cout<<"Input the letter to draw a Big C"<<endl;
    cin>>c;
    
    //Display/Output all pertinent variables
    cout<<sp2<<c<<c<<endl;
    cout<<sp1<<c<<sp2<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<sp1<<c<<sp2<<c<<endl;
    cout<<sp2<<c<<c<<endl;
    
    //Exit the program
    return 0;
}