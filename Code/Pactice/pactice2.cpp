#include<bits/stdc++.h>

using namespace std;

typedef struct Points point;

struct Points{
    int x,y;
};
float Distance(point a,point b){
    return sqrt(pow((b.x-a.x),2)-pow((b.y-a.y),2));
}
int main(){
    point A{4,5},B{6,6},C{9,9};
    int ab=Distance(A,B);
    int bc=Distance(B,C);
    int ac=Distance(A,C);
    if(ab==bc==ac){
        cout<<"This equal arm triangle"<<endl;
    }else if(ab==bc||bc==ac|| ab==ac){
        cout<<"This is two equal arm triangle"<<endl;
    }
    else{
        cout<<"This is just triangle"<<endl;
    }
}