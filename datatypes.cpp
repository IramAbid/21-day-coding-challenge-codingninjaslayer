// 1st problem 
#include<iostream>
#include<map>
using namespace std;

int dataTypes(string type) {
	// Write your code here
	int datatype;
        map<string, int> typesizes = {
          {"Character", sizeof(char)},
		  {"Integer", sizeof(int)},
		  {"Long", sizeof(long)},
		  {"Double",sizeof(double)},
		  {"Float",sizeof(float)},
        };
        
		if(typesizes.find(type)!=typesizes.end()){
			datatype=typesizes[type];
		}
		else{
			cout<<"Unknown data type"<<endl;
		}
		return datatype;

}

int main(){
    string type;
    cin>>type;
    cout<<dataTypes(type)<<endl;
    return 0;
}
