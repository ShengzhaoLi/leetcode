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
class Solution1 {
public:
    /**
     * @param number: A 3-digit number.
     * @return: Reversed number.
     */
    int reverseInteger(int number) {
        return (number%10)* 100 + ((number /10) %10)*10 + number/100;
    }
}
class Solution {
public:
    /**
     * @param character: a character
     * @return: a character
     */
    char lowercaseToUppercase(char character) {
        // write your code here
        return character - 32;
    }
};
