/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Sept 25th, 2017, 9:05 PM
 * Purpose:  Creating a class template
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
float getScore();
float fndLowst(float &);
float average();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Display/Output all pertinent variables
    cout<<"The Average 4 highest Scores = "<<average();
    
    //Exit the program
    return 0;
}

float average(){
    float sum;
    float lowest=fndLowst(sum);
    return (sum-lowest)/4;
}

float fndLowst(float &sum){
    sum=0;
    float lowest=getScore();
    sum+=lowest;
    for(int i=1;i<=4;i++){
        float add=getScore();
        if(add<lowest)lowest=add;
        sum+=add;
    }
    return lowest;
}

float getScore(){
    static int cnt=1;
    float score;
    cout<<"Type in Test Score "<<cnt++<<endl;
    cin>>score;
    return score;
}