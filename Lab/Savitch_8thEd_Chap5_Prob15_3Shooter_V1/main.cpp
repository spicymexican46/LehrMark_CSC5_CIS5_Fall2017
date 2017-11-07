/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Nov 6th, 2017, 10:30 AM
 * Purpose:  3 Person Shooter
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstdlib>      //Rand and Srand
#include <ctime>        //Time function Library
#include <cmath>        //Math Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
float pRand();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    bool aliveA,aliveB,aliveC;
    float pkillA,pkillB,pkillC;
    
    //Initialize Variables
    aliveA=aliveB=aliveC=true;
    pkillA=1.0f/3;
    pkillB=1.0f/2;
    pkillC=1.0f;
    
    //Process or map the inputs to the outputs
    char aliveSm;
    do{
        if(aliveA){
            if(aliveB){
                if(pRand()<=pkillA)aliveB=false;
            }else if(aliveC){
                if(pRand()<=pkillA)aliveC=false;
            }
        }

        if(aliveB){
            if(aliveC){
                if(pRand()<=pkillB)aliveC=false;
            }else if(aliveA){
                if(pRand()<=pkillB)aliveA=false;
            }
        }

        if(aliveC){
            if(aliveA){
                if(pRand()<=pkillC)aliveA=false;
            }else if(aliveB){
                if(pRand()<=pkillC)aliveB=false;
            }
        }
    
        aliveSm=aliveA+aliveB+aliveC;
    }while(aliveSm>1);
    
    //Display/Output all pertinent variables
    cout<<"Aaron   is "<<(aliveA?"Alive":"Dead")<<endl;
    cout<<"Bob     is "<<(aliveB?"Alive":"Dead")<<endl;
    cout<<"Charlie is "<<(aliveC?"Alive":"Dead")<<endl;
    
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