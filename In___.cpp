
/*  
    In ra: 
        1 2 3 
        4 5 6 
        7 8 9 
        
*/

#include<iostream>
#include<cmath>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8 , 9};
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i+=3){
        for(int j = i; j < i + 3; j++){
            std::cout << arr[j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}




