class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        unordered_set<char> r[9], c[9], b[9];

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                char n = board[i][j];
                if (n == '.')
                    continue;

                int boxIndex = (i / 3) * 3 + (j / 3);

                if (r[i].count(n) || c[j].count(n) || b[boxIndex].count(n))
                {
                    return false;
                }

                r[i].insert(n);
                c[j].insert(n);
                b[boxIndex].insert(n);
            }
        }
        return true;
    }
};
