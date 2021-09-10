// To find the case of first alphabet in a given string

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    if(str[0]>='A' && str[0]<='Z'){
        cout<<"Uppercase";
    }
    else if(str[0]>='a' && str[0]<='z'){
        cout<<"Lowercase";
    }
    else{
        cout<<"Your entered string first character is not a charater";
    }
    return 0;
}