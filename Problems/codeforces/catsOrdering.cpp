#include<iostream>
using namespace std;

void reOrdering(int n){
    int j;
    if(n%2==0)
        {
            for( int i =1 ;i<n;i = i+2){
                cout<< i+1 <<" "<< i <<" ";
            }
            cout<<endl;
        }
        else{
               for( j =1 ;j<n-1;j = j+2){
                        if(j+1<n-1)
                        cout<< j+1 <<" "<< j <<" ";
                        else
                        cout<<j+1<<" ";
                }
                if(n>1)
                 cout<<j<<" "<<j-2<<" ";
                else
                    cout<<j<<" ";
                cout<<endl;
        }
}
int main(){
    int t ; 
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        reOrdering(n);
    }
}