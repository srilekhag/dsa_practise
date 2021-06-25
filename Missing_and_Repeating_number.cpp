class Solution{
public:
    int findTwoElement(int arr, int n) {
       
        int brr[2]; // array to store missing number and repeating number
        int k=arr[0];
        for(int i=1; i<n; i++){
            k = k^arr[i];          
        }
        for(int i=1; i<=n; i++){
            k = k^i;  
        }
        int a=0, b=0;
        //a^b = k;
        int u = k & ~(k - 1);
        
        for(int i=0; i<n; i++){
            
            if(u & arr[i]){
                a = a^arr[i];
            }
            else{
                b = b^arr[i];
            }
        }
        
        for(int i=1; i<=n; i++){
            
            
            if(u & i){
                a = a^i;
            }
            else{
                b = b^i;
            }
            
        }
        for(int i=0; i<n; i++){
            if(b == arr[i]){
                brr[0] = b;
                brr[1] = a;
                break;
            }
            else{
                if(a == arr[i]){
                    brr[0] = a;
                    brr[1] = b;
                    break;
                }
            }
        }
        int *p = brr;
        return p;
    }
};
