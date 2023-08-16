//Уникальные элементы в массиве

#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = { 1, 4, 4, 1, 5, 2, 3, 3, 3, 5 };

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] != -1)
        {
            for (int j = i + 1; j < vec.size(); j++)
            {
                if (vec[j] == vec[i])
                {
                    vec[j] = -1;
                }
            }
        }
    }

    int res = 0;

    std::cout << "Уникальные эелементы: ";
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] != -1)
        {
            res++;
            std::cout << vec[i] << " ";
        }
    }
    std::cout << '\n';

    std::cout << "Всего уникальных элементов в массиве " << res;
    return 0;
}
