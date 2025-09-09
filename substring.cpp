#include<iostream>
using namespace std;
main()
{
	string str="Himanshu";
	int start,end;
	cout<<"enter the substring starting index - ";
	cin>>start;
	cout<<"enter the ending index of substring - ";
	cin>>end;
	if(start<0)
	{
		cout<<"wrong starting index";
	}
	else if(end>=str.length())
	{
		cout<<"wrong end index";
	}
	else
	{
	for(int i=start;i<=end;i++)
	{
		cout<<str[i];
	}
    }
}
