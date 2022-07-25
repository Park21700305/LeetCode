class Solution {
public:
    int calPoints(vector<string>& A) {
        stack<int> score;
        int sum=0;
        for(int i=0; i<A.size(); i++)
        {
            auto s=A[i];
            if(s=="+")
            {
                int x=score.top();
                score.pop();
                int y=score.top();
                sum=sum+x+y;
                score.push(x);
                score.push(x+y);
            }
            else
                if(s=="D")
                {
                    int x=score.top();
                    sum=sum+x*2;
                    score.push(x*2);
                }
                else
                    if(s=="C")
                    {
                        int x=score.top();
                        sum=sum-x;
                        score.pop();
                    }
                    else
                    {
                        int x=stoi(s);
                        score.push(x);
                        sum=sum+x;
                    }
        }
        
        return sum;
    }
        
        
};

