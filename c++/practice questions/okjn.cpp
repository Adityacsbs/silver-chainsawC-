/*#include<iostream>

using namespace std;
int main (){
	int a;
	cin>>a;

	int arry[a];
	for(int i=0;i<a;i++){
		cin>>arry[i];
	}
	for(int i=0;i<a;i++){
		cout<<arry[i]<<endl;
	}


	return 0;
}
#include<iostream>

using namespace std;
	struct student{
		int roll_no;
		int age;
		string name;

	};
int main (){

	struct student one={1,19,"adityaraj"};
	cout<<one.name<<" "<<one.roll_no<<" "<<one.age<<" "<<endl;

	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
   int a[x];
	
	for(int i=0;i<x;i++){
	    cin>>a[i];
	}
	for(int i=0;i<x;i++){
	    cout<<a[i]<<endl;
	    if(i==42){
	    break;}
	}
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int a[x];
	    for(int i=0;i<a[x];i++){
	        cin>>a[i];
	    }
	    int b[x];
	    for(int i=0;i<b[x];i++){
	        cin>>b[i];
	    }
		for(int i=0;i<a[x];i++){
			cout<<a[i]<<"a hai"<<endl;
		}
		for(int i=0;i<b[x];i++){
			cout<<b[i]<<"b hai"<<endl;
		}
	}
	return 0;
}
#include <iostream>
using namespace std;

int main() {
    int t;int count=0;
    cin>>t;
    while(t--){
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    for(int i=0;i<a;i++){
        if(b[i]<1000)
            count++;
        
    }cout<<count<<endl;
    }
	
	return 0;
}
#include<iostream>

using namespace std;
int main (){
	int  a;
	cin>>a;
	int c=1;
	for(int i=a;i>0;i--){
		c=c*i;
	}cout<<c<<endl;

	return 0;
}*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    char x;
	    cin>>x;
	    char b=b,B=B,c=c,C=C,d=d,D=D,F=F,f=f;
	    if(x==B||x==b){
	        cout<<"BattleShip"<<endl;
	    }else if(x==c||x==C){
	        cout<<"Cruiser"<<endl;
	        
	    }else if(x==D||x==d){
	        cout<<"Destroyer"<<endl;
	    }else if(x==F||x==f)
	    {
	        cout<<"Frigate"<<endl;
	    }
	}
	return 0;
}


