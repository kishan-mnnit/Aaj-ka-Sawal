
int countPrimes(int n) {
        vector<bool> countPrime(n+5,true);
        int i,count=0;
        countPrime[0]=countPrime[1]=false;
        for(i=2;i<n;++i){
            if(countPrime[i]==true){
                count++;
                for(int j=2*i;j<n;j+=i)
                    countPrime[j]=false;
                    
            }
        }
       return count;
  }
