#include <iostream>
#include <iterator>
#include <vector>
#include <cctype>
#include <random>


int search (std::vector<int> arr, int value)
{
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == value)
            return i;
    return -1;
}

int random (int size, int dist1, int dist2) {
    static std::mt19937 prng(std::random_device{}());
    static std::uniform_int_distribution<int> dist(dist1, dist2);

    return dist(prng);
}

int generateAndSearch (int value, const int size, int dist1, int dist2) {
    std::vector<int> myArray(size);
    for (auto i : myArray) {
        i = random(size, dist1, dist2);
    }
    if (search(myArray, value) == -1)
        return -1;
    return search(myArray, value);
}
/*
int main (int size, int dist1, int dist2) {

}
*/
