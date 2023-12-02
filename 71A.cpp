#include <iostream>
#include <string>


using namespace std;


int main(){

    int n;
    cin>> n;

    string lines[n];

    for(int i =0 ; i< n; ++i){

        string line;
        cin >> line;

        lines[i] = line;

    }

    for(int i = 0; i<n ; ++i){

        string line = lines[i];

        int l = line.length();
        
        if(l>10){
            cout<< line[0]<< l-2 << line[l-1]<<endl;
            
        }else{
             cout<<line<<endl;
        }

    }

    return 0;
}



/*
#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s.length() > 10)
        {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}


*/