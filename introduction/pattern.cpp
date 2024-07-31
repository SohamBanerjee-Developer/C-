#include<bits/stdc++.h>
using namespace std;
// ****
// ****
// ****
// ****
void pattern_01(int n){
    for(int i=0; i<n; i++){
       for(int j=0; j<4; j++) {
            cout<<"*";
            }
            cout<<endl;
    }

}
/*
1
12
123
1234
*/
void pattern_02(int n){
    for(int i=1; i<=n; i++){
       for(int j=1; j<=i; j++) {
            cout<<j;
            }
            cout<<endl;
    }

}
// 12345
// 1234
// 123
// 12
// 1
void pattern_06(int n){
    for(int i=n; i>0; i--){
       for(int j=1; j<=i; j++) {
            cout<<j;
            }
            cout<<endl;
    }

}             // s * s
//      *       [4,1,4]
//     ***      [3,3,3]
//    *****     [2,5,2]
//   *******    [1,7,1]
//  *********   [0,9,0]
void pattern_07(int n){
    int column=(2*(n-1))+1;
    for(int i=n-1; i>=0; i--){
       for(int j=0; j<i; j++) {
            cout<<" ";
            }
       for(int k=0; k<column-2*(i); k++) {
            cout<<"*";
            }
            cout<<endl;
    }

}
// *********
//  *******
//   *****
//    ***
//     *
void pattern_08(int n){
    int column=(2*(n-1))+1;
    for(int i=0; i<n; i++){
       for(int j=0; j<i; j++) {
            cout<<" ";
            }
       for(int k=column-(2*i); k>0; k--) {
            cout<<"*";
            }
            cout<<endl;
    }

}
//               s * s
//      *       [4,1,4]
//     ***      [3,3,3]
//    *****     [2,5,2]
//   *******    [1,7,1]
//  *********   [0,9,0]
//  *********   [0,9,0]
//   *******    [1,7,1]
//    *****     [2,5,2]
//     ***      [3,3,3]
//      *       [4,1,4]

void pattern_09(int n){
    int column=(2*(n-1))+1;
    int count = 5;
    for(int i=1; i<=2*n; i++){
        if(i<=6) count--;
        if(i>5) count++;//when it is reaching 6 it is satisfying both the conditions so count is reaching -1 and then back to 0
       for(int j=0; j<count; j++) {
            cout<<" ";
            }
            //find out a way to calculate spaces then (range - 2*spaces) for stars
       for(int k=0; k<column-2*(count); k++) {
            cout<<"*";
            }
            cout<<endl;
    }

}
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
void pattern_10(int n){
    for(int i=1; i<=(2*n)-1; i++){
        int star = i;
        if (i>=n) star = (2*n)-i;
       for(int j=1; j<=star; j++) {
            cout<<"*";
            }
            cout<<endl;
    }

}
// 0
// 01
// 010
// 0101
// 01010
void pattern_11(int n){
    for(int i=1; i<=n; i++){
       for(int j=1; j<=i; j++) {
        int star = 0;
        if(j%2==0) star =1;
            cout<<star;
            }
            cout<<endl;
    }
}
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
void pattern_12(int n){
    for(int i=1; i<=n; i++){
       for(int j=1; j<=i; j++) {
        cout<<j;
    }
       for(int j=1; j<=(2*n)-(2*i); j++) {
        cout<<" ";
    }
       for(int j=i; j>0; j--) {
        cout<<j;
    }
    cout<<endl;

}
}

// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
void pattern_13(int n){
        int count =0;
    for(int i=1; i<=n; i++){
       for(int j=1; j<=i; j++) {
        count++;
        cout<<count<<" ";
            }
            cout<<endl;
    }
    cout<<count;
}
// A B C D E 
// A B C D
// A B C
// A B
// A
void pattern_15(int n){
    char count;
    for(int i=n; i>=1; i--){
         count ='A';
       for(int j=1; j<=i; j++) {
        cout<<count<<" ";
        count++;
            }
            cout<<endl;
    }
    cout<<count;
}
// A 
// B B
// C C C
// D D D D
// E E E E E
void pattern_16(int n){
    char count;
    for(int i=0; i<n; i++){
         count ='A'+i;
       for(int j=0; j<=i; j++) {
        cout<<count<<" ";
        
            }
            cout<<endl;
    }
    cout<<count;
}
// 12345
//      1234
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
void pattern_17(int n){
    char count;
    for(int i=n-1; i>=0; i--){
         count ='A';
         for(int j=0; j<i; j++){
            cout<<" ";
         }


       for(int j=0; j<n-i; j++) {
        cout<<count;
        count++;
        
            }
            count--;
        for(int j=0; j<(n-1)-i; j++){
                count--;
                cout<<count;
            }
            cout<<endl;
    }
    
    cout<<count;
}
// E
// DE
// CDE
// BCDE
// ABCDE
void pattern_18(int n){
    for(int i = 0; i < n; i++){
        char count = ('A'+(n-1))-i;
        for(int j = 0; j <=i; j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }

}

// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
// 1234  4321
// 123    321
// 12      21
// 1        1
void pattern_20(int n){
    for(int i=1; i<2*n; i++){
        int star = i;
        if (i>n) star = 2*n-i;
       for(int j=1; j<=star; j++) {
        cout<<j;
    }
       for(int j=1; j<=(2*n)-(2*star); j++) {
        cout<<" ";
    }
       for(int j=star; j>0; j--) {
        cout<<j;
    }
    cout<<endl;

}
}
void pattern_21(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || i==(n-1)|| j==0 || j==(n-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
            cout<<endl;
    }
}
// 555555555    
// 544444445
// 543333345
// 543222345
// 543212345
// 543222345
// 543333345
// 544444445
// 555555555
void pattern_22(int n){
    for(int i =0; i<2*n-1; i++){
        for(int j = 0; j<2*n-1; j++){
            int top = i;
            int bottom = 2*n-2-i;
            int left = j; 
            int right = 2*n-2-j;
            int dist = min(min( top, bottom), min(left, right));
            cout<<n-dist;
        }
        cout<<endl;
    }
}
int main(){
    int n=5;

    // pattern_01(n);
    // pattern_02(n);
    // pattern_06(n);
    // pattern_07(n);
    // pattern_09(n);
    // pattern_10(n);
    // pattern_11(n);
    // pattern_12(n);
    // pattern12(n);
    // pattern_13(n);
    // pattern_15(n);
    // pattern_16(n);
    // pattern_17(n);
    // pattern_18(n);
    // pattern_20(n);
    // pattern_21(n);
    pattern_22(n);
    return 0;
}
