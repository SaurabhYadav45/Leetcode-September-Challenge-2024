class MyCircularDeque {
public:
    vector<int>dq;
    int K ;
    int front, rear ;
    int currentCount;
    MyCircularDeque(int k) {
        K = k;
        dq = vector<int>(K, 0);
        front = 0;
        rear = K-1;
        currentCount = 0;
    }
    
    bool insertFront(int value) {
        if(currentCount == K){
            return false;
        }
        else{
            front = (front -1 + K)%K;
            dq[front] = value;
            currentCount++;
            return true;
        }
    }
    
    bool insertLast(int value) {
        if(currentCount == K){
            return false;
        }
        else{
            rear = (rear + 1)%K;
            dq[rear] = value;
            currentCount++;
            return true;
        }
    }
    
    bool deleteFront() {
        if(currentCount == 0){
            return false;
        }
        else{
            front = (front+1)%K;
            currentCount--;
            return true;
        }
    }
    
    bool deleteLast() {
        if(currentCount == 0){
            return false;
        }
        else{
            rear = (rear - 1 + K)%K;
            currentCount--;
            return true;
        }
    }
    
    int getFront() {
        if(currentCount == 0){
            return -1;
        }
        else{
            return dq[front];
        }
    }
    
    int getRear() {
        if(currentCount == 0){
            return -1;
        }
        else{
            return dq[rear];
        }
    }
    
    bool isEmpty() {
        if(currentCount == 0){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isFull() {
        if(currentCount == K){
            return true;
        }
        else{
            return false;
        }
    }
};
