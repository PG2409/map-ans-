class Solution
{
public:
    vector<int> topKFrequent(vector<int> &N, int k)
    {
        unordered_map<int, int> freq;

        for (int n : N)
        {
            freq[n]++;
        }

        priority_queue<pair<int, int>> p;

        for (auto &pair : freq)
        {
            p.push({pair.second, pair.first});
        }

        vector<int> result;
        for (int i = 0; i < k; i++)
        {
            result.push_back(p.top().second);
            p.pop();
        }

        return result;
    }
};
