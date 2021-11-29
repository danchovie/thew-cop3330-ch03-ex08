/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Daniel Thew
 */
#include <iostream>
using namespace std;

int main() {
  //int for user input
  int user_in;
  //prompt for input
  cout<<"Enter number:\n";
  //take input
  cin>>user_in;
  //if user_in divided by 2 yields no remainder, state that
  //the number is even
  if(user_in%2==0){
    cout<<"The value "<<user_in<<" is an even number\n";
  }
  //else, state that the value is odd
  else{
    cout<<"The value "<<user_in<<" is an odd number\n";
  }
} 