 #include<bits/stdc++.h>
 using namespace std;
 bool isPowerOfTwo(int x)
    {
        if(x == 0)
            return false;
        else
        {
            while(x % 2 == 0) x /= 2;
            return (x == 1);
            }
    }
int main(){
    cout<<isPowerOfTwo(4);
}