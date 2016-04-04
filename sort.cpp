#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
using namespace std;
void sort(vector<int> &W,int size);
int main(){

int size,total_weight=0;


ifstream inFile("file.in",ios::in);
ofstream outFile("file.out",ios::out);
if(!inFile){cerr<<"Failed opening"<<endl;exit(1);}
if(!outFile){cerr<<"Failed opening"<<endl;exit(1);}

inFile>>size;				//read the first line (total cows)
vector<int> W(size);

for(int i=0;i<size;++i)	//read all of the cows's weight in the vector W
{
	inFile>>W.at(i);
}

sort(W,size);

for(int j=size-1;j>(size-6);j--)
{
	total_weight=total_weight+W.at(j);
}
cout<<total_weight<<endl;


inFile.close();
outFile.close();
return 0;
}

void sort(vector<int> &W,int size){

int moveitem,insert;

for(int next=1;next<size;next++)
{
	insert=W.at(next);
	moveitem=next;
	while((moveitem>0)&&(W.at(moveitem-1)>insert))
	{
		W.at(moveitem)=W.at(moveitem-1);
		--moveitem;
	}

	W.at(moveitem)=insert;
}

}
