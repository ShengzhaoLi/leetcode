class Solution {
public:
    /**
     * @param n: an integer
     * @return: an ineger f(n)
     */
    int fibonacci(int n) {
        // write your code here
        if (n == 1 )
           return 0;
        if (n == 2) 
            return 1;
        return fibonacci(n-1) + fibonacci(n-2) ;
    }
};
class Solution {
public:
    /**
     * @param n: an integer
     * @return: an ineger f(n)
     */
    int fibonacci(int n) {
        // write your code here
        int result = 0;
        if (n<3) return n-1;
        int first = 0, second = 1;
        for (int i = 3; i<= n;i++)
        {
            result = first + second;
            first = second;
            second = result;
            
            
        }
        return result;
    }
};
