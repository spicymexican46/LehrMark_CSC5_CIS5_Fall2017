/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Sept 25th, 2017, 9:40 PM
 * Purpose:  Recipe
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      //Format library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const unsigned short BSCKES=48;//Base Cookies = 48
    unsigned short nCookes;        //Number of Cookies desired
    float sugar,butter,flour;
    
    //Initialize Variables
    sugar=1.5f; //Cups of Sugar
    butter=1.0f;//Cups of Butter
    flour=2.75f; //Cups of Flour
    
    //Input Data/Variables
    cout<<"This program calculates the amount of ingredients "
            <<"for cookie recipe"<<endl;
    cout<<"Input the number of cookies you would like to make"<<endl;
    cin>>nCookes;
    
    //Process or map the inputs to the outputs
    float ratio=static_cast<float>(nCookes)/BSCKES;//Utility value
    sugar*=ratio;
    butter*=ratio;
    flour*=ratio;
    
    //Display/Output all pertinent variables
    cout<<fixed<<setprecision(3)<<showpoint;
    cout<<"Your ingredients should have the follow quantity for"<<
            nCookes<<" cookies"<<endl;
    cout<<"Sugar  = "<<sugar<<" cups"<<endl;
    cout<<"Butter = "<<butter<<" cups"<<endl;
    cout<<"Flour  = "<<flour<<" cups"<<endl;
    
    //Exit the program
    return 0;
}