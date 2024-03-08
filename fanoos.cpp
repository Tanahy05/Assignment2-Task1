#include <iostream>

using namespace std;

int main()
{
    cout<<"please input a number: "
    int n;
    cin>>n;
    int d=n/2;
    int r=0;



    for(int i =1;i<=n/2+1;i++){
        for(int f=d;f>=1;f--){
            cout<<" ";
        }

        cout<<"*";

        for(int g=r;g>=1;g--){
                cout<<" ";

        }
        if(r!=0){
            cout<<"*";
        }
        d--;
        if(r==0){
        r++;}
        else{r=r+2;}
        cout<<endl;

    }

 d++;
         r=r-2;
    for(int i =1;i<n/2+1;i++){
         d++;
         r=r-2;
        for(int f=d;f>=1;f--){
            cout<<" ";
        }

        cout<<"*";

        for(int g=r;g>=1;g--){
                cout<<" ";

        }
        if(r>0){
            cout<<"*";
        }

        cout<<endl;

    }


    return 0;
}
