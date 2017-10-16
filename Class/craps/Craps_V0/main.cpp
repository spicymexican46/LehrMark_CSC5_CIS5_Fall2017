/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Oct 16th, 2017, 8:05 AM
 * Purpose:  Craps Initial Version
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstdlib>      //Library set random number seed
#include <ctime>        //Libary to seed the random number generator
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Initializing Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned int nGames,wins=0,losses=0;
    
    //Initialize Variables
    nGames=36000;
    
    //Process or map the inputs to the outputs
    for(unsigned int game=1;game<=nGames;game++){
        char die1=rand()%6+1;//[1,6]
        char die2=rand()%6+1;//[1,6]
        char sum=die1+die2;
        if(sum==7||sum==11)wins++;
        else if(sum==2||sum==3||sum==12)losses++;
        else{
            bool loop;
            do{
                loop=true;
                char die1=rand()%6+1;//[1,6]
                char die2=rand()%6+1;//[1,6]
                char sum2=die1+die2;
                if(sum==sum2){
                    loop=false;
                    wins++;
                }else if(sum2==7){
                    loop=false;
                    losses++;
                }  
            }while(loop);
        }
    }
    
    //Display/Output all pertinent variables
    cout<<"Number of Games played  = "<<nGames<<endl;
    cout<<"Number of Games checked = "<<wins+losses<<endl;
    cout<<"Number of Wins          = "<<wins<<endl;
    cout<<"Number of losses        = "<<losses<<endl;
    cout<<"Percentage Wins         = "<<100.0f*wins/nGames<<"%"<<endl;
    cout<<"Percentage Losses       = "<<100.0f*losses/nGames<<"%"<<endl;

    //Exit the program
    return 0;
}