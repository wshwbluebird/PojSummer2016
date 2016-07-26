////
//// Created by wshwbluebird on 16/7/24.
////
//
//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//const int INF =20;
//
//int d[101][101];
//
//void Floyde(int n){
//
//    for (int i = 1; i <= n ; ++i) {
//        for (int j = 1; j <= n  ; ++j) {
//             d[i][j] = (i==j? 0:INF);
//        }
//    }
//    for (int i = 1; i <= n; ++i) {
//        int m;
//        cin>>m;
//        for (int j = 0; j < m; ++j) {
//            int a, b;
//            cin>>a>>b;
//            d[i][a] = b;
//        }
//    }
//
//    for (int k = 1; k <= n ; ++k) {
//        for (int i = 1; i <=n ; ++i) {
//            for (int j = 1; j <= n ; ++j) {
//                if(d[i][j]>d[i][k]+d[k][j])
//                    d[i][j]=d[i][k]+d[k][j];
//            }
//        }
//    }
//
//    int who;
//    int howlong = INF;
//
//    for (int i = 1; i <= n ; ++i) {
//        int temp = 0;
//        for (int j = 1; j <= n ; ++j) {
//            if(d[i][j]>temp) temp = d[i][j];
//        }
//
//        if(howlong>temp){
//            howlong = temp;
//            who = i;
//        }
//
//    }
//
//    if(howlong!=INF)  cout<<who<<' '<<howlong<<endl;
//    else cout<<"disjoint"<<endl;
//    return ;
//
//
//}
//
//
//int main(){
//    int n;
//    while(cin>>n){
//        if(!n) break;
//        Floyde(n);
//    }
//
//
//
//    return 0;
//}