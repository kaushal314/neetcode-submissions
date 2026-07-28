class MedianFinder {
    vector<int>a;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        a.push_back(num);
    }
    
    double findMedian() {
        sort(a.begin(),a.end());
        int n=a.size();
        if(n%2==0) return (a[n/2]+a[n/2-1])/2.0;
        else return a[n/2];
    }
};
