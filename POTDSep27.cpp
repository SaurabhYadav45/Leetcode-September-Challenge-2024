class MyCalendarTwo {
public:
    vector<pair<int,int>>doubleOverlappedRegion;
    vector<pair<int, int>>overallBooking;

    bool checkOverlap(int s1, int e1, int s2, int e2){
        return (max(s1,s2) < min(e1,e2));
    }

    pair<int, int> findOverlappedRegion(int s1, int e1, int s2, int e2){
        return {max(s1,s2), min(e1,e2)};
    }

    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        for(pair<int,int>&region : doubleOverlappedRegion){
            if(checkOverlap(region.first, region.second, start, end)){
                return false;
            }
        }

        for(pair<int,int>&booking: overallBooking){
            if(checkOverlap(booking.first, booking.second, start, end)){
                doubleOverlappedRegion.push_back(findOverlappedRegion(booking.first, booking.second, start, end));
            }
        }

        overallBooking.push_back({start, end});
        return true;
    }
};
