class Solution {
public:
   
    int coinChange(vector<int>& coins, int amount) {
        if(amount ==0) return 0;

        queue<int> q;
        q.push(0);

        int res =0;
        vector<bool> seen(amount+1,false);
        seen[0] = true;
        while(!q.empty()){
            res++;
            int size = q.size();
            for(int i =0;i<size;i++){
                int cur = q.front();
                q.pop();
                for(int coin :coins){
                    int next = cur + coin;
                    if(next == amount) return res;

                    if(next > amount || seen[next]) continue;
                    seen[next] = true;
                    q.push(next);
                }
         }
        }
        return -1;
    }
};
