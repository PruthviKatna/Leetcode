#include<bits/stdc++.h>
using namespace std;
bool isLesser(int sf,int cf){
    if(sf < cf)
    return true;
return false;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int v[n];
        int sum = 0;
        for(int i=0 ;i<n;i++){
            cin >> v[i];
            sum+=v[i];
        }
        double avg =(double) sum/n ;
        int f = floor(avg) ;
        int c = ceil(avg);
        int sf = f*(n-1) , sc = c*(n-1);
        if(c==f)
            cout<<0<<endl;
        else{
            if(isLesser(sum-sf,sum-sc)){
                int rem = c - (sum-sf)+1;
                cout<< rem*(n-rem)<<endl; 
            }
            else{
                int rem = f - (sum-sc)+1;
                cout<< rem*(n-rem)<<endl; 
            }
        }
        
    }
}