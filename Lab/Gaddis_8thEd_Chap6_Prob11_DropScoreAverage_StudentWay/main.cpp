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
void getScore(float &,float &,float &, float &, float &);
float fndLowst(float,float,float, float, float);
float average(float,float,float, float, float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float v1,v2,v3,v4,v5;
    
    //Input the values
    getScore(v1,v2,v3,v4,v5);
    
    //Display/Output all pertinent variables
    cout<<"The Average 4 highest Scores = "<<average(v1,v2,v3,v4,v5);
    
    //Exit the program
    return 0;
}

float average(float a,float b,float c, float d, float e){
    float lowest=fndLowst(a,b,c,d,e);
    return (a+b+c+d+e-lowest)/4;
}

float fndLowst(float a,float b,float c, float d, float e){
    float lowest=a;
    if(b<lowest)lowest=b;
    if(c<lowest)lowest=c;
    if(d<lowest)lowest=d;
    if(e<lowest)lowest=e;
    return lowest;
}

void getScore(float &a,float &b,float &c, float &d, float &e){
    static int cnt=1;
    cout<<"Type in Test Score "<<cnt++<<endl;
    cin>>a;
    cout<<"Type in Test Score "<<cnt++<<endl;
    cin>>b;
    cout<<"Type in Test Score "<<cnt++<<endl;
    cin>>c;
    cout<<"Type in Test Score "<<cnt++<<endl;
    cin>>d;
    cout<<"Type in Test Score "<<cnt++<<endl;
    cin>>e;
}