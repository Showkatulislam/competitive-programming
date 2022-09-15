#include<bits/stdc++.h>

using namespace std;
typedef struct Points Point;
struct Points{
    int x,y;
};
int orientation(Point p,Point q,Point r){
    int val=((q.y-p.y)*(r.x-q.x))-((q.x-p.x)*(r.y-q.y));
    if(val==0)return 0;
    return (val>0)?1:2;
}
int main(){
    Point p1 = {0, 0}, p2 = {4, 4}, p3 = {1, 2};
    cout<<orientation(p1,p2,p3);

}