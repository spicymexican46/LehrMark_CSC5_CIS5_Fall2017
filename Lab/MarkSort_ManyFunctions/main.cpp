/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Nov 27th, 2017, 8:30 AM
 * Purpose:  Sorting with a Conquer and Divide Technique
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstdlib>      //Random Function Library
#include <ctime>        //Set random number seed with time
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
void filAray(int [],int);
void prntAry(int [],int,int);
void swap(int &,int &);
void smallst(int [],int,int);
void mrkSort(int [],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    
    //Initialize Variables
    filAray(array,SIZE);
    
    //Print the Array
    prntAry(array,SIZE,10);
    
    //Process or map the inputs to the outputs
    mrkSort(array,SIZE);
    
    //Display/Output all pertinent variables
    prntAry(array,SIZE,10);
    
    //Exit the program
    return 0;
}

void mrkSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        smallst(a,n,i);
    }
}

void smallst(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap(a[pos],a[i]);
    }
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}