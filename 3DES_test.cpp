#include <iostream>
#include "3des.h"

using namespace std;

// 成功
int main()
{
    TDES tdes;
    // 24位密钥
    tdes.setKey("123456788765432198741236");
    // 验证加解密
    cout << tdes.decrypt(tdes.encrypt("hello 3des!"));
}