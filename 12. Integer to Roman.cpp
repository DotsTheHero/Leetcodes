class Solution {
public:
    string intToRoman(int num) {
        string answer="";
        while(num>0)
        {
            if(num>=1000)
            {
                answer+="M";
                num=num-1000;
            }
            else if(num>=900)
            {
                answer+="CM";
                num=num-900;
            }
            else if(num>=500)
            {
                answer+="D";
                num=num-500;
            }
            else if(num>=400)
            {
                answer+="CD";
                num=num-400;
            }
            else if(num>=100)
            {
                answer+="C";
                num=num-100;
            }
            else if(num>=90)
            {
                answer+="XC";
                num=num-90;
            }
            else if(num>=50)
            {
                answer+="L";
                num=num-50;
            }
            else if(num>=40)
            {
                answer+="XL";
                num=num-40;
            }
            else if(num>=10)
            {
                answer+="X";
                num=num-10;
            }
            else if(num>=9)
            {
                answer+="IX";
                num=num-9;
            }
            else if(num>=5)
            {
                answer+="V";
                num=num-5;
            }
            else if(num>=4)
            {
                answer+="IV";
                num=num-4;
            }
            else if(num>=1)
            {
                answer+="I";
                num=num-1;
            }
        }
        return answer;
    }
};