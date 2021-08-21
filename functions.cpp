#include<iostream>
#include<string>
#include<vector>
void bleep(std::string &input){
  int i = 0;
  while(i < input.size())
{
  std::string temp;
  while(input[i]!=' '){
    temp.push_back(input[i]);
    i++;
  }
  if(temp == "brocolli"){
  int j = 0;
  for(int j = i - 8 ; j < i ;j++ ){
      input[j] = '*';
  }
  }
  i++;
}
}
