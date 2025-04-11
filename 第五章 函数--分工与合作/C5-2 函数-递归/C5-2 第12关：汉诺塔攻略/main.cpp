//tower of Hannoi
#include <iostream>
using namespace std;

/*
   函数汉诺塔移动：输出将n个盘子从peg1挪到peg3的步骤，可借助临时柱peg2
   步骤用柱子编号表示  例如从1号柱子跳到2号柱子，输出格式为 1-->2
   形参n: 盘子数
   形参peg1: 整型，开始柱子编号
   形参peg2：整型，辅助柱子编号
   形参peg3：整型，目标柱子编号
*/
void 汉诺塔移动(int n, int peg1, int peg2, int peg3);

int main()
{
    int n;
    cout << "input number of disc" << endl;
    cin >> n;


    //将n个盘子从1号柱子挪到3号柱子，可以借助2号柱子
    汉诺塔移动(n, 1, 2, 3);

    return 0;
}

void 汉诺塔移动(int n, int peg1, int peg2, int peg3)
{
    // TODO -Begin
    if (n == 1){
        cout<<peg1<<"-->"<<peg3<<endl;
        return;
    }
    汉诺塔移动(n-1, peg1, peg3, peg2);
    cout<<peg1<<"-->"<<peg3<<endl;
    汉诺塔移动(n-1, peg2, peg1, peg3);
    //TODO-END
}
