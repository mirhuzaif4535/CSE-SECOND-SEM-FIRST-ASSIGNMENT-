#include <stdio.h>
int FB(int n){
  if(n == 0 || n==1){
     return n;
  }
return FB(n-1)+FB(n-2)
  }
