#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;
using std::swap;
using std::pair;
using std::make_pair;

class HeapBuilder {
 private:
  vector<int> data_;
  vector< pair<int, int> > swaps_;
  int maxindex;
  int index;;

  void WriteResponse() const {
    cout << swaps_.size() << "\n";
    for (int i = 0; i < swaps_.size(); ++i) {
      cout << swaps_[i].first << " " << swaps_[i].second << "\n";
    }
  }

  void ReadData() {
    int n;
    cin >> n;
    data_.resize(n);
    for(int i = 0; i < n; ++i)
      cin >> data_[i];
  }

  void GenerateSwaps() {
    swaps_.clear();
    // The following naive implementation just sorts 
    // the given sequence using selection sort algorithm
    // and saves the resulting sequence of swaps.
    // This turns the given array into a heap, 
    // but in the worst case gives a quadratic number of swaps.
    //
    // TODO: replace by a more efficient implementation
    /*for (int i = 0; i < data_.size(); ++i)
      for (int j = i + 1; j < data_.size(); ++j) {
        if (data_[i] > data_[j]) {
          swap(data_[i], data_[j]);
          swaps_.push_back(make_pair(i, j));
        }
      }*/
    
    int n = data_.size();
    for(int i =n/2; i >= 0; i--){
      siftdown(i);
    }
  }
  void siftdown(int index){

    maxindex = index;
   int left = 2*index+1;
    if(left < data_.size() && data_[left] < data_[maxindex])
      maxindex  = left;
   int right = 2*index+2;
    if(right < data_.size() && data_[right] < data_[maxindex])
      maxindex = right;
    if(index != maxindex)
      {
        swaps_.push_back(make_pair(index,maxindex)); 
        swap(data_[index],data_[maxindex]);
        siftdown(maxindex); 
       }
  }


 public:
  void Solve() {
    ReadData();
    GenerateSwaps();
    WriteResponse();
  }
};

int main() {
  std::ios_base::sync_with_stdio(false);
  HeapBuilder heap_builder;
  heap_builder.Solve();
  return 0;
}
