#include <iostream>
#include <vector>
#include<algorithm>

void PrintVec(const std::vector<int>& nums)
{
    for (int i = 0; i < nums.size(); ++i)
    {
        std::cout << nums[i] << " " << std::endl;
    }
}

//void SortVec(std::vector<int>& nums)
//{
//    for (int i = 0; i < nums.size() - 1; ++i)
//    {
//        for (int j = i + 1; j < nums.size(); ++j)
//        {
//            if (nums[i] > nums[j])
//            {
//                int temp = nums[i];
//                nums[i] = nums[j];
//                nums[j] = temp;
//            }
//        }
//    }
//    for (int i = 0; i < nums.size(); ++i)
//    {
//        std::cout << nums[i] << " " << std::endl;
//    }
//}

void SortVec(std::vector<int>& nums)
{
    using namespace std;

    for (int i = 0; i < nums.size() - 1; ++i)
    {
        int index_x = i;

        for (int j = i + 1; j < nums.size(); ++j)
        {
            if (nums[j] < nums[index_x])
            {
                index_x = j;
            }
        }
        swap(nums[i], nums[index_x]);
    } 
}



int main(void)
{
    srand(time(NULL));
    // 벡터 컨테이너에 담겨진 수들을 오름차순으로 정렬하는 함수 만들기

    std::vector<int> nums;

    int maxCount = 5;
    //int randCount = rand() % maxCount + 1;
    int randCount = 20;
    for (int i = 0; i < randCount; ++i)
    {
        int randomValue = rand() % (maxCount * 2) - maxCount;
        nums.push_back(randomValue);
    }

    std::cout << "정렬 전 배열: \n";
    PrintVec(nums);

    std::cout << "정렬 후 배열: \n";
    SortVec(nums);
    PrintVec(nums);
}