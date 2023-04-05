#include <iostream>
#include<cmath>
unsigned factorial(int arg){
    if (arg<=0){
        return(1);
    }
    int var=1; 
    for(int i=arg; i>=1 ;i--){
        var= var * i;
    }
        return(var);
}
unsigned interval(double start, double end) {
    int a=0;
  if(start==end){
    return(0);
  }
  else{
    for(int i = std:: ceil(start); i<= std::floor(end); i++){
        a+=1;

    }
  }
  return(a);
}

int main() {
  char test = 0;
  std::cin >> test;
  switch (test) {
    case 'f': {
      int arg = 0;
      std::cin >> arg;
      std::cout << factorial(arg) << std::endl;
    }
    break;
    case 'i': {
      double arg0 = 0;
      double arg1 = 0;
      std::cin >> arg0 >> arg1;
      std::cout << interval(arg0, arg1) << std::endl;
    }
    break;
  }
}