//this program can be efficiently done using shell sort which follow gap method to sort the elements
class Solution{
    public:
        //Function to merge the arrays.
      
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
           int gap = n + m;
           int i,j; 
           gap = (gap/2) + (gap%2);  //if gap is not divisible by 2 , consider ceil value
           while(gap > 1){
               
              //traverse through first array
               for(i = 0; i+gap < n; i++){
                    if(arr1[i] > arr1[i+gap]){
                        swap(arr1[i], arr1[i+gap]);
                    }   
               }
               
             //traverse through both first and second arrays
               for(j= gap > n ? (gap-n) : 0;  i<n && j<m; i++,j++){
                   if(arr1[i] > arr2[j]){
                       swap(arr1[i], arr2[j]);
                   }
               }
               
             //traverse through second array
               if(j<m){
                   for(j=0; j+gap<m; j++){
                       if(arr2[j] > arr2[j+gap]){
                           swap(arr2[j], arr2[j+gap]);
                       }
                   }
               }
             gap = (gap/2) + (gap%2);  
           }
           //here in above while loop will be executed till gap > 1
           
          //trvaerse through  first array once  and then with second array,since we are having gap = 1
           for(int k=1; k<n; k++){
            if(arr1[k-1] > arr1[k]){
                swap(arr1[k], arr1[k-1]);
            }  
         } 
        
        if(arr1[n-1] > arr2[0]){
            swap(arr2[0], arr1[n-1]);
        }
        
        for(int k=1; k<m; k++){
            if(arr2[k-1] > arr2[k]){
                swap(arr2[k-1], arr2[k]);
            }
        }
        }
};
