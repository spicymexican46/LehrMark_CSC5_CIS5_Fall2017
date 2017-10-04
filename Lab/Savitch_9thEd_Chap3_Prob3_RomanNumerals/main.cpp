/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Oct 4th, 2017, 8:50 AM
 * Purpose:  Convert to Roman Numbers
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <stdlib.h>     //Exit function
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const int THSNDS =1000;
const int HUNDRDS= 100;
const int TENS   =  10;
const int ONES   =   1;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char nThsnds,nHudrds,nTens,nOnes;
    unsigned short number;
    
    //Input Data/Variables
    cout<<"This program converts numbers to Roman Numerals"<<endl;
    cout<<"Type in a number between 1000-3000"<<endl;
    cin>>number;
    if(!(number>=1000&&number<=3000)){
        cout<<"You don't seem to be able to follow directions!"<<endl;
        cout<<"The number you typed = "<<number<<endl;
        cout<<"Good Bye!!!"<<endl;
        exit(EXIT_FAILURE);
    }
    
    //Process or map the inputs to the outputs
    nThsnds=number/THSNDS;
    number%=THSNDS;
    nHudrds=number/HUNDRDS;
    number%=HUNDRDS;
    nTens=number/TENS;
    number%=TENS;
    nOnes=number;//Same as number/ONES;
    //cout<<static_cast<int>(nThsnds)<<" "<<static_cast<int>(nHudrds)
    //        <<" "<<static_cast<int>(nTens)<<" "<<static_cast<int>(nOnes)<<endl;
    
    //Display/Output all pertinent variables
    //Display The Number of 1000's
    switch(nThsnds){
        case 3: cout<<"M";
        case 2: cout<<"M";
        case 1: cout<<"M";
    }
    //Display The Number of 100's
    switch(nHudrds){
        case 9: cout<<"CM";break;
        case 8: cout<<"DCCC";break;
        case 7: cout<<"DCC";break;
        case 6: cout<<"DC";break;
        case 5: cout<<"D";break;
        case 4: cout<<"CD";break;
        case 3: cout<<"C";
        case 2: cout<<"C";
        case 1: cout<<"C";
    }
    //Display The Number of 10's
    switch(nTens){
        case 9: cout<<"XC";break;
        case 8: cout<<"LXXX";break;
        case 7: cout<<"LXX";break;
        case 6: cout<<"LX";break;
        case 5: cout<<"L";break;
        case 4: cout<<"XL";break;
        case 3: cout<<"X";
        case 2: cout<<"X";
        case 1: cout<<"X";
    }
    //Display The Number of 1's
    switch(nOnes){
        case 9: cout<<"IX";break;
        case 8: cout<<"VIII";break;
        case 7: cout<<"VII";break;
        case 6: cout<<"VI";break;
        case 5: cout<<"V";break;
        case 4: cout<<"IV";break;
        case 3: cout<<"I";
        case 2: cout<<"I";
        case 1: cout<<"I";
    }
    
    //Exit the program
    return 0;
}