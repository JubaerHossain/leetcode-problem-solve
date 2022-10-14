 int right = 1;
        for(int i=n-1;i>=0;i--){
            ans[i] *= right;
            right *= nums[i];
        }