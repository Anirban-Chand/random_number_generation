#include<iostream>
#include<random>
#include<ctime>
#include<stdlib.h>
using namespace std;

vector<float> rand_num_gen_func_normal_distrib(int a, int b){
  vector<float> random_numbers;
  default_random_engine generator(time(NULL));
  normal_distribution<float> norm(a,b);
  int n=(b-a+1);
  random_numbers.resize(n,0);
  for(int i=0; i<n; i++){
    float num = norm(generator);
    if(num>0)
        random_numbers[i] = num*10;
  }
  return random_numbers;
}

int main(){
  int x=1;
  int y=5;
  vector<float> rand_num = rand_num_gen_func_normal_distrib(x,y);
  for(int i=0; i<rand_num.size(); i++){
    cout<<i+1<<": "<<rand_num[i]<<"\t";
  }

  return 0;
}