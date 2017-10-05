/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Oct 4th, 2017, 9:05 PM
 * Purpose:  Soylent Green
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <iomanip>      //Format the table
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int fi,fim1,fim2,counter;
    int wtCrud =10;//5 lbs of crud to start
    int deltDys=5;//5 Days between increments
    
    //Initialize Variables
    fim1=fim2=1; //Initialize the sequence
    counter=1;   //Start with 3rd term in the sequence
    
    //Table Header
    cout<<"  Sequence   Crud Wt    N Days"<<endl;
    
    //Process or map the inputs to the outputs
    //First Row
    cout<<setw(10)<<fim2<<setw(10)<<wtCrud*fim2
            <<setw(10)<<(counter-1)*deltDys<<endl;
    counter+=1;
    //Second Row
    cout<<setw(10)<<fim1<<setw(10)<<wtCrud*fim1
            <<setw(10)<<(counter-1)*deltDys<<endl;
    counter+=1;
    //Third Row
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtCrud*fi
            <<setw(10)<<(counter-1)*deltDys<<endl;
    counter+=1;
    //Fourth Row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtCrud*fi
            <<setw(10)<<(counter-1)*deltDys<<endl;
    counter+=1;
    //nth Row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtCrud*fi
            <<setw(10)<<(counter-1)*deltDys<<endl;
    counter+=1;
    //nth Row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtCrud*fi
            <<setw(10)<<(counter-1)*deltDys<<endl;
    counter+=1;
    //nth Row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtCrud*fi
            <<setw(10)<<(counter-1)*deltDys<<endl;
    counter+=1;
    //nth Row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtCrud*fi
            <<setw(10)<<(counter-1)*deltDys<<endl;
    counter+=1;
    //nth Row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtCrud*fi
            <<setw(10)<<(counter-1)*deltDys<<endl;
    counter+=1;
    //nth Row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtCrud*fi
            <<setw(10)<<(counter-1)*deltDys<<endl;
    counter+=1;
    //nth Row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtCrud*fi
            <<setw(10)<<(counter-1)*deltDys<<endl;
    counter+=1;
    //nth Row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtCrud*fi
            <<setw(10)<<(counter-1)*deltDys<<endl;
    counter+=1;
    //nth Row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtCrud*fi
            <<setw(10)<<(counter-1)*deltDys<<endl;
    counter+=1;
    //nth Row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtCrud*fi
            <<setw(10)<<(counter-1)*deltDys<<endl;
    counter+=1;
    //nth Row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtCrud*fi
            <<setw(10)<<(counter-1)*deltDys<<endl;
    counter+=1;
    //nth Row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtCrud*fi
            <<setw(10)<<(counter-1)*deltDys<<endl;
    counter+=1;
    //nth Row
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<setw(10)<<fi<<setw(10)<<wtCrud*fi
            <<setw(10)<<(counter-1)*deltDys<<endl;
    counter+=1;
   
    
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}