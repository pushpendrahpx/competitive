vector <int> max_of_subarrays(int arr[], int n, int k)
    {
        int maxnum = INT_MIN;
        int i=0, j= 0;
        vector<int> res;
        for(j=0; j < k; j++){
            maxnum = max(maxnum,arr[j]);
        }
        
        res.push_back(maxnum);
        while(j <= n){
            
            if(maxnum < arr[j]){
                maxnum = arr[j];
            }
            
            res.push_back(arr[j]);
            
            
            i++;
            j++;
            
        }
        
        return res;
    }