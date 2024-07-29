""" you will be given an array with equal + & - elemnts
you have to rearrange arr[] in such manner : [+,-,+,-,+,-]
for e.g : arr[] = [3,1,-2,-5,2,-4] -> [3,-2,1,-5,2,-4] """
    
vector<int> alternateNumbers(vector<int>&a) {
    int n = a.size();
    vector<int> ans(n,0);
    int posIndex = 0;
    int negIndex = 1;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            ans[negIndex] = a[i];
            negIndex +=2;
        }
        else if(a[i]>0){
            ans[posIndex] = a[i];
            posIndex +=2;
        }
    }
    return ans;
}
