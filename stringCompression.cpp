class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();

        while(i<n)
        {
            int j = i+1;
            while(j<n && chars[i] == chars[j]){
                j++;
            }

            //yaha kab aaoage?
            //jab ya toh vector poora traverse ho chuka hoga.
            //ya fir naya character encounter ho.

            //old char ko store karlo

            chars[ansIndex++] = chars[i];

            int count = j-i;

            if(count > 1){
                //converting count into single digit and saving in answer.
                string cnt = to_string(count);
                for(char ch: cnt)
                {
                    chars[ansIndex++] = ch;
                }
                
            }
            
            //moving to new different character
            i = j; 
        }
        return ansIndex;
    }
};