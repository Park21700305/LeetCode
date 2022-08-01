class Solution {
public:
    int dayOfYear(string date) {
        int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        int ymd[3];
        int i=0,answer=0;
        string tmp = "";
        date += '-';
        
        for(int j=0 ; j<11 ; j++){
            if(date[j] != '-') tmp += date[j];
            else {
                ymd[i] = stoi(tmp);
                tmp = "";
                i++;
            }
        }
        if(ymd[0]%400 == 0 || (ymd[0]%100!=0 && ymd[0]%4==0) ) days[1] = 29;

        for(int j=0 ; j<ymd[1]-1 ; j++){
            answer += days[j];
        }
        answer += ymd[2];
        
        return answer;
    }
};
