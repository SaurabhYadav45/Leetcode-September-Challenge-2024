class MyCalendar {
    vector<pair<int, int>>calendar;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto& booking : calendar){
            int s = booking.first;
            int e = booking.second;
            if(start < e && s < end){
                return false;
            }
        }
        // If no overlap
        calendar.push_back({start, end});
        return true;
    }
};
