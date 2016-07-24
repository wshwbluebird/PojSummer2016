////
//// Created by wshwbluebird on 16/7/24.
////
//
//#include <iostream>
//#include <cstdio>
//#include <string.h>
//#include <math.h>
//using namespace std;
//
//double w[201][201];
//double d[201];
//double x[201];
//double y[201];
//const int INF = 99999;
//
//double Dijikstra(int n){
//
//    for (int i = 1; i <= n; ++i) {
//        cin>>x[i]>>y[i];
//    }
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= n ; ++j) {
//            double temp = (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
//            if(temp<0)  temp = -temp;
//            w[i][j] = sqrt(temp);
//        }
//    }
//
//    for (int i = 1; i <= n; ++i) {
//        d[i] = (i==1? 0:INF);
//    }
//    int v[201];
//    d[1] = 0;
//    v[1] = 1;
//    memset(v,0, sizeof(v));
//    for (int i = 0; i < n ; ++i) {
//        int x;
//        double m = INF;
//        for (int j = 1; j <= n; ++j) {
//            if(!v[j]&&d[j]<m) m = d[x=j];
//        }
//        v[x] = 1;
//        for (int y = 1; y <= n ; ++y) {
//            if(!v[y]) {
//                double temp = max(w[x][y], d[x]);
//                if (d[y] > temp) d[y] = temp;
//            }
//        }
//    }
//    return d[2];
//
//}
//
//int main(){
//    int n;
//
//    int cnt = 0;
//    while(cin>>n){
//        if(n==0) break;
//        printf("Scenario #%d\nFrog Distance = %.3f\n\n", ++cnt, Dijikstra(n));
//
//    }
//
//
//    return 0;
//}