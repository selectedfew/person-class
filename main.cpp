/*
  A Person class object taking more than one argument
  as input when instantiated in the scope. Old regular pointer
  where memory is deallocated using manual intervention.
  
  And all you gotta do is this...
  g++ -std=c++11 main.cpp person.cpp -o app
  
  https://selectedfew.io
  selectedfew@yahoo.com  
*/

#include "person.h"

int main(int argc, char* argv[]){
  Person* p1 = new Person("Ricardo","Ortega",'m',33,133.0f,true);
  p1->about();
  delete p1;
  return 0;
}
