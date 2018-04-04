class Solution {
public:
    /**
     * @param number: A 3-digit number.
     * @return: Reversed number.
     */
    int reverseInteger(int number) {
        // write your code here
        int result = 0;
        queue<int> tmp;
        while(number)
        {
            tmp.push(number%10);
            number = number /10;
        }
        while(!tmp.empty())
        {
          int value = tmp.front();
          tmp.pop();
          result = result *10 + value;
            
        }
        return result;
    }
};
