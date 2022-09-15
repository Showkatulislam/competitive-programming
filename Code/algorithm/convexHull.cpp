#include<bits/stdc++.h>
using namespace std;
typedef struct Points Point;

struct Points{
    int x,y;
};
int LeftBottom(Point a[],int n){
    int Ymin=a[0].y,Xmin=a[0].x,index;
    for(int i=1;i<n;i++){
        if(a[i].y<Ymin || (a[i].y==Ymin &&(a[i].x<Xmin))){
            Ymin=a[i].y;
            Xmin=a[i].x;
            index =i;
        }
    }
    return index;
}
int main()
{
    Point point[]={{0, 3}, {1, 1}, {2, 2}, {4, 4},{0, 0}, {1, 2}, {3, 1}, {3, 3}};
    cout<<LeftBottom(point,8);

}