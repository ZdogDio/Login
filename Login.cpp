#include<iostream>
#include<string>
using namespace std;
void main(){
 char n ; 
 string User,pass,pass1,User1 ;
 do{
 cout << "//////////Menu//////////\n";
 cout << "1.Register\n";
 cout << "2.Login\n";
 cout << "Q.Exit Program\n";
 cout << "------------------------\n";
 
 cout << "Enter Menu : ";
 cin >> n ;
 if (n == '1'){
  cout << "*********Register*********\n";
  cout << "Input Username : ";
  cin >> User;
  cout << "Input password : ";
  cin >> pass;}
   else if (n == '2'){
  cout << "*********Login**********\n";
  cout << "Input Username : ";
  cin >> User1;
  cout << "Input password : ";
  cin >> pass1;
 
  if (User1 == User && pass1 == pass){
   cout << "Username or Password correct^___^\n";}
  else { 

   do {
   cout << "!!!!Username or Password incorrect Please try again!!!!\n";
  cout << "Input Username : ";
  cin >> User1;
  cout << "Input password : ";
  cin >> pass1;
  } while(User1 != User ,pass1 != pass);
  }
   }
 } while( n != 'Q');

  cout << "Exit Program....\n";
}