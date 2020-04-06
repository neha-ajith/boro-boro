#include <iostream> 
#include <string.h> //spelling of string
using namespace std;
int main()
{
	char str[100];
	char ch; 
	int Lindex,Findex; 
	cin>>str; //semicolon was missing
	cin>>ch;
	Lindex = getIndex(str,ch); //getLIndex() doesn't exist
	Findex= getIndex(str,ch); //getFIndex() doesn't exist
	if(Lindex!=-1)
		cout<<Findex<<endl<<Lindex;
	else
		cout<<"NOT FOUND"<<endl;
	return 0;	
}
int getLIndex(char string,char  c)
{
	int size = strlen(string), i=0;
	while(i<size)
	{
		
		if(string[i]=c){
		    return i;
		   break;
		}	
		i++; 
	}
	
}
int getFindex(string, int c) //c wasn't declared
{
	int size = strlen(string); //strlen
	int i=size; 
	while( i>=0){ //semicolon after while statement		
		if(string[i]==c){
		    return i;
            break;
		}	
	i--;
}
		
}