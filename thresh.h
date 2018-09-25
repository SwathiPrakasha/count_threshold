

/*
   This is header file for the thresh.cc program.
   this file consists of all the headers and using declarations required for the thresh.cc program
*/

#ifndef THRESH_H
#define THRESH_H

#include<iostream>
#include<fstream>
#include<string>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::cerr;

/* This is function to check wheather the user input is negative and floating value
 the function take int as parameter and exit when the if condition becomes true
 */
int errChk();

#endif   // ending THRESH_H
