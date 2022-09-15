#include <bits/stdc++.h>

using namespace std;
void printlogic()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                if ((i && i) || k)
                {
                    cout << i << " " << j << "  " << k << " " << 1 << endl;
                }
                else
                {
                    cout << i << " " << j << "  " << k << " " << 0 << endl;
                }
            }
        }
    }
}
void print(){
    int x,y,z,xV,yV,zV;
    x=y=z=xV=yV=zV=0;
    for (int i = 0; i < 8; i++)
    {
       if(z==1){
           if(zV==0)
            zV=1;
           else
           zV=0;
           z=0;
       }
       if(y==2){
           if(yV==0)
             yV=1;
           else
            yV=0;
           y=0;
       }
       if(x==4){
           if(xV==0)
             xV=1;
           else
             xV=0;
           x=0;
       }
       if((x&y)|y){
           cout<<xV<<" "<<yV<<" "<<zV<<" "<<1<<endl;
       }else{
           cout<<xV<<" "<<yV<<" "<<zV<<" "<<0<<endl;
       }
       x++;y++;z++;
    }
    
}
int main()
{
    print();
}