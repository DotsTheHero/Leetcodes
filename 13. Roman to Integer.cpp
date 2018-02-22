class Solution {
public:
    int romanToInt(string s) {
        char prev='.';
        int total=0;
        for (char& c : s)
        {
            if(c=='M')
            {
                if(prev=='C')
                {
                    total+=800;
                }
                else
                    total+=1000;
            }
            else if(c=='D')
            {
                if(prev=='C')
                {
                    total+=300;
                }
                else
                    total+=500;
            }
            else if(c=='C')
            {
                if(prev=='X')
                {
                    total+=80;
                }
                else
                    total+=100;
            }
            else if(c=='L')
            {
                if(prev=='X')
                {
                    total+=30;
                }
                else
                    total+=50;
            }
            else if(c=='X')
            {
                if(prev=='I')
                {
                    total+=8;
                }
                else
                    total+=10;
            }
            else if(c=='V')
            {
                if(prev=='I')
                {
                    total+=3;
                }
                else
                    total+=5;
            }
            else if (c=='I')
            {
                total+=1;
            }
            prev=c;
        }
        return total;
    }
};