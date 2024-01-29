class Solution {
    private static int nextChar(String str, int cur){
        while(cur>-1 && str.charAt(cur) == '#'){
            int count = 1;
            for(cur--;cur>-1 && count>0;cur--){
                count+=str.charAt(cur) == '#'?1:-1;
            }
        }
        return cur;
    }
    
    public boolean backspaceCompare(String s, String t) {
        int i = nextChar(s, s.length()-1);
        int j = nextChar(t, t.length()-1);
        while(i>-1 && j>-1){
            if(s.charAt(i) != t.charAt(j)) return false;
            i = nextChar(s, --i);
            j = nextChar(t, --j);
        }
        return (i==-1 && j==-1);
    }
}