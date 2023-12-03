#include <iostream>

using namespace std;


int main(){

    int n, k , i ,counter = 0,score[10000];
    
    cin >> n >> k ;


    for(i = 0; i<n ; i++)
        cin>>score[i];

    
    for(i=0 ; i<n ;i++){ 
        if(score[i]>= score[k-1] && score[i]>0){
            counter++;
        }
    }

    cout<<counter<<endl;

    return 0;

}