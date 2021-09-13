problem stmt: Given an array of length N, you need to find and return the sum of all elements of the array.

#include<iostream>
using namespace std;

//function
int sum(int input[], int n) {   
    if(n == 1){

    return input[0];
    }

    int smallSum = input[0];
    smallSum = smallSum + sum(input + 1, n-1);
    return smallSum;
}

//driver code
int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    cout << sum(input, n) << endl;
}


