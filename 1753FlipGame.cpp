////
//// Created by wshwbluebird on 16/7/23.
////
//
//#include <iostream>
//using namespace std;
//
//int chess[6][6];
//const int INF = 99999;
//int ans;
//int minans = INF;
//void inputwb(){
//    for (int i = 1; i < 5; ++i) {
//        for (int j = 1; j < 5; ++j) {
//            char temp;
//            cin>>temp;
//            chess[i][j] =(temp=='w'? 0:1);
//        }
//    }
//}
//int checkright(){
//    for (int i = 1; i < 5; ++i) {
//        for (int j = 1; j < 5; ++j) {
//           if(chess[i][j]!=chess[1][1])  return 0;
//        }
//    }
//    return 1;
//}
//
//void flip(int x ,int y){
//    chess[x][y] = !chess[x][y];
//    if(x-1>0) chess[x-1][y] = !chess[x-1][y];
//    if(x+1<5) chess[x+1][y] = !chess[x+1][y];
//    if(y-1>0) chess[x][y-1] = !chess[x][y-1];
//    if(y+1<5) chess[x][y+1] = !chess[x][y+1];
//}
//
//void print(){
//    for (int i = 1; i < 5; ++i) {
//        for (int j = 1; j < 5; ++j) {
//            cout<<chess[i][j];
//        }
//        cout<<endl;
//    }
//}
//
//void dfs(int cur){
//    if(checkright()) {
//        if(minans > ans) minans = ans;
//        return;
//    }
//    if(cur == 16)   return ;
//    int x = cur/4+1;
//    int y = cur%4+1;
//    int t = ans;
//    flip(x,y);
//    ans++;
//    dfs(++cur);
//    flip(x,y);
//    ans = t;
//    dfs(cur);
//
//}
//
//int main(){
//     inputwb();
//    //print();
//     dfs(0);
//    if(minans!=INF)  cout<<minans;
//    else cout<<"Impossible";
//    return 0;
//
//
//}