/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on October 30th, 2017, 10:15 AM
 * Purpose:  Rock Paper Scissors
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstdlib>      //Random Number Generator
#include <ctime>        //Time for setting seed
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
char cmpRPS();
char plyRPS();
string winner(char,char);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char cmptr,player;
    
    //Initialize Variables
    cmptr=cmpRPS();
    
    //Input Data/Variables
    player=plyRPS();
    
    //Process Display/Output 
    cout<<"Computer->"<<cmptr<<
          " Player-->"<<player<<endl<<
          " Results->"<<
            winner(cmptr,player)<<endl;
    
    //Exit the program
    return 0;
}

string winner(char cmp,char ply){
    if(cmp==ply)return "Tie";
    if((cmp=='R'&&ply=='S')||
       (cmp=='P'&&ply=='R')||
       (cmp=='S'&&ply=='P'))return "Computer Wins";
    return "Player Wins";
}

char plyRPS(){
    char plyTrn;
    cout<<"This Game is Rock-Paper_Scissors"<<endl;
    cout<<"Input your choice"<<endl;
    cout<<"R-Rock, P-Paper, S-Scissors"<<endl;
    cin>>plyTrn;
    return plyTrn;
}

char cmpRPS(){
    char cmptr;
    do{
        cmptr=rand()%4+80;//[P,Q,R,S] = [80,81,82,83]
    }while(cmptr=='Q');//if Q choose again
    return cmptr;
}