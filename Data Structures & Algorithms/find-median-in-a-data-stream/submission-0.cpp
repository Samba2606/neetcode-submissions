class MedianFinder {
public:
    priority_queue<int>left_max_heap;
    priority_queue<int,vector<int>,greater<int>>right_min_heap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(left_max_heap.empty() || num < left_max_heap.top() ){
            left_max_heap.push(num);
        }else{
            right_min_heap.push(num);
        }

        // we should always keep the condn as sizeof(lhs) one > than sizeof(rhs) or 
        // sizeof(lhs) == sizeof(rhs)
        // diff btw both of them should be 1 or 0
        // only one element more can be there in lhs if greater than 1 we push the top into rhs side and pop in lhs
        if(abs((int)left_max_heap.size() - (int)right_min_heap.size()) > 1){
            right_min_heap.push(left_max_heap.top());
            left_max_heap.pop();
        }else if(left_max_heap.size() < right_min_heap.size()){
            left_max_heap.push(right_min_heap.top());
            right_min_heap.pop();
        }
    }
    
    double findMedian() {
        if(left_max_heap.size()==right_min_heap.size()){ 
            return (double)(left_max_heap.top()+right_min_heap.top())/2 ;
        }
        // else if(left_max_heap.size()-right_min_heap.size()==1){
        //     return left_max_heap.top();
        // }

        return left_max_heap.top();
    }
};
