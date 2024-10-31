// KthLargestElement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

void SortedInsert(std::vector<int>& v, int n)
{
    auto i = v.begin();
    while (i != v.end() && *i < n)
        ++i;
    if (i == v.end())
    {
        v.push_back(n);
        return;
    }
    else
        v.insert(i, n);
}

//bool InList(const std::vector<int>& v, int n)
//{
//    for (auto i : v)
//    {
//        if (i == n)
//            return true;
//    }
//    return false;
//}

int GetKthLargestElement(const std::vector<int>& list, int k)
{
    std::vector<int> largestElements;
    largestElements.reserve(k);

    for (auto n : list)
    {
        if (largestElements.size() < static_cast<size_t>(k))
            SortedInsert(largestElements, n);
        else if (n > largestElements[0]/* && !InList(largestElements, n)*/)
        {
            largestElements.erase(largestElements.begin());
            SortedInsert(largestElements, n);
        }
    }

    return largestElements[0];
}

int main()
{
    while (true)
    {
        int count = 0;
        std::cout << "Number of elements in the array: ";
        std::cin >> count;
        if (count == 0)
            break;

        std::vector<int> vec(count);
        std::cout << "The number array: ";
        for (int i = 0; i < count; ++i)
            std::cin >> vec[i];

        int kth = 1;
        std::cout << "Which largest number? ";
        std::cin >> kth;


        std::cout << "The " << kth << "th largest number is: " << GetKthLargestElement(vec, kth) << std::endl << std::endl;
    }
}
