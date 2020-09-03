#include<iostream>
using namespace std;
class zoo {
    public:
        int cost,area,number,earea;
};
int main()
 {
     zoo z[3];
     int total,add;
     zoo h,c,a;
     cin>>h.cost>>c.cost>>a.cost;
     cin>>h.area>>c.area>>a.area;
     cin>>h.number>>h.earea;
     cin>>c.number>>c.earea;
     cin>>a.number>>a.earea;
     cin>>total;
     if(h.area+c.area+a.area<total){
        cout<<"min cost="<<(h.number*h.earea*h.cost)+(c.number*c.earea*c.cost)+(a.number*a.earea*a.cost);
        exit(1);
    }
    if(h.area+c.area+a.area==total){
        cout<<"min cost="<<(h.area*h.cost)+(c.area*c.cost)+(a.area*a.cost);
        exit(1);
    }
    int temp = total;
    add = (h.number*h.earea*h.cost)+(c.number*c.earea*c.cost)+(a.number*a.earea*a.cost);
    temp = temp-((h.number*h.earea)+(c.number*c.earea)+(a.number*a.earea));
    h.area = h.area-(h.number*h.earea);
    c.area = c.area-(c.earea*c.number);
    a.area = a.area-(a.earea*a.number);
    
    
    if (h.cost >= c.cost && h.cost >= a.cost) {
        z[0]=h;
        if(c.cost>a.cost){
            z[1]=c;
            z[2]=a;}
        else{
        z[1]=a;
		z[2]=c;
		}}
  
    if (c.cost >= h.cost && c.cost >= a.cost){ 
        z[0]=c;
        if(h.cost>a.cost){
            z[1]=h;
            z[2]=a;}
        else{
        z[1]=a;
		z[2]=h;}}
  
    if (a.cost >= h.cost && a.cost >= c.cost){ 
        z[0]=a;
        if(c.cost>h.cost){
            z[1]=c;
            z[2]=h;}
        else{
        z[1]=h;
		z[2]=c; }}
        
        if(temp-z[2].area<=0){
            add = add + temp*z[2].cost;
            cout<<add;
            exit(1);
        }else{
            add = add + z[2].area*z[2].cost;
            temp=temp-z[2].area;
        }
        
        if(temp-z[1].area<=0){
            add = add + temp*z[1].cost;
            cout<<add;
            exit(1);
        }else{
            add = add + z[1].area*z[1].cost;
            temp=temp-z[1].area;
        }
        
        if(temp-z[0].area<=0){
            add = add + temp*z[0].cost;
        }
        cout<<add;
        
  	return 0;
}
