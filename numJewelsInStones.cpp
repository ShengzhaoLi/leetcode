class Solution {
public:
    int numJewelsInStones(string J, string S) {
        uint32_t result = 0;
        for (auto own : S)
            for (auto stone : J)
            {
                if (own == stone)
                    result++;
                
            }
        return result;
    }
};
