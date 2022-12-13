#include "stats.h"
// Include header files

// Implement the functions average, min, max, median

//average
double average(int x, int y, int z) { 
  double average = ((double)x + y + z)/3;
  return average; }

//min
int min(int x, int y, int z){ 
  int min = x;
  if (x<y&& x<z){
    min = x;
  } 
  else if (y < x && y < z){
    min = y;
  }
  else{
    min = z;
  }
  return min; }

//max
int max(int x, int y, int z){ 
  int max = 0;
  if (x>y && x>z){
    max = x;
  }
  else if(y>x && y>z){
    max =y;
  }
  else{
    max = z;
  }
  return max;}

//median
int median(int x, int y, int z){ 
  int median = 0;
  if((x>y || x>z)&&(x<y||x<z)){
    median = x;
  }
  else if((y<x||y<z)&&(y>x||y>z)){
    median = y;
  }
  else{median = z;}
  return median; }
