#include<bits/stdc++.h>
using namespace std;
int hightPowerOfTwo(int num){
    int i=0;
    int output=0;
    while (i<8*sizeof(unsigned int))
    {
       int curNum=pow(2,i++);
           
        if(curNum>num)
            break;
        output=curNum;
    }
    return output;
    
}
int main(){
    cout<<hightPowerOfTwo(15);
}