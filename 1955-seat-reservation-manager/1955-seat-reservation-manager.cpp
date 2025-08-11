class SeatManager {
public:
    priority_queue<int, vector<int> ,greater<int>>pq;
    SeatManager(int n) {
        for(int i=1;i<=n;i++)
        {
            pq.push(i); //O(log(n))
        }
    }
    
    int reserve() {
        int seat = pq.top(); //O(1)
        pq.pop();
        return seat;
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber);
    }
};


/* brute force: 
class SeatManager {
public:
    vector<int>seat;
    SeatManager(int n) {
        seat.resize(n+1,-1);
    }
    
    int reserve() {
        for(int i=1;i<seat.size();i++)
        {
            if(seat[i] == -1)
            {
                seat[i] = 1;
                return i;
            }
        }
        return -1;
    }
    
    void unreserve(int seatNumber) {
        seat[seatNumber] =-1;
    }
};  */
/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */