#include<iostream>

class matrix{
private:
    int rows;
    int cols;
    int **arr;
public:
    void zapolnitel(int _rows,int _cols) {
        rows = _rows;
        cols = _cols;
        arr = new int*[rows];
        for(int i = 0;i < rows;i ++) {
            arr[i] = new int[cols];
        }
        for(int i = 0;i < rows;i ++) {
            for(int j = 0;j < cols;j ++) {
                std::cin >> arr[i][j];
            }
        }
    }
    void zamenitel() {
        for(int i = 0;i < cols;i ++) {
          for(int j = 0;j < rows;j ++) {
            std::cout << arr[j][i] << ' ';
          }
          std::cout << std::endl;
        }
        for(int i = 0;i  < rows;i ++) {
            delete[] arr[i];
        }
        delete[] arr;
    }
    
};

int main(void) {
    matrix obj;
    int __rows,__cols;
    std::cin >> __rows >> __cols;
    obj.zapolnitel(__rows,__cols);
    obj.zamenitel();
}