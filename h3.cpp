#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string switchStr(char size[50]);

int main(){
  char Cstr[50];
  cout << "Enter a string of no more than 50 characters (no space allowed): ";
  cin >> Cstr;
  string answer = switchStr(Cstr); //calling the switch function
  cout <<"This string reversed is: "<< answer << endl;
}

string switchStr(char size[50]){
  char a = 'a';
  char b = 'b';
  char *head = &a;
  char *tail = &b;
  for (int j = 0; j < (strlen(size) / 2); j++){
    *head = size[j];
    *tail = size[strlen(size) - j - 1];
    size[j] = *tail;
    size[strlen(size) - j - 1] = *head;
  }
  return size;
  head = NULL;
  tail = NULL;
  delete head; delete tail;
}
