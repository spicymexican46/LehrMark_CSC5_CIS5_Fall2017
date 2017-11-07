/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Nov 6th, 2017, 9:50 AM
 * Purpose:  Sin Interpolation
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      //Formatting Library
#include <cmath>        //Math Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const float PI=4*atan(1.0);  //The value of 3.1415.....
const float CVNDEGR=PI/180.0;//Conversion from degrees to Radians

//Function Prototypes
float sinC(float);//Library Call
float sinC(float,float,float,float,float);//Interpolation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Output the Temperature Table
    cout<<"Approximate the Sin"<<endl;
    cout<<"    deg    rad      Sin 1   Sin 2"<<endl;
    cout<<fixed<<setprecision(4)<<showpoint;
    float delDeg=10;//Difference in Interpolated Values
    for(int deg=0;deg<180;deg+=delDeg){
        float deg1=deg*CVNDEGR;
        float deg2=(deg+delDeg)*CVNDEGR;
        float sin1=sin(deg1);
        float sin2=sin(deg2);
        float degHalf=(deg1+deg2)/2;
        cout<<setw(7)<<(deg+delDeg/2)
            <<setw(7)<<degHalf
            <<setw(11)<<sinC(degHalf)
            <<setw(9)<<sinC(degHalf,deg1,deg2,sin1,sin2)<<endl;
    }
    
    //Exit the program
    return 0;
}

float sinC(float deg){
    return sin(deg);
}

float sinC(float deg,float deg1,float deg2,float sin1,float sin2){
    return sin1+(sin2-sin1)*(deg-deg1)/(deg2-deg1);
}