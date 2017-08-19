#include <iostream.h>
#include <math.h>
#include <conio.h>

int main(){
int a,b,c,d;



cout<<"Enter 3 number a,b,c for ax^2+bx+c and  \n";
cout<<"Enter a :";
cin>>a;
cout<<"Enter b :";
cin>>b;
cout<<"Enter c :";
cin>>c;
d=(b*b)-(4*a*c);
if (d>0){
if (a==0){
float r= -c/b;
cout<<"result = "<<r;
}else{
float r1= ((-b)+sqrt(d))/(2*a);
float r2= ((-b)-sqrt(d))/(2*a);
cout<<"r1 = "<<r1<<"  r2 = "<<r2;
}
}else if(d==0){
if (a==0){
cout<<"No Exist result a is zero";
}else{
float r1=-b/(2*a);
cout<<"r1 , r2 ="<<r1;
}
}else if(d<0){
cout<<"No Exist result d is nagative";
}

getch();
return 0;

}