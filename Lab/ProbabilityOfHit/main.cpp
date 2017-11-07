/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Nov 6th, 2017, 10:30 AM
 * Purpose:  Creating a Uniform Random Number Generator [0,1]
 *           Testing the Probability of Hit
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstdlib>      //Rand and Srand
#include <ctime>        //Time function Library
#include <cmath>        //Math Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const unsigned int MAXRAND=pow(2,31)-1;

//Function Prototypes
float pRand();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
    //Initialize Variables
    
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    float min,max;
    min=max=pRand();
    for(int i=1;i<=1000000000;i++){
        float test=pRand();
        if(test>max)max=test;
        if(test<min)min=test;
    }
    
    cout<<"The maximum = "<<max<<endl;
    cout<<"The minimum = "<<min<<endl;
    cout<<"2^31 - 1 = MAXRAND = "<<MAXRAND<<endl;
    
    //Exit the program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Random Probability
//Input:
//      None
//Output:
//      Pseudo-Random number between [0,1]
//
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

float pRand(){
    //The maximum random number = 2^31-1
    static const float scale=1/(pow(2,31)-1);
    return rand()*scale;
}