#include <iostream> 
#include "disSet.h"
//#include <string>
using namespace std; 
int main() { 
  int op;
  DisjSet A(25); 
  A.leer();
  A.Union("José", "Jorge"); 
  A.Union("Rodrigo", "Fernanda"); 
  A.Union("Gerardo","Rogelio");
  A.Union("Luis", "Juan"); 
  A.Union("Juana", "Josefina"); 
  A.Union("Manuel","Mario");
  /////////////////////////////////////////
  cout << A.amistad("José", "Jorge");
  cout << A.amistad("Rodrigo","Angel");
  cout << A.amistad("Mario", "Fernanda");
  cout << A.amistad("José","Jorge");  
  //////////////////////////////////////

} 
