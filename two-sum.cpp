
class Solution
{
public:
    vector<int> twoSum(vector<int> &N, int target)
    {
        unordered_map<int, int> m;

        for (int i = 0; i < N.size(); i++)
        {
            int comlement = target - N[i];

            if (m.find(comlement) != m.end())
            {
                return {m[comlement], i};
            }

            m[N[i]] = i;
        }

        return {};
    }
};
