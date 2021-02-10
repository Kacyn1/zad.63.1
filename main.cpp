#include <iostream>
#include <fstream>

using namespace std;

class cos{
    public:
ifstream plik1;
klasa();
};
klasa::klasa(){
plik1.open("ciagi.txt");
}

class klasa_druga{

public:

bool okej(string x){
	string a,b;

        	if(x.length()%2==1){
           		 return false;
        	}
        	for(int i=0;i<x.length()/2;i++){
           		 a = a + x[i];
        	}
       		for(int i=x.length()/2;i<x.length();i++)
       		{
          		 b = b+ x[i];
       		}
       		for(int i=0;i<x.length()/2;i++){
      	  		if(a[i] != b[i]){
            	return false;
        	}
       }
    return true;
    }
};
int main()
{
   string s;
   cos z;
   klasa_druga p;

   while(!z.plik1.eof()){
   	z.plik1>>s;

    	if(p.okej(s)){
        	cout<<s<<endl;
   	}
   }
    return 0;
}
