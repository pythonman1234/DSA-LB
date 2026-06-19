#include<iostream>
using namespace std;

bool isPallindromeRec(string &s, int left , int right){
    if(left>=right){
        return true;
    }
    if(s[left]!=s[right]){
        return false;
    }
    
    return isPallindromeRec(s,left+1,right-1);
}

bool isPallindrome(string &s,){
    return isPallindromeRec(s,0,s.size()-1);
}

int main(){
    string s = "king";
    
    if(isPallindrome(s)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
    
    
}
