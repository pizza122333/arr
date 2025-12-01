#include <iostream>
using namespace std;

int main() {
    // 초기 행렬(3×3)
    int arr[3][3] = {
        { -5,  2,  35 },
        {-20,  5, 100 },
        {-75,  5, -25 }
    };

    // 음수 → 0, 양수 → 255 로 수정
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] < 0)
                arr[i][j] = 0;
            else
                arr[i][j] = 255;
        }
    }

    // 수정된 행렬 출력
    cout << "수정행렬" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
