

#include<iostream>
#include<math.h>
using namespace std;


int giaiPT(float a, float b, float c, float &x1, float &x2) {
    float delta = b * b - 4 * a * c;
    if (delta < 0) {
        x1 = x2 = 0.0;
        return 0;
    }
    else if (delta == 0) {
        x1 = x2 = -b / (2 * a);
        return 1;
    }
    else {
        delta = sqrt(delta);
        x1 = (-b + delta) / (2 * a);
        x2 = (-b - delta) / (2 * a);
        return 2;
    }
}


int main() {
    float X1, X2, a, b, c;
    do {
        cout<<"Nhap a (a!=0): ";
        cin >> a;
        cout<<"Nhap b: ";
        cin >> b;
        cout<<"Nhap c: ";
        cin >> c;
    } while (!a); //nếu a=0 thì nhập lại

    if (giaiPT(a, b, c, X1, X2) == 0) {
        cout<< "Phuong trinh vo nghiem";
    }
    else if( giaiPT(a, b, c, X1, X2) == 1 )    {
        if (X1 < 0)
            cout << "Phuong trinh vo nghiem";
        else if (X1 == 0)
            cout << "Phuong trinh co mot nghiem x: " << 0;
        else {
            cout<<"Phuong trinh co hai nghiem"<<endl;
            cout << "x1: " << sqrt(X1) << endl;
            cout << "x2: " << -sqrt(X1) << endl;
        }
    }
    else {
        if (X1 < 0) {
            if(X2 < 0)
                cout<< "Phuong trinh vo nghiem";
            else if(X2 == 0)
                cout << "Phuong trinh co mot nghiem x: " << 0;
            else {
                cout << "Phuong trinh co hai nghiem" << endl;
                cout << "x1: " << sqrt(X2) << endl;
                cout << "x2: " << -sqrt(X2) << endl;
            }
 
        }
        else if (X1 == 0) {
            if(X2 < 0)
                cout << "Phuong trinh co mot nghiem x: " << 0;
            else {
                cout << "Phuong trinh co ba nghiem" << endl;
                cout << "x1: " << sqrt(X2) << endl;
                cout << "x2: " << -sqrt(X2) << endl;
                cout << "x3: " << 0;
            }
            //X2 không thể bằng 0 nếu bằng 0 thì là nghiệm kép
        }
        else {
            if (X2 < 0) {
                cout << "Phuong trinh co hai nghiem" << endl;
                cout << "x1: " << sqrt(X1) << endl;
                cout << "x2: " << -sqrt(X1) << endl;
            }
            else if (X2 == 0) {
                cout << "Phuong trinh co ba nghiem" << endl;
                cout << "x1: " << sqrt(X1) << endl;
                cout << "x2: " << -sqrt(X1) << endl;
                cout << "x3: " << 0;
            }
            else {
                cout << "Phuong trinh co bon nghiem" << endl;
                cout << "x1: " << sqrt(X1) << endl;
                cout << "x2: " << -sqrt(X1) << endl;
                cout << "x3: " << sqrt(X2) << endl;
                cout << "x4: " << -sqrt(X2) << endl;
            }
        }
 
    }
    system("pause");
    return 0;
}