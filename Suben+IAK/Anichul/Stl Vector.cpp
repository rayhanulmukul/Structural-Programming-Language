#include <bits/stdc++.h>
using namespace std;

class Interval{
public:
    int start, end;
    Interval () {}
    Interval(int _start, int _end){
        start = _start;
        end = _end;
    }
};

class cmp{
public:
    int operator () (Interval a, Interval b){
        // accending order
        bool tr = false, fl = true;
        if(a.start < b.start) return tr;
        else if(a.start > b.start) return fl;
        else{
            // a.start == b.start
            // end -> decending order
            if(a.end > b.end) return tr;
            else return fl;
        }
    }
};

int main(){
    priority_queue <Interval, vector<Interval>, cmp> pq;
    pq.push(Interval(2, 2));
    pq.push(Interval(2, 5));
    pq.push(Interval(2, 4));
    pq.push(Interval(3, 1));

    while(!pq.empty()){
        cout << pq.top().start << ' ' << pq.top().end << endl;
        pq.pop();
    }
}
