/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
void unitator(int x){
    int mul = 1;
    if(x==0){
        cout<<0;
        return;
    }
    while(x!=0){
        cout<<(x%10)*mul<<endl;
        mul*=10;
        x/=10;
        
        
    }
}

void hunds(int n){
    if(n>999){
        cout<<"Error";
        return;
    }
    string s="";
    
    switch(n%10){
    case 0:
    s=s;
    break;
    case 1:
    s+="one ";
    break;
    case 2:
    s+="two ";
    break;
    }
    n/=10;
    switch(n%10){
         case 0:
    s=s;
    break;
    case 1:
    s+="one ";
    break;
    case 2:
    s+="twenty ";
    break;
        
    }
    n/=10;
    switch(n%10){
        
           case 0:
    s=s;
    break;
    case 1:
    s+="one hundred ";
    break;
    case 2:
    s+="two hundred ";
    break;
        
        
    }
  // reverse(s.begin(), s.end());
    cout<<s;
    
}

//hnbasy l thousands lel hundreds 3ady
//reverse words not letters

void DigitSectionizer(){
    
}
int main()
{
    //unitator(35401);
    
    hunds(121);
    
    cout<<"Hello World";

    return 0;
}
