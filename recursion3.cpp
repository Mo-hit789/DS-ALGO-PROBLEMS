/*
PROBLEM STMT: Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
using recursion.
*/

#include <iostream>
#include <math.h>
#include <iomanip>

//FUNCTION
#include<cmath>
double geometricSum(int k) {
    // Write your code here
    
    if(k==0){
      return 1;
    }
    
     double ans = geometricSum(k-1);
    
     ans = ans + (1/pow(2,k));
    
    return ans;
    
}

//DRIVER CODE
int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}



