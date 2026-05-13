#include <iostream>
#include <vector>
/*
현재 최대값 = 첫 번째 값

반복문 시작
    현재 원소가 최대값보다 크면
        최대값 갱신
반복문 끝

최대값 반환
*/
int FindMaxValue(const std::vector<int>& nums)
{
    int MaxValue = nums[0];


    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] > MaxValue)
        {
            MaxValue = nums[i];
        }
    }
        return MaxValue;
}

int FindMinValue(const std::vector<int>& nums)
{
    int MinValue = nums[0];

    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] < MinValue)
        {
            MinValue = nums[i];
        }
    }
    return MinValue;
}

//min과 max를 동시에 구해야됨.
void FindMinMax(int* max, int* min, const std::vector<int>& nums)
{
    int MaxValue = nums[0];
    int MinValue = nums[0];

    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] > MaxValue)
        {
            MaxValue = nums[i];
        }
        if (nums[i] < MinValue)
        {
            MinValue = nums[i];
        }
    }
    //포인터에 값을 넣어줘야됨.
    *max = MaxValue;
    *min = MinValue;
}

//struct MinMax
//{
//    int max;
//    int min;
//};
//
//MinMax FindMinMax(const std::vector<int>& nums)
//{
//    MinMax Result;
//    int MaxValue = nums[0];
//    int MinValue = nums[0];
//
//    for (int i = 0; i < nums.size(); ++i)
//    {
//        if (MaxValue < nums[i])
//        {
//            MaxValue = nums[i];
//        }
//        if (MinValue > nums[i])
//        {
//            MinValue = nums[i];
//        }
//    }
//    Result.max = MaxValue;
//    Result.min = MinValue;
//
//    return Result;
//}


int main(void)
{
    // 동적 배열 벡터를 만든다. 빈 컨테이너임.
    std::vector<int> nums;

    // 몇 개 숫자를 컨테이너에 넣을 건지 랜덤으로 정한다. max는 99개다. 
    int randCount = rand() % 100;

    // randCount까지 하나씩 하니씩 랜덤한 값을 만들어서 컨테이너에 넣는다
    for (int i = 0; i < randCount; ++i)
    {
        // [0, 1999] --> [-1000, 999]
        int randomValue = rand() % 2000 - 1000;
        nums.push_back(randomValue);
    }

    int min1 = FindMaxValue(nums);
    int max1 = FindMinValue(nums);

    std::cout << "Min value: " << min1 << ", Max value: " << max1 << std::endl;

    int min, max;

    FindMinMax(min, max);

    std::cout << "Min value: " << min << ", Max value: " << max << std::endl;

}