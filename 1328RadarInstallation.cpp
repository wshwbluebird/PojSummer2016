////
//// Created by wshwbluebird on 16/7/23.
////
////有问题a
//#include <iostream>
//#include <math.h>
//#include <algorithm>
//using namespace std;
//
//double d;
//int n;
//int m = 0;
//const  int maxn = 1001;
//double posx[maxn];
//double posy[maxn];
//double low[maxn];
//double high[maxn];
//
//bool cmp(const int x, const int y){
//    return high[x]<high[y];
//}
//
//void greedy(){
//    m++;
//    for (int i = 0; i < n ; ++i) {
//        cin>>posx[i]>>posy[i];
//        double temp = d*d - posy[i]*posy[i];
//
//        if(temp<0||d<0) {
//            cout<<"Case "<<m<<": "<<"-1"<<endl;
//            return ;
//        }
//
//        temp = sqrt(temp);
//        low[i] = posx[i] - temp  ;
//        high[i] = posx[i] + temp ;
//    }
//
//    int ind[maxn];
//    for (int j = 0; j < n ; ++j) {
//        ind[j] = j; //准备间接排序
//    }
//    sort(ind,ind + n,cmp);
//    int ans = 1 ;
//    double last = high[ind[0]];
//
//    for (int k = 1; k < n; ++k) {
//        int temp = ind[k];
//        if(low[temp]>last){
//            ans++;
//            last = high[temp];
//        }
//    }
//
//    cout<<"Case "<<m<<": "<<ans<<endl;
//
//}
//
//int main(){
//    while(1){
//        cin>>n>>d;
//        if(n==0&&d==0)  break;
//        greedy();
//    }
//    return 0;
//}