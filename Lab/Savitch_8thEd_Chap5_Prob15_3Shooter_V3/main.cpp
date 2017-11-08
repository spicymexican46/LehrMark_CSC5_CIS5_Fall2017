/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Nov 6th, 2017, 10:30 AM
 * Purpose:  3 Person Shooter
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      //Formatting Library
#include <cstdlib>      //Rand and Srand
#include <ctime>        //Time function Library
#include <cmath>        //Math Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
float pRand();
void shoot(bool,float,bool &,bool &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    bool aliveA,aliveB,aliveC;//A,B,C Lives
    float pkillA,pkillB,pkillC;//A,B,C Kill Probability
    int nGames,nWinA,nWinB,nWinC;//A,B,C number of Wins given nGames
    
    //Initialize Variables
    pkillA=1.0f/3;
    pkillB=1.0f/2;
    pkillC=1.0f;
    nWinA=nWinB=nWinC=0;
    nGames=100000000;
    
    //Take Statistics on who is left alive how often
    for(int game=1;game<=nGames;game++){
        char aliveSm;
        aliveA=aliveB=aliveC=1;
        do{
            //A shoots B if alive, or C
            shoot(aliveA,pkillA,aliveB,aliveC);
            //B shoots C if alive, or A
            shoot(aliveB,pkillB,aliveC,aliveA);
            //C shoots A if alive, or B
            shoot(aliveC,pkillC,aliveA,aliveB);
            //How many left alive?
            aliveSm=aliveA+aliveB+aliveC;
        }while(aliveSm>1);//Shoot till 1 left standing
        
        //Count the number of times A,B or C left alive
        nWinA+=aliveA;
        nWinB+=aliveB;
        nWinC+=aliveC;
    }
    
    //Display/Output all pertinent variables
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"Number of Games = "<<nGames<<" = "<<nWinA+nWinB+nWinC<<endl;
    cout<<"Order of shots Aaron -> Bob -> Charlie -> Aaron ....."<<endl;
    cout<<"Aaron with   pkill = "<<pkillA<<" won "<<nWinA<<" times"<<endl;
    cout<<"Bob with     pkill = "<<pkillB<<" won "<<nWinB<<" times"<<endl; 
    cout<<"Charlie with pkill = "<<pkillC<<" won "<<nWinC<<" times"<<endl;
    //Exit the program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Shoot
//Description
//  Determines who to shoot and likelihood of the
//  target dying.
//Input:
//      The shooter and their Accuracy
//      a -> alive true or false
//      pka -> a's accuracy
//Output:
//      The results of the one-sided duel
//      b -> alive true or false
//      c -> or alive true or false
//
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void shoot(bool a,float pka,bool &b,bool &c){
    if(a){
        if(b){
            if(pRand()<=pka)b=false;
        }else if(c){
            if(pRand()<=pka)c=false;
        }
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Random Probability
//Description
//  Creating a floating point pseudo-random number function scaled between
//  one and zero
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