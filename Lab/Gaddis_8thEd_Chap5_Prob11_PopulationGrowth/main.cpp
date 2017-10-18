/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Oct 18th, 2017, 10:30 AM
 * Purpose:  Population Growth
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
    float pop,incPop,popPow;
    int nYears;
    
    //Input Data/Variables
    cout<<"Calculate the increase in population over time"<<endl;
    cout<<"Input the population, percentage yearly increase and "<<endl;
    cout<<"The number of years"<<endl;
    cin>>pop>>incPop>>nYears;
    
    //Process or map the inputs to the outputs
    popPow=pop*pow((1+incPop/100),nYears);
    for(int year=1;year<=nYears;year++){
        pop*=(1+incPop/100.0f);
    }
    
    //Display/Output all pertinent variables
    cout<<"The resulting populaiton in "<<nYears<<" years = "
            <<pop<<" people not poop"<<endl;
    cout<<"  Same result population in "<<nYears<<" years = "
            <<popPow<<" people not poop"<<endl;
    
    //Exit the program
    return 0;
}