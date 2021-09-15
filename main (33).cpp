#include <iostream>

class vector {
private:
  int *arr;
  unsigned capacity;//размер массива
  unsigned size;//количество элементов в нашем векторе
public:
  vector();
  vector(int n);
  ~vector();

  void push_back(int value);
  void pop_back();
  int at(int index) const;
};

vector::vector() : arr(nullptr), capacity(0), size(0) {

}

vector::vector(int n) : capacity(n), size(0){
  if(n < 0) {
    arr = new int[10];
  }else {
    arr = new int[n];
  }
} 

vector::~vector() {
  delete[] arr;
}

void vector::push_back(int value) {
  if(size == capacity) {
    capacity *= 2;
      if(capacity == 0) {
        capacity = 1;
      }
    int * new_arr = new int[capacity];
    for(int i = 0;i < size;i ++) {
      new_arr[i] = arr[i];
    }
    delete[] arr;
    arr = new_arr;
  }
  arr[size] = value;
  size ++;
}

void vector::pop_back() {
  size --;
}

int vector::at(int index) const {
  if(index >= 0 && index <= size - 1) 
    return arr[index];
  return -1;
}

int main() {
  int _capacity,_value,_index;
  std::cin >> _capacity;
  std::cout << std::endl;
  vector obj(_capacity);
  std::cin >> _value;
  std::cout << std::endl;
  obj.push_back(_value);
  obj.pop_back();
  std::cin >> _index;
  std::cout << std::endl;
  obj.at(_index);
  
}