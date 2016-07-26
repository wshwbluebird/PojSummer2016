////
//// Created by wshwbluebird on 16/7/25.
////
////水题
//#include <iostream>
//#include <map>
//#include <string>
//using namespace std;
//
//int n;
//int cnt = 0;
//double arb[31][31];
//map<string,int> mp;
//
//
//int floyde(){
//    for (int i = 0; i < n; ++i) {
//        string s;
//        cin>>s;
//        mp[s] = i;
//    }
//    int m;
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n ; ++j) {
//            arb[i][j] =(i==j?1:0);
//        }
//    }
//
//    cin>>m;
//    for (int i = 0; i < m; ++i) {
//        string a,b;
//        double c;
//        cin>>a>>c>>b;
//        arb[mp[a]][mp[b]] = c;
//    }
//
//    for (int k = 0; k < n; ++k) {
//        for (int i = 0; i < n ; ++i) {
//            for (int j = 0; j < n ; ++j) {
//                if(arb[i][j]<arb[i][k]*arb[k][j])
//                    arb[i][j]= arb[i][k]*arb[k][j];
//            }
//        }
//    }
//
//    for (int i = 0; i < n ; ++i) {
//        if(arb[i][i]>1) return 1;
//
//    }
//    return 0;
//
//}
//
//int main(){
//
//
//    while(cin>>n){
//        if(!n) break;
//
//        cnt++;
//        cout<<"Case "<<cnt<<": ";
//        if(floyde()) cout<<"Yes"<<endl;
//        else cout<<"No"<<endl;
//    }
//
//
//
//    return 0;
//}