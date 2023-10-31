#include <bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("in.txt", "r", stdin);  ///To read from a file.
//    freopen("out.txt", "w", stdout);  ///To write  a file.15
    int a,b;

    while(scanf("%d%d", &a,&b) ==2)
    {
        int andValue = a & b;
        printf("& = %d\n", andValue);
        int orValue = a | b;
        printf("| = %d\n", orValue);
        int xorValue = a^b;
        printf("^ = %d\n", xorValue);
        int left_shift=a<<b;
        printf("<< = %d\n", left_shift);
        int right_shift=a>>b;
        printf(">> = %d\n", right_shift);
        cout<<"(1<<3) = "<<(1<<3)<<" in bainary ="<<bitset<8>(1<<3)<<endl;
        cout<<"~(1<<3) = "<<~(1<<3)<<" in bainary ="<<bitset<8>(~(1<<3))<<endl;
        int num=100;
        cout<<"binary of 100 =  "<<bitset<8>(num)<<endl;
        if(!(num & (1<<3))){/// chacking 3rd bit is 1 or not
        num |= (1<<3);//set
        cout<<"change 3rd bit 0->1 :"<<num<<"  Binary equivalent: " << bitset<8>(num)<<endl;
        num=num&(~(1<<5));//unset
        cout<<"change 5th bit 1->0 :"<<num<<"  Binary equivalent: " << bitset<8>(num)<<endl;
        num=num^(1<<2);//toggle/flip
        cout<<"change 2nd bit 1<->0 :"<<num<<"  Binary equivalent: " << bitset<8>(num)<<endl;

        cout<<"~"<<num<<" = "<<~num<<"  Binary equivalent: " << bitset<8>(~num)<<endl;
        num = ~num;
        //bitset<8>cnt=num;
        bitset<8>cnt(num);
        cout<<"number of bits in "<<num<<"="<<cnt.count()<<endl;
        int k= 1<<5;
        cout<<k<<" in bainary " <<bitset<6>(k)<<endl;
        cout<<k-1<<" in bainary " <<bitset<6>(k-1)<<endl;
    }
    }
    return 0;
}
