////
//// Created by wshwbluebird on 16/7/23.
////
//哈西 存储表示
//#include <iostream>
//using namespace std;
//
//int chess[6][6];
//const int INF = 99999;
//int ans;
//int minans = INF;
//
//int fa[16];
//int ansfa[16];
//void inputwb(){
//    for (int i = 1; i < 5; ++i) {
//        for (int j = 1; j < 5; ++j) {
//            char temp;
//            cin>>temp;
//            chess[i][j] =(temp=='+'? 0:1);
//        }
//    }
//}
//int checkright(){
//    for (int i = 1; i < 5; ++i) {
//        for (int j = 1; j < 5; ++j) {
//           if(chess[i][j]==0)  return 0;
//        }
//    }
//    return 1;
//}
//
//void flip(int x ,int y){
//    chess[x][y] = !chess[x][y];
//    for (int i = 1; i < 5 ; ++i) {
//        chess[x][i] = !chess[x][i];
//        chess[i][y] = !chess[i][y];
//    }
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
//        if(minans > ans) {
//            minans = ans;
//            for (int i = 0; i < 16; ++i) {
//                ansfa[i] = fa[i];
//            }
//        }
//        return;
//    }
//    if(cur == 16)   return ;
//    int x = cur/4+1;
//    int y = cur%4+1;
//    int t = ans;
//    flip(x,y);
//    ans++;
//    fa[cur] = 1;
//    dfs(++cur);
//
//    flip(x,y);
//    cur--;
//    fa[cur] = 0;
//    ans = t;
//    dfs(++cur);
//
//}
//
//int main(){
//    //memset(fa,-1, sizeof(fa));
//     inputwb();
//    //print();
//     dfs(0);
//    cout<<minans<<endl;
//    for (int i = 0; i < 16 ; ++i) {
//        if(ansfa[i]) {
//            int x = i/4 +1;
//            int y = i%4 +1;
//            cout<<x<<" "<<y<<endl;
//        }
//    }
//    return 0;
//
//
//}