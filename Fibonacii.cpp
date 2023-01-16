
// Tính số Fibonacii

//! Dùng đệ quy
#include <iostream>
using namespace std;
int tinhFibonaci(int n)//Hàm tính Fibonaci bằng đệ quy
{
    if(n==0) return 0;
    if(n<=2) return 1; //Trường hợp suy biến
    return tinhFibonaci(n-1)+tinhFibonaci(n-2); //Đệ quy gọi lại 2 hàm con để thực hiện tính toán
}
int main()
{
    int n;
    cout<<"Nhap n:"; cin>>n;
    cout<<"Fibonacci thu n la: "<<tinhFibonaci(n);
}




//! Dùng vòng lặp
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n:"; cin>>n;
     
    int a=0, b=1, fibo; //Khai báo giá trị ban đầu
    for(int i=1;i<=n;i++){
        fibo=a+b;
        b=a;
        a=fibo;
    }
    cout<<"Fibonacci thu n la: "<<fibo;
}





//! Dùng quy hoạch động
#include <iostream>
using namespace std;
int QHD(int n)//Hàm quy hoạch động
{
    int a[n+1];
    a[0]=0; a[1]=1; a[2]=1;
    for(int i=3;i<=n;i++){
        a[i]=a[i-1]+a[i-2];// công thức truy hồi quy hoạch động 
    }
    return a[n];//Trả về kết quả cho hàm quy hoạch
}
int main()
{
    int n;
    cout<<"Nhap n:"; cin>>n;
    cout<<"Fibonacci thu n la: "<<QHD(n);
 
}