class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len=digits.size();
        if(len==1&&digits[0]>9){
            digits[0]=digits[0]+1;
            return digits;
        }
        if(digits[len-1]<9){
            digits[len-1]=digits[len-1]+1;
            return digits;
        }
        deque<int>dq;
        int num=0;
        for(int i=0;i<len;i++){
            num=num*10+digits[i];
        }
        num++;
         while(num>0){
            int rem=num%10;
            dq.push_front(rem);
            num/=10;
        }
        vector<int>ans;
        for(int i=0;dq.size();i++){
            ans.push_back(dq.front());
            dq.pop_front();
        }
        return ans;



        
    }
};
