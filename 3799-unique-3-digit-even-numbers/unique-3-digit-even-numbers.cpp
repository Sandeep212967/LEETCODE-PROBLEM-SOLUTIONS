class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int count =0;
        int n=digits.size();
        for(int i=100 ; i<=999 ;i++){
           if(i%2!=0) 
            continue;
            int a= i/100;  //hundreds place
            int b=(i/10) % 10;  //tenth
            int c = i % 10;    // unit
            
            int freq[10]={0};

            for(int d : digits){  
                freq[d]++;
            }
            freq[a]--;
            freq[b]--;
            freq[c]--;
            if(freq[a]>=0 && freq[b]>=0 && freq[c]>=0){
                count++;
            }
           }
        return count;
    }
};