////
//// Created by wshwbluebird on 16/7/23.
////
//
//#include<iostream>
//#include <string.h>
//#include <queue>
//
//using namespace std;
//
//int N,M ,W;
//
//int u[5201],v[5201],w[5201],nexte[5201];
//int first[501];
//
//
//
//void read_table(){
//    memset(u,0, sizeof(u));
//    memset(v,0, sizeof(v));
//    memset(w,0, sizeof(w));
//    memset(nexte,0, sizeof(nexte));
//
//    cin>>N>>M>>W;
//    for (int i = 1; i <= 501; ++i) {
//        first[i] = -1;
//    }
//
//    for (int j = 1; j <= M  ; ++j) {
//        int a,b,c;
//        cin>>a>>b>>c;
//        u[2*j-1] = a;
//        v[2*j-1] = b;
//        w[2*j-1] = c;
//        nexte[2*j-1] = first[u[2*j-1]];
//        first[u[2*j-1]] = 2*j-1;
//
//        u[2*j] = b;
//        v[2*j] = a;
//        w[2*j] = c;
//        nexte[2*j] = first[u[2*j]];
//        first[u[2*j]] = 2*j;
//    }
//
//    for (int j = 2*M+1; j <= 2*M+W ; ++j) {
//        cin>>u[j]>>v[j];
//        cin>>w[j];
//        w[j] = -w[j];
//        nexte[j] = first[u[j]];
//        first[u[j]] = j;
//    }
//
//}
//
//int  Bellman_Ford(){
//    queue<int> q;
//    int d[501];
//
//    for (int i = 1; i <= N+2; ++i) {
//        d[i] = 10001;
//    }
//
//    int inq[501];
//    d[1] = 0;
//    q.push(1);
//    inq[1] = 1;
//
//    while(!q.empty()){
//        int hole = q.front();
//        q.pop();
//        inq[hole] = 0;
//
//        for (int e = first[hole]; e != -1; e = nexte[e]) {
//            int temp = d[hole] + w[e];
//            if(d[v[e]] > temp){
//                //cout<<hole<<" : "<<u[e]<<" to "<<v[e]<<" : "<<temp<<endl;
//                if(v[e]==1)  return 1;
//                d[v[e]] = temp;
//                if(!inq[v[e]]){
//                    q.push(v[e]);
//                    inq[v[e]] = 1;
//                }
//            }
//        }
//    }
//    return 0;
//
//}
//
//int main(){
//
//    int pp;
//    cin>>pp;
//    for (int i = 0; i < pp; ++i) {
//        read_table();
//        if(Bellman_Ford())  cout<<"YES"<<endl;
//        else
//            cout<<"NO"<<endl;
//    }
//
//
//
//    return 0;
//}