vector<string> splitSpace(string s){
    vector<string> newS;
    string temp="";

for(size_t i=0; i<s.size(); i++){
    if(!isspace(s[i])){
        temp+=s[i];
    } else{
        newS.push_back(temp);
        temp="";
        
    }



}
 if (!temp.empty()) {
        newS.push_back(temp);
    }

 return newS;


    
}
