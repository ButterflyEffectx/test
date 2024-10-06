#include <iostream>
#include <bitset>
using namespace std;
template<typename T>
void show_bit(const T& a){
    const char* beg=reinterpret_cast<const char*>(&a);
    const char* end=beg+sizeof(a);
    cout << "binary" << endl;
    for(const char* p=end-1;p>=beg;--p){
        cout << bitset<8>(*p) << " ";
    }
    cout << endl;

}


int main(){
   unsigned long long x = 0xAABBCCDDEEFF;
    cout << x << "--->";
    show_bit(x);
    return 0;
}