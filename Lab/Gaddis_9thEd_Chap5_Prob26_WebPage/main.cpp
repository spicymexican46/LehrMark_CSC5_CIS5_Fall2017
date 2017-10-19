/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Oct 19th, 2017, 12:15 PM
 * Purpose:  Create a Webpage
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <fstream>      //File stream library
#include <cstring>      //String library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string fName,usrName,usrBio;
    ofstream out;
    
    //Initialize Variables
    fName="webpage.html";
    out.open(fName.c_str());
    
    //Input Data/Variables
    cout<<"Generate Code for a Bio Webpage"<<endl;
    cout<<"Input Name"<<endl;
    getline(cin,usrName);
    cout<<"Input Bio"<<endl;
    getline(cin,usrBio);
    
    //Generate the Web page
    cout<<"<html>"<<endl;
    cout<<"  <head>"<<endl;
    cout<<"    <title>Gaddis 9thEd Chap5 Prob26 Web Page Generator</title>"<<endl;
    cout<<"  </head>"<<endl;
    cout<<"  <body>"<<endl;
    cout<<"    <center>"<<endl;
    cout<<"        <h1>"<<usrName<<"</h1>"<<endl;
    cout<<"        <hr />"<<endl;
    cout<<"            "<<usrBio<<endl;
    cout<<"        <hr />"<<endl;
    cout<<"    </center>"<<endl;
    cout<<"  </body>"<<endl;
    cout<<"</html>"<<endl;
    
    //Generate the Web page
    out<<"<html>"<<endl;
    out<<"  <head>"<<endl;
    out<<"    <title>Gaddis 9thEd Chap5 Prob26 Web Page Generator</title>"<<endl;
    out<<"  </head>"<<endl;
    out<<"  <body>"<<endl;
    out<<"    <center>"<<endl;
    out<<"        <h1>"<<usrName<<"</h1>"<<endl;
    out<<"        <hr />"<<endl;
    out<<"            "<<usrBio<<endl;
    out<<"        <hr />"<<endl;
    out<<"    </center>"<<endl;
    out<<"  </body>"<<endl;
    out<<"</html>"<<endl;
    
    //Close the file
    out.close();
    
    //Exit the program
    return 0;
}