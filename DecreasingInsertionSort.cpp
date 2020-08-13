#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "How many numbers?" << endl ;
    cin >> n;
    int array[n];
    
    for(int i=0;i<n;i++){
        cin >> array[i];
    }

    for (int j=1;j<n;j++){
        int i,key,temp;
        i=j-1;
        key = array[j];

           while(i>=0 && array[i]<key){
            temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
            i--;
           }
           array[i] = key; 

        } 
        
    for(int i=0;i<n;i++){
        cout << array[i] << "  ";
    }  
return 0;
}
