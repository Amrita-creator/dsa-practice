#include<iostream>
using namespace  std;

int decToBinary(int decNo){
    int ans = 0, pow =  1;
    while(decNo > 0){
    int rem = decNo % 2;
    decNo /= 2;
    ans +=(rem * pow);
    pow *= 10;
    }
    return ans;  
}

int main(){
    int decNo = 73;
    
       cout << decToBinary(decNo) << endl;
    
   return 0;
}

