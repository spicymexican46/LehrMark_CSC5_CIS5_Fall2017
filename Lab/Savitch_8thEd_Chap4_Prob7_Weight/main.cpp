/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on October 17th, 2017, 9:05 PM
 * Purpose:  Weight Problem
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //Absolute value function
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const float GRAVITY=6.673e-8f;//Universal Gravitational Constant cm^3/gram/sec^2
const float CNVCMFT=1/30.48f; //30.48cm/ft
const float CNVMFT =5280.0f;  //5280 ft/mile
const float CNVGKG =1000.0f;  //1000 grams to 1 kilogram
const float REARTH =3959.0f;  //Radius of the earth miles
const float MEARTH =5.972e24f;//Mass of the earth kilograms

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float myMass, myWgt, actWgt;
    
    //Initialize Variables
    myMass=6.0f;//6 slugs
    
    //Input Data/Variables
    cout<<"This program converts your weight in lbs to"<<endl;
    cout<<"Your mass in slugs"<<endl;
    cout<<"Input your actual weight in lbs"<<endl;
    cin>>actWgt;
    
    //Process or map the inputs to the outputs
    float delta,tol=.001f;
    float kGain=tol;
    do{
        myWgt=GRAVITY*CNVCMFT*CNVCMFT*CNVCMFT*MEARTH*CNVGKG*myMass/
            (REARTH*REARTH*CNVMFT*CNVMFT);
        delta=actWgt-myWgt;
        myMass+=kGain*delta;
    }while(abs(delta)>=tol);
    
    //Display/Output all pertinent variables
    cout<<"Your weight = "<<myWgt<<" lbs"<<endl;
    cout<<"Your mass   = "<<myMass<<" slugs"<<endl;
    
    //Exit the program
    return 0;
}