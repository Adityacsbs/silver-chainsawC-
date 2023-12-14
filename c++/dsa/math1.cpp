#include<iostream>
using namespace std;

void question1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void question2(int n){
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void question3(int n){
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
         if(n-i==0 ){
            cout<<"* ";
         }
          else if(j==i || j==1){
            cout<<"* ";
          } 
         else{
            cout<<"  ";

         }
        }
        cout<<endl;
    }
   
}
void question4(int n){
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<" ";
        }
        for(int j=i;j<=n;j++){
             
            cout<<"* ";
        }
    cout<<endl;
    }
}
void question5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=n;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void question6(int n){
    for(int i=n;i>0;i--){
        for(int j=i-1;j>0;j--){
            cout<<" ";
        }
        for(int j=i;j<=n;j++){
           if(j==i || j==n || i==1){
            cout<<"* ";
           }else{
            cout<<"  ";
           }
           
        }
        cout<<endl;
    }
}
void question7(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";        }
    cout<<endl;
    }
}
void question8(int n){
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";     
        
               }
    cout<<endl;
    }
}
void question9(int n){
   for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        if(j==1 || j==i || i==n){
            cout<<j<<" ";
        }else{
            cout<<"  ";
        }
    }
    cout<<endl;
   }
}

void question11(int n){
        
       for(int i=n;i>=1;i--){
        for(int j=i-1;j>0;j--){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
            if(j==1 || j==n-i+1 || i==1){
            cout<<j<<" ";
            }else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
       }
}

void question12(int n){
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            if(j==i || j==1 || i==n){
            cout<<i-j+1<<" ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    }




int main (){

    question1(5);
    cout<<"---------------------------------------------"<<endl;
    question2(5);
    cout<<"---------------------------------------------"<<endl;
    question3(5);
    cout<<"---------------------------------------------"<<endl;
    question4(5);
    cout<<"---------------------------------------------"<<endl;
    question5(5);
    cout<<"---------------------------------------------"<<endl;
    question6(5);
    cout<<"---------------------------------------------"<<endl;
    question7(5);
    cout<<"---------------------------------------------"<<endl;
    question8(5);
     cout<<"---------------------------------------------"<<endl;
    question9(5);
     cout<<"---------------------------------------------"<<endl;
    question11(5);
      cout<<"---------------------------------------------"<<endl;
    question12(5);
    return 0;
}