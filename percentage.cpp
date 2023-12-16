#include<iostream>
using namespace std;
int main()
{
	while(true)
	{
	int eng,mat,com,phy,ur,isl;
  float marks,per;
  cout<<"enter your english marks"<<endl;
  cin>>eng;
  cout<<"enter your maths marks"<<endl;
  cin>>mat;
  cout<<"enter your physics marks"<<endl;
  cin>>phy;
  cout<<"enter your urdu marks"<<endl;
  cin>>ur;
  cout<<"enter your computer marks"<<endl;
  cin>>com;
  cout<<"enter your islamiyat marks"<<endl;
  cin>>isl;
  marks=eng+mat+phy+ur+com+isl;
  cout<<"total marks is :"<<marks<<endl;
  per=(marks/600)*100;
  cout<<"your per is :"<<per<<"%"<<endl;
}
  return 0;  
}


