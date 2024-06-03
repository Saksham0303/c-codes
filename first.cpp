   //To find the repeating element in the array 

    #include <iostream>
    using namespace std;

    int main(){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        bool found = false;
        for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (arr[i] == arr[j]){
                cout<<"The element "<<arr[i]<<" is repeating"<<endl;
                found=true;
                break;
            }
        }
        if(found){
            break;
        }
    }
                if(!found){
                    cout<<"No element is repeating"<<endl; 
                }       
                return 0;
            }