/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on October 4th, 2017, 10:15 AM
 * Purpose:  Approximating e^x
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>        //Math Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float etox=1,x;
    int counter=1,fact=1;

    //Input Data/Variables
    cout<<"This program approximates e^x"<<endl;
    cout<<"Input a real from 0 to 2"<<endl;
    cin>>x;
    
    //Process or map the inputs to the outputs
    cout<<"e^"<<x<<" with "<<counter<<" term  = "<<etox<<endl;
    fact*=counter;
    etox+=(pow(x,counter++)/fact);
    cout<<"e^"<<x<<" with "<<counter<<" term  = "<<etox<<endl;
    fact*=counter;
    etox+=(pow(x,counter++)/fact);
    cout<<"e^"<<x<<" with "<<counter<<" term  = "<<etox<<endl;
    fact*=counter;
    etox+=(pow(x,counter++)/fact);
    cout<<"e^"<<x<<" with "<<counter<<" term  = "<<etox<<endl;
    fact*=counter;
    etox+=(pow(x,counter++)/fact);
    cout<<"e^"<<x<<" with "<<counter<<" term  = "<<etox<<endl;
    fact*=counter;
    etox+=(pow(x,counter++)/fact);
    cout<<"e^"<<x<<" with "<<counter<<" term  = "<<etox<<endl;
    fact*=counter;
    etox+=(pow(x,counter++)/fact);
    cout<<"e^"<<x<<" with "<<counter<<" term  = "<<etox<<endl;
    fact*=counter;
    etox+=(pow(x,counter++)/fact);
    cout<<"e^"<<x<<" with "<<counter<<" term  = "<<etox<<endl;
    fact*=counter;
    etox+=(pow(x,counter++)/fact);
    cout<<"e^"<<x<<" with "<<counter<<" term  = "<<etox<<endl;
    cout<<"e^"<<x<<" with Library function = "<<exp(x)<<endl;
    
    //Exit the program
    return 0;
}