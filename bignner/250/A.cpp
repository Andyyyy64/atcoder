#include <iostream>
using namespace std;

int main() {
    int H, W, R, C;
    cin >> H >> W >> R >> C;

    int sum = 0;

    // 上隣接マスがあるかチェック(Rが1の場合は上隣接マスはない)
    if(R > 1) sum++;

    // 下隣接マスがあるかチェック(RがH,つまり最後の行の場合は下隣接マスはない)
    if(R < H) sum++;

    // 左隣接マスがあるかチェック(Cが1の場合は左隣接マスはない)
    if(C > 1) sum++;

    // 右隣接マスがあるかチェック(CがW,つまり最後の列の場合は右隣接マスはない)
    if(C < W) sum++;

    cout << sum << endl;
    
}
