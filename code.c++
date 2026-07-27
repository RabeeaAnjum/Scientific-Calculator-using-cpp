#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a,b;
	char x;
    while(true){
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	cout<<"Enter S for Summation!"<<endl;
	cout<<"Enter D for Difference!"<<endl;
	cout<<"Enter P for Product!"<<endl;
	cout<<"Enter d for Division!"<<endl;
	cout<<"Enter p for Power function!"<<endl;
	cout<<"Enter C for Cosine!"<<endl;
	cout<<"Enter s for Sine!"<<endl;
	cout<<"Enter T for Tangent!"<<endl;	
	cout<<"Enter I for inverse of sin"<<endl;
	cout<<"Enter J for Inverse of cos!"<<endl;
	cout<<"Enter K for Inverse of tan!"<<endl;
	cout<<"Enter character:";
	cin>>x;
	if(x=='S')
	cout<<a+b<<endl;
	else if(x=='D')
	cout<<a-b<<endl;
	else if(x=='P')
	cout<<a*b<<endl;
	else if(x=='d')
	cout<<a/b<<endl;
	else if(x=='p')
	cout<<pow(a,b)<<endl;
    else if(x=='s')
	cout<<sin(a*180/M_PI)<<"\n"<<sin(b*180/M_PI)<<endl;
	else if(x=='C')
	cout<<cos(a*180/M_PI)<<"\n"<<cos(b*180/M_PI)<<endl;
    else if(x=='T')
	cout<<tan(a*180/M_PI)<<"\n"<<tan(b*180/M_PI)<<endl;
	else if(x=='I')
	cout<<asin(a*180/M_PI)<<"\n"<<asin(b*180/M_PI)<<endl;
	 else if(x=='J')
	cout<<acos(a*180/M_PI)<<"\n"<<acos(b*180/M_PI)<<endl;
	 else if(x=='K')
	cout<<atan(a*180/M_PI)<<"\n"<<atan(b*180/M_PI)<<endl;
	else
	cout<<"invalid operation!";
}
   return 0;	
}
