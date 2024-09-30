class CustomStack {
public:
    vector<int>st;
    int top ;
    int size;
    // int currentCount;
    CustomStack(int maxSize) {
        size = maxSize;
        top = 0;
        st = vector<int>(size, 0);
        // currentCount = 0; 
    }
    
    void push(int x) {
        if(top < size){
            st[top] = x;
            top++;
        }
    }
    
    int pop() {
        if(top == 0){
            return -1;
        }
        else{
            int x = st[top-1];
            top--;
            st.pop_back();
            return x;
        }
    }
    
    void increment(int k, int val) {
        for(int i=0; i<k && i < size ; i++){
            st[i] += val;
        }
    }
};
