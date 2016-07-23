////
//// Created by wshwbluebird on 16/7/23.
////
//
//#include<iostream>
//using namespace std;
//
//
//int cal(int s, int d){
//    int deficit;
//    int nums;
//    for (int i = 4; i >=0 ; i--) {
//        if(i==0)  return -1;
//        deficit = i*s - (5-i)*d;
//        if(deficit<0) {
//            nums = i;
//            break;
//        }
//    }
//    //cout<<"de:"<<deficit<<endl;
//    if(nums==1) return s-d + 2*deficit;
//    return s+s+2*deficit;
//
//
//}
//
//int main(){
//    int s,d;
//    while(cin>>s>>d){
//        int temp = cal(s,d);
//        if(temp<0) cout<<"Deficit"<<endl;
//        else cout<<temp<<endl;
//    }
//
//
//
//    return 0;
//}