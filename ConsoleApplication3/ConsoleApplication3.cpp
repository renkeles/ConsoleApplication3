#include <iostream>
#include <vector>
#include <deque>
#include <list>

template <class Container, class T>
void insert_sorted(Container& container, const T& item) {
    const auto insert_pos = std::lower_bound(std::begin(container), std::end(container), item);
    container.insert(insert_pos, item);
}

template <class Container>
void printContainer(Container& container, std::string name) {
    std::cout << name << "\t";
    for (const auto& elem : container) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

void task_1() {
    std::vector<int> vec_int{ 1,2,3,4,5 };
    insert_sorted(vec_int, 4);
    printContainer(vec_int, "vec_int");

    std::vector<float> vec_float{ 1.1,1.2,1.3,1.4,1.5 };
    insert_sorted(vec_float, 1.45);
    printContainer(vec_float, "vec_float");

    std::deque<int> deque_int{ 1,2,3,4,5 };
    insert_sorted(deque_int, 4);
    printContainer(deque_int, "deque_int");

    std::deque<float> deque_float{ 1.1,1.2,1.3,1.4,1.5 };
    insert_sorted(deque_float, 1.45);
    printContainer(deque_float, "deque_float");

    std::list<int> list_int{ 1,2,3,4,5 };
    insert_sorted(list_int, 4);
    printContainer(list_int, "list_int");

    std::list<float> list_float{ 1.1,1.2,1.3,1.4,1.5 };
    insert_sorted(list_float, 1.45);
    printContainer(list_float, "list_float");
}

int main()
{
    task_1();
    
}
