class Solution {
public:
    int numberOfSubstrings(string s) {
     
        int counta=0,countb=0,countc=0;
        int i =0;
        int j =0;
        int res =0;
        for(;i<s.length();i++){
            
            while(!(counta&&countb&&countc) &&(j<s.length())){
                switch(s[j]){
                    case 'a':
                        counta++;
                        break;
                    case 'b':
                        countb++;
                        break;
                    case 'c':
                        countc++;


                    }
                j++;
            }
            
            if((counta&&countb&&countc))
                res+=s.length()-j+1;
            if(s[i]=='a')
                counta--;
            else if (s[i]=='b')
                countb--;
            else if(s[i]=='c')
                countc--;
            
            
        }
     return res;   
    }
};
