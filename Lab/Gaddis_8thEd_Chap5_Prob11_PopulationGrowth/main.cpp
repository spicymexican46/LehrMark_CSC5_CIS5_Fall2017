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
    float temp=(1+incPop/100.0f);
    popPow=pop*pow(temp,nYears);
    for(int year=1;year<=nYears;year++){
        pop*=temp;
    }
    
    //Display/Output all pertinent variables
    cout<<"The resulting population in "<<nYears<<" years = "
            <<pop<<" people using a loop"<<endl;
    cout<<"  Same result population in "<<nYears<<" years = "
            <<popPow<<" people using the pow()"<<endl;
    
    //Exit the program
    return 0;
}