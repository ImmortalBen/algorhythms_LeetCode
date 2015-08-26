class Solution {
public:
    int countPrimes(int n) {
        if (n<2){
            return 0;
        }
        vector<bool> pri(n,true);
        pri[0]=false;pri[1]=false;pri[2]=true;
        for (int i=2;i*i<n;i++){
            if (pri[i])
            for (int j=i*i;j<n;j+=i){
                pri[j]=false;
            }
        }
        return count(pri.begin(),pri.end(),true);
    }
};