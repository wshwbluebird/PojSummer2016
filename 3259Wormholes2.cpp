////
//// Created by wshwbluebird on 16/7/24.
////过了
////看来是环的判定出现了 问题   出现那种 与1 无关的合法的 环
//
//#include <iostream>
//using namespace std;
//
//const int INF  = 1000001;
//
//
//int Bellman_Ford(int n , int m , int w){
//    int u[5201], v[5201], tim[5201];
//    int e = 1;
//    int d[501];
//    for (int i = 1; i <= n ; ++i) {
//        d[i] = INF;
//    }
//    for (int i = 0; i < m ; ++i) {
//         int a, b ,c;
//         cin>>a>>b>>c;
//         u[e] = a;
//         v[e] = b;
//         tim[e] = c;
//         e++;
//         u[e] = b;
//         v[e] = a;
//         tim[e] = c;
//         e++;
//
//    }
//    for (int i = 0; i < w; ++i) {
//        int a, b ,c;
//        cin>>a>>b>>c;
//        u[e] = a;
//        v[e] = b;
//        tim[e] = -c;
//        e++;
//    }
//    d[1] = 0;
//    for (int i = 0; i < n-1 ; ++i) {  //搜索n-1次
//        for (int j = 0; j < e; ++j) {
//            int x = u[j], y = v[j];
//            if(d[x]<INF){
//                if(d[y]>d[x]+tim[j]) d[y] = d[x]+tim[j];
//            }
//        }
//    }
//    for (int i = 0; i < e ; ++i) {
//        if(d[u[i]]+tim[i]<d[v[i]]) return 1;
//    }
//
//    return 0;
//}
//
//int main(){
//    int a,b,c;
//    int n;
//    cin>>n;
//    while(n--) {
//        cin >> a >> b >> c;
//        if (Bellman_Ford(a, b, c)) cout << "YES" << endl;
//        else cout << "NO" << endl;
//    }
//
//    return 0;
//}