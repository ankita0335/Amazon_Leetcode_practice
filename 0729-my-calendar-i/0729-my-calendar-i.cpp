class MyCalendar 
{
public:
    vector<pair<int, int>> ranges;
    MyCalendar() {}
    bool book(int start, int end) 
    {
        for (auto i : ranges) 
        {
            int r= i.first;
            int rrend = i.second;
            if (start < rrend && end > r)
                return false;
        }
        ranges.push_back(make_pair(start, end));
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */