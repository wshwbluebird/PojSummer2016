////
//// Created by wshwbluebird on 16/7/24.
////
//
//#include<iostream>
//#include <string.h>
//using namespace std;
//const int INF = 2147483646;
//int isok[101];//表示判断 该物品是否在当前的等级区间
//int ll,n;
//int lv[501];
//int val[501];
//
//int w[501][501];
//
//
//void read_table(){
//
//    cin>>ll>>n;
//
//    for (int i = 1; i <= n  ; ++i) {
//        for (int j = 1; j <= n ; ++j) {
//            if(i==j) w[i][j] = 0;
//            else w[i][j] = INF;
//        }
//    }
//
//    for (int i = 1; i <= n ; ++i) {
//        int m;
//        cin>>val[i]>>lv[i]>>m;
//        for (int j = 0; j < m ; ++j) {
//            int a, b;
//            cin>>a>>b;
//            w[a][i]=b;
//        }
//    }
//}
//
//
//
//int dijikstra(){
//    int d[501];
//    for (int i = 1; i <= n; ++i) {
//        d[i]  =val[i];
//    }
//     int v[501];
//    memset(v,0, sizeof(v));
//    for (int j = 0; j < n; ++j) {
//         int x , m=INF;
//        for (int y = 1; y <= n; ++y) {
//            if(!v[y]&&isok[y]&&d[y]<m) m = d[x=y];
//        }
//        v[x]=1;
//        //cout<<"x: "<<x<<endl;
//        for (int i = 1; i <= n  ; ++i) {
//            if(isok[i]&&w[x][i]!=INF){
//                //cout<<"d[]"<<x<<" : "<<d[x]<<endl;
//                int temp = d[x] + w[x][i];
//                if(d[i]>temp) {
//                    d[i] = temp;
//                    //cout<<i<<"   :  "<<temp<<endl;
//                }
//            }
//        }
//    }
//
//    return d[1];
//}
//
//int main(){
//    read_table();
//    int price = INF;
//    int mxlv = lv[1];
//    for (; mxlv <= lv[1]+ ll ; ++mxlv) {
//        for (int i = 1; i <= n  ; ++i) {
//            if(lv[i]<=mxlv&&lv[i]>=mxlv-ll) isok[i] = 1;
//            else isok[i] = 0;
//            //cout<<isok[i]<<" ";
//        }
//        //cout<<endl;
//        int temp = dijikstra();
//        //cout<<"this: "<<temp<<endl;
//        if(price > temp) price = temp;
//
//    }
//      cout<<price<<endl;
//
//
//
//
//
//    return 0;
//}