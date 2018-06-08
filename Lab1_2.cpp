int FindOutlier(std::vector<int> arr){
   int i;
   int a = 0;
   int b = 0;
   int result = 0;
   int arr1 = arr.size();
      for(i = 0; i<arr1; i++){
         if(arr[i]%2==0){
            a = a + 1;
         }
         else{
            b = b + 1;
         }
      }
      for(i = 0; i<arr1; i++){
         if(a>b){
            if(arr[i]%2!=0){
               result = arr[i];
            }
         }
         else{
            if(arr[i]%2==0){
               result = arr[i];
            }
         }
      }  
   return result;
}