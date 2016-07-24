////
//// Created by wshwbluebird on 16/7/23.
////
//
//#include <iostream>
//#include <queue>
//#include <string.h>
//using namespace std;
//
//int first[101];
//queue<int> q;
//int u[201],v[201],nexte[201];
//double r[201],c[201];
//
//double d[101];
//int inq[101];
//int N,M,S;
//double V;
//
//
//void read_table(){
//    cin>>N>>M>>S>>V;
//    for (int i = 0; i <= N ; ++i) {
//        first[i] = -1;
//    }
//
//    for (int i = 0; i < M ; ++i) {
//        int a,b;
//        cin>>a>>b;
//        u[2*i] = a;
//        v[2*i] = b;
//        cin>>r[2*i]>>c[2*i];
//        nexte[2*i] = first[u[2*i]];
//        first[u[2*i]] = 2*i;
//
//
//        u[2*i+1] = b;
//       // cout<<u[2*i+1]<<"    dsfs: "<<first[u[2*i+1]]<<endl;
//        v[2*i+1] = a;
//        cin>>r[2*i+1]>>c[2*i+1];
//        nexte[2*i+1] = first[u[2*i+1]];
//        first[u[2*i+1]] = 2*i+1;
//    }
//}
//
//
//int Bellman_Ford(){
//    q.push(S);
//    d[S] = V ;
//    inq[S] = 1;
//
//    while(!q.empty()){
//        //cout<<"SD"<<endl;
//        int cat = q.front();
//        q.pop();
//        inq[cat] = 0;
//
//        for (int e = first[cat]; e!=-1 ; e=nexte[e]) {
//            double temp = (d[cat]-c[e]) * r[e];
//            //cout<<cat<<" : "<<u[e]<<" to  "<<v[e]<<" :  "<<temp<<endl;
//            if(d[v[e]]<temp){
//                if(v[e]==S) return 1;
//                d[v[e]] = temp ;
//                if(!inq[v[e]]){
//                    inq[v[e]] =1;
//                    q.push(v[e]);
//                }
//            }
//
//        }
//    }
//
//     return 0;
//}
//
//int main(){
//    memset(nexte,-1, sizeof(nexte));
//    read_table();
//    memset(d,0, sizeof(d));
//    memset(inq,0, sizeof(inq));
//
////    cout<<first[3]<<endl;
////    cout<<nexte[3]<<endl;
////    cout<<nexte[0]<<endl;
//
//
////    cout<<"+++++++"<<endl;
//    if(Bellman_Ford())  cout<<"YES"<<endl;
//    else cout<<"NO"<<endl;
//
//
//
//    return 0;
//}