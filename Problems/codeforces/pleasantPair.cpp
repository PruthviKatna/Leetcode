
#include<iostream>
#include<vector>
using namespace std;

void pleasantPair(vector<int> &v,int n){
    int count = 0;
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
             if(i+j+2 == v[i]*v[j])
                count++;
        }
    }
    cout<<count<<endl;
}
int main(){
int t;
cin>>t;
while(t--){
    int n ,temp; 
    cin>>n;
    vector<int> v;
    for(int i = 0;i< n;i++){
        cin >> temp;
        v.push_back(temp);
    }
    pleasantPair(v,n);
}
}