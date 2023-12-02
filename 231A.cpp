#include <iostream>

using namespace std;



int main(){

    int n;
    cin >> n;

    cin.ignore();

    int p = 0 ;  

    
    for(int j=0;j<n;j++){

        string line;

        getline(cin,line);

        int l = line.length();

        int k=0;

        for(int i=0; i<l ; i++){

            if(line[i]=='1'){
                k++;
            }
        }

        if (k>=2){
            p++;
        }
        
    }
    
    cout << p;

    return 0;
}