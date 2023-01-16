
/*
    Some people are standing in a row in a park. There are trees between them which cannot be moved.
    Your task is to rearrange the people by their heights in a non-descending order without moving the trees.
    People can be very tall!

    For a = [-1, 150, 190, 170, -1, -1, 160, 180], the output should be
    solution(a) = [-1, 150, 160, 170, -1, -1, 180, 190].
*/

#include <iostream>
#include <vector>

std::vector<int> sortByHeight(std::vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == -1 || arr[j] == -1)
                continue;
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

int main()
{
    int n;
    std::cin >> n;
    int temp;
    std::vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        std::cin >> temp;
        arr.push_back(temp);
    }
    std::vector<int> b = sortByHeight(arr);
    for (int i = 0; i < b.size(); i++)
    {
        std::cout << b[i] << " ";
    }
    return 0;
}