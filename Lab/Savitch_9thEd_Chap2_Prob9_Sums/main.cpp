/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Sept 25th, 2017, 9:05 PM
 * Purpose:  Positive and Negative Sums
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
    int x,sum=0,sumPos=0,sumNeg=0;
    
    //Input Data/Variables
    cout<<"Sum 10 Numbers + or - and get the Pos or Neg Sum"<<endl;
    cout<<"Input a number"<<endl;
    cin>>x;
    //Process or map the inputs to the outputs
    sumPos+=(x>0?x:0);
    sumNeg+=(x<0?x:0);
    
    cout<<"Input a number"<<endl;
    cin>>x;
    //Process or map the inputs to the outputs
    sumPos+=(x>0?x:0);
    sumNeg+=(x<0?x:0);

    cout<<"Input a number"<<endl;
    cin>>x;
    //Process or map the inputs to the outputs
    sumPos+=(x>0?x:0);
    sumNeg+=(x<0?x:0);
    
    cout<<"Input a number"<<endl;
    cin>>x;
    //Process or map the inputs to the outputs
    sumPos+=(x>0?x:0);
    sumNeg+=(x<0?x:0);
    
    cout<<"Input a number"<<endl;
    cin>>x;
    //Process or map the inputs to the outputs
    sumPos+=(x>0?x:0);
    sumNeg+=(x<0?x:0);
    
    cout<<"Input a number"<<endl;
    cin>>x;
    //Process or map the inputs to the outputs
    sumPos+=(x>0?x:0);
    sumNeg+=(x<0?x:0);
    
    cout<<"Input a number"<<endl;
    cin>>x;
    //Process or map the inputs to the outputs
    sumPos+=(x>0?x:0);
    sumNeg+=(x<0?x:0);
    
    cout<<"Input a number"<<endl;
    cin>>x;
    //Process or map the inputs to the outputs
    sumPos+=(x>0?x:0);
    sumNeg+=(x<0?x:0);
    
    cout<<"Input a number"<<endl;
    cin>>x;
    //Process or map the inputs to the outputs
    sumPos+=(x>0?x:0);
    sumNeg+=(x<0?x:0);
    
    cout<<"Input a number"<<endl;
    cin>>x;
    //Process or map the inputs to the outputs
    sumPos+=(x>0?x:0);
    sumNeg+=(x<0?x:0);
    
    //Calculate total
    sum=sumPos+sumNeg;
    
    //Display/Output all pertinent variables
    cout<<"The positive sum = "<<sumPos<<endl;
    cout<<"The negative sum = "<<sumNeg<<endl;
    cout<<"The total sum =    "<<sum<<endl;
    
    //Exit the program
    return 0;
}