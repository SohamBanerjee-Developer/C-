#include <iostream>
#include <queue>

using namespace std;

// queue also has a swap function similar to stack and vector time complexcity of all the operation is also O(1)
//time complexcity of priority queue push O(logn) pop O(logn) topO(1)
void showq(queue<int> gq)
{
	queue<int> g = gq;
	while (!gq.empty()) {
		cout << '\t' << gq.front()<<" ";
		gq.pop();
	}
    g.push(2);
    cout<<g.front()<<endl;
	cout << '\n';
}


int main()
{
	queue<int> gquiz;
	gquiz.push(10);
	gquiz.push(20);
	gquiz.emplace(30);

	cout << "The queue gquiz is : ";
	showq(gquiz);
    cout<<gquiz.front()<<endl;

	cout << "\ngquiz.size() : " << gquiz.size();
	cout << "\ngquiz.front() : " << gquiz.front();
	cout << "\ngquiz.back() : " << gquiz.back();

	cout << "\ngquiz.pop() : ";
	gquiz.pop();
	showq(gquiz);
	//max heap front will always point to the maximum integer/character...
    priority_queue<int> Pq;
	cout<<"priority queue starts: \n";
    Pq.push(8);
    Pq.push(10);
    Pq.push(2);
    Pq.emplace(9);
    cout<<Pq.top()<<endl;
	Pq.pop();
	cout<<Pq.top()<<endl;
	//min heap front will always point to the minimum integer/character...
	priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
	pq.push(8);
    pq.push(2);
    pq.emplace(9);
    cout<<pq.top()<<endl;
	pq.pop();
	cout<<pq.top()<<endl;
	return 0;
}
