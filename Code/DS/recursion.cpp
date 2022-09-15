#include<bits/stdc++.h>

using namespace std;
//tailrecursion
void tailR(int n){
    if(n>0){
        cout<<n<<"  ";
        tailR(n-1);
    }
}
//Head Recursion 
void headRec(int n){
    if(n>0){
        headRec(n-1);
        cout<<n<<" ";
    }
}
//tree recursion 
void treeRec(int n){
    if(n>0){
        cout<<n<<"  ";
        treeRec(n-1);
        treeRec(n-1);
    }
}
int mixRec(int n){
    if(n>2){
        cout<<n<<" ";
        int x= mixRec(n-1)+n;
        int y=mixRec(n-1)+n;
        return x+y;
    }
    return 0;
}
void b(int n);
void a(int n){
    if(n>0){
        cout<<"From b"<<n<<endl;
        b(n-2);
    }
}
void b(int n){
    if(n>0){
        cout<<"From a"<<n<<endl;
        a(n+1);
    }
}
/*                         1
                        1       1
                    1       2       1
                1       3       3       1
            1       4       6       4       1
                        ncr=n!/r!(n-r)!
                             0c0    
                        1c0         1c1
                    2c0         2c1     2c2

                         ncr=n-1cr-1+n-1cr  */
int com(int n,int r)
{
    if(r==0 ||n==r)return 1;
    return com(n-1,r-1)+com(n-1,r);
}
int main(){
   cout<<com(4,3);
}