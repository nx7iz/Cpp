#include <iostream>
#include <cstring>

using namespace std;

int main() {
  // Null terminator (\0)
  // char name[5] = { 'L', 'i', 'q', 'x' , '\0'};
  
  // String literal(value)
  char name[50] = "Liqx";
  char lastName[] = "Ruxus";
  
  // Char literal(value)
  // name[0] = 'l';

  // String functions

  // // 1. strlen (gets the length of the string)
  // cout << strlen(name) << endl;

  // // 2. strcat (Concatenate (combine)) 
  // strcat(name, lastName);
  // cout << name << endl;

  // // 3. strcpy (copies 2nd arg string into 1st one)
  // strcpy(name, lastName);
  // cout << name << endl; // Ruxus

  // 4. strcmp (compare strings)
  /*
    if name before lastname alphabetically -> -1
    if name after lastname -> 1
    if name and lastname equal -> 0
  */
  if (strcmp(name, lastName) == 0) 
    cout << "Equal";
  // cout << strcmp(name, lastName);

}