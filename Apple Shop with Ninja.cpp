long long appleAndCoupon(int n, int m, vector<int> arr){
    // Write your code here.
    sort(arr.begin(),arr.end(),greater<int>());
    vector<long long int>a;
    int i=0;
    while(m>0){
        
        a.push_back(arr[i]);
        i++;
        m--;
    }
    long long int x = *min_element(a.begin(),a.end());
   
    long long int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
 
    return sum-x;
}
