class Solution
{
    public:
int binarySearch(const vector<int>& numbers, int target, int start) {
    int left = start, right = numbers.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (numbers[mid] == target) {
            return mid;
        } else if (numbers[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}

vector<int> twoSum(const vector<int>& numbers, int target) {
    for (int i = 0; i < numbers.size(); ++i) {
        int complement = target - numbers[i];
        int index = binarySearch(numbers, complement, i + 1);
        if (index != -1) {
            return {i + 1, index + 1};
        }
    }
    
    return {}; // No solution found, should not happen according to problem statement
}

};