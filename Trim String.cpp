#include <iostream>
#include <cctype>
#include <string>
using namespace std;


string clean(string sample){
    string newStr="";
    newStr+=sample[0]
;
       for(size_t i=1; i<sample.size(); i++){
        if((isspace(sample[i]))&& isspace(sample[i-1])){
            continue;
        } else{
             
             newStr+= sample[i];
        }
    }
    return newStr;
}


void percentageDeclare(string message, string percentageOrRatio){
    if(percentageOrRatio[percentageOrRatio.size()-1]=='%'){
        cout<<"The percentage of "<<message<<" is "<< percentageOrRatio;
    }
    else{
        float ratio = stof(percentageOrRatio); // convert string to float
        ratio *= 100.0;
        cout<<"The percentage of "<<message<<" is "<< ratio;
    }
}

string cleaner(string sample){
    string NewString= "";
    int i=0;
    int j= sample.size()-1;
    if (isblank(sample[i])){
        while(isblank(sample[i])){
            i++; 
        }
        
    }
    if(isblank(sample[j])){
        while(isblank(sample[j])){
            j--;
        }
    }
    // loop from i to j and append non-blank characters to NewString
    for (int k = i; k <= j; k++){
       
            NewString += sample[k];
        
    }
    return NewString;
}


int main()
{
    
    
    float successCount=0;
    
    
    string test1 = " Hello World";
    string test2 = "Hello World";
    string test3 = "Hello";
    string test4 = " Hello World ";
    
    
    if(cleaner(test1) =="Hello World")
    successCount++;
    if(cleaner(test2)== "Hello World")
    successCount++;
    if(cleaner(test3) == "Hello")
    successCount++;
    if(cleaner(test4) == "Hello World")
    successCount++;
    
     std::string stringValue = std::to_string(successCount/4.0);
    
    
        percentageDeclare("Successful test cases",stringValue); // use successCount instead of count
        
       
    
    return 0;
}
