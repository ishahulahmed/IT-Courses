#include <iostream>
using namespace std;

int main(){
  /**************Break*************/
  // for(int i = 0; i < 40; i++){
  //   cout<<i<<endl;
  //   if(i==2){
  //     break;
  //   }
  // }

  /**************Continue*************/
  for(int i = 0; i < 40; i++){
    if(i==2){
      continue;
    }
    cout<<i<<endl;
  }
  return 0;
}