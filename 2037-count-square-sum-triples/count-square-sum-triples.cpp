class Solution
{
    public:
        int countTriples(int n)
        {
            int cnt = 0, temp, k;
            for (int a = 1; a <= n; a++)
            {
                for (int b = 1; b <= n; b++)
                {
                    temp = (a *a) + (b *b);
                    k = sqrt(temp);
                    if (temp == k *k && k <= n)
                        cnt++;
                }
            }
            return cnt;
        }
};