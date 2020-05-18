#include<iostream>

using namespace std;

struct diem
{
    int v;
    int t;
};
void nhapdiem(diem& d)
{
    cin>>d.v>>d.t;

}
void nhapmangdiem(struct diem md[],int n)
{

    for(int i=0;i<n;i++)
        nhapdiem(md[i]);

}
void inmangdiem(struct diem md[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"diem cua sv thu "<<i+1<<" la "<<md[i].v<<" "<<md[i].t<<endl;
    }
}
double diemtbmontoan (diem md[],int n)
{
    double tb=0;
    for(int i=0;i<n;i++)
    tb=tb+md[i].t;
    return tb/n;

}
void maxx(diem md[],int n)
{    int t[100];
for(int i=0;i<n;i++)
    t[i]=0;
t[1]=1;
cout<<" tong diem cua sv cao nhat la "<<endl;
    int m=md[1].v+md[2].t;
    for(int i=1;i<n;i++)
        if((md[i].v+md[i].t)>m)
        m=md[i].v+md[i].t;
      for(int i=0;i<n;i++)
         if((md[i].v+md[i].t)==m)
         cout<<"sv thu "<<i+1<<" "<< md[i].v<<" "<<md[i].t<<endl;
}
int main()
{
    int n;
   struct diem d,md[100];
    cout<<"nhap so sv "<<endl;
    cin>>n;
    nhapmangdiem(md,n);
    inmangdiem(md,n);
    cout<<"diem tb mon toan la "<<diemtbmontoan(md,n);
    maxx(md,n);

    return 0;

}
