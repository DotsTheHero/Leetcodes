class Solution {
public:
    string convert(string s, int numRows) {
        if(s=="" || numRows==1)
        {
            return s;
        }
        
        //first we will create the zig zag pattern within a 2 dimensional char array
        char zigZag[numRows][s.length()];
        for(int x=0;x<numRows;x++)
        {
            for(int y=0;y<s.length();y++)
            {
                zigZag[x][y]=' ';
            }
        }
        int zigLength=0;
        int depth=0;
        bool down=1;//signifies that we must go down wards in the zigzag
        while(zigLength<=s.length()-1)
        {
            zigZag[depth][zigLength]=s.at(zigLength);
            zigLength++;
            if(depth==numRows-1)
            {
                down=0;
            }
            else if(depth==0)
            {
                down=1;
            }
            
            if(down==1)
            {
                depth++;
            }
            else
            {
                depth--;
            }
        }
        //Now that we have the 2 dimensional array with the zigzag we need, now we need to create a loop that will read the zigzag
        string answer;
        for(int x=0;x<numRows;x++)
        {
            for(int y=0;y<zigLength;y++)
            {
                if(zigZag[x][y]!=' ')
                {
                    answer=answer+zigZag[x][y];
                }
            }
        }
        return answer;
    }
};