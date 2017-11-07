/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Oct 31th, 2017, 1150 AM
 * Purpose:  Temperature Conversion or Interpolation
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
float degC(float);//Linear Conversion
float degC(float,float,float,float,float);//Interpolation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float degCent, degFahr;//independent and dependent variable for Temp
    float f1,f2,c1,c2;//Tabular data points
    
    //Initialize Variables
    f1=32; //Freezing Point of water 32 degrees Fahrenheit
    f2=212;//Boiling Point of water 212 degrees Fahrenheit
    c1=0;  //Freezing Point of water  0 degrees Centigrade
    c2=100;//Boiling Point of water 100 degrees Centigrade
    
    //Output the Temperature Table
    cout<<"The Temperature Conversion Table"<<endl;
    cout<<"Fahrenheit  Celsius 1   Celsius 2"<<endl;
    cout<<fixed<<setprecision(4)<<showpoint;
    for(int f=f1;f<=f2;f++){
        cout<<setw(7)<<f
            <<setw(14)<<degC(f)
            <<setw(12)<<degC(f,f1,f2,c1,c2)<<endl;
    }
    
    //Exit the program
    return 0;
}

float degC(float f){
    return (f-32)*5/9;
}

float degC(float f,float f1,float f2,float c1,float c2){
    return c1+(c2-c1)*(f-f1)/(f2-f1);
}