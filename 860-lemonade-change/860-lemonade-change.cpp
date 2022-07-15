class Solution {
public:
    bool lemonadeChange(vector<int>& v) {
        
        int a=0,b=0,c=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==5){
                a++;
            }
            else if(v[i]==10){
                if(a>0){
                    a--;
                    b++;
                }
                else
                    return false;
            }
            else{
                if(a>=3 || (a>0 && b>0)){
                    if(a>0 && b>0){
                        a-=1;
                        b-=1;
                    }
                    else
                        a-=3;
                }
                else
                    return false;
            }
        }
        return true;
        
    }
};