#include <iostream>
#include <stack>
#include <string>

using namespace std;

void cek_bracket(string input)
{
 stack <char> parenthesis;
 int length = input.length();
 char top;
 bool result;
 for(int i = 0; i< length; i++){
   if(input[i] == '(' || input[i] == '{' || input[i] == '['){
     parenthesis.push(input[i]);
   }
   else
   { 
     if(parenthesis.empty()){
       cout << "False";
       return ;
     }
      else{
      top = parenthesis.top();
      if(input[i] == ')' && top == '(' || 
        input[i] == '}' && top == '{' ||
        input[i] == ']' && top == '[') {
        parenthesis.pop();
      }
      else{
         cout << "False";
         return;
      }
     }
   }
 }
 if (parenthesis.empty()){
   cout<<"True"<<endl;
 }
}

int main() {
  
 cout << "Example Run: " << endl; 			
 string input1 = "{([])}([]{}())";
 cout << "Input: " << input1 << endl;
 cek_bracket(input1);
 string input2 = "{(}}";
 cout << "Input: " << input2 << endl;
 cek_bracket(input2);
 return 0;
}
