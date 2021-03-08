#include<iostream>
#include<random>
#include<ctime>
#include<stdlib.h>
using namespace std;

vector<int> rand_num_gen_func_uniform_distrib(int a, int b){
  vector<int> random_numbers;
  default_random_engine generator(time(NULL));
  // default_random_engine generator(random_device{}());
  uniform_real_distribution<float> distribution(a,b);
  int n=(b-a+1);
  random_numbers.resize(n,0);
  for(int i=0; i<n; i++){
    float num = distribution(generator);
    random_numbers[i] = ceil(num*100);
  }
  return random_numbers;
}

int main(){
  int x=1;
  int y=9;
  vector<int> rand_num = rand_num_gen_func_uniform_distrib(x,y);
  for(int i=0; i<rand_num.size(); i++){
    cout<<rand_num[i]<<"\t";
  }

  return 0;
}