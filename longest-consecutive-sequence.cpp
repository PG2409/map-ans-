
class Solution
{
public:
    int longestConsecutive(vector<int> &N)
    {
        if (N.empty())
            return 0;

        unordered_set<int> set(N.begin(), N.end());
        int ml = 0;

        for (int num : set)
        {
            if (set.find(num - 1) == set.end())
            {
                int cnum = num;
                int l = 1;

                while (set.find(cnum + 1) != set.end())
                {
                    cnum++;
                    l++;
                }

                ml = max(ml, l);
            }
        }

        return ml;
    }
};
