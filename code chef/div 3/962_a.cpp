#include<bits/stdc++.h>
using namespace std;
int main(){
    int tests;
    cin>>tests;
    int legs[tests];
    for(int i=0;i<tests;i++){
        cin>>legs[i];
    }
    
    for(int i=0; i<tests; i++){
               
        if(legs[i]%4 == 0 || (legs[i]-1)%4 == 0){
            if(legs[i]%4==0){
                cout<<legs[i]/4<<endl;
            }
            else{
                cout<<(legs[i]-1)/4<<endl;
            }
        }
        else if(legs[i]%2==0 || (legs[i]-1)%2==0){
            if(legs[i]%2==0){
                if(legs[i]/2>2){
                   int min_animals = ((legs[i]-2)/4)+1;
                    cout<<min_animals<<endl;
                }
                else{
                    cout<<legs[i]/2<<endl;
                }
            }
            else{
                if((legs[i]-1)/2>2){
                    int min_animals = (((legs[i]-1)-2)/4)+1;
                    cout<<min_animals<<endl;
                }
                else{
                    cout<<(legs[i]-1)/2<<endl;
                }

            }
                
            
        }
    }
    cout<<"done";

}