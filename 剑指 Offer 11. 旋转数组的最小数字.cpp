// 1.找最小值
// 2.二分查找

class Solution
{
public:
    int minArray(vector<int> &numbers)
    {
        int l = 0, r = numbers.size() - 1;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (numbers[mid] < numbers[r])
                r = mid;
            else if (numbers[mid] > numbers[r])
                l = mid + 1;
            else
                --r;
        }
        return numbers[l];
    }
};