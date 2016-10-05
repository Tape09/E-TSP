
#include <iostream>
#include <cassert>
#include <vector>
#include <utility>
#include <cmath>
#include <string>

using namespace std;


struct coord2d {
	coord2d(const double & inx = 0, const double & iny = 0) : x(inx), y(iny) {}
	
	int dist(const coord2d & other) const {
		return( int(round(sqrt(pow(x - other.x,2) + pow(y - other.y,2)))) );
	}
	
	double x;
	double y;	
};



ostream& operator<<(ostream & os, const coord2d & coord);
ostream& operator<<(ostream & os, const coord2d & coord) {
	os << coord.x << ", " << coord.y;
	return os;
}

int main() {
	

	string line;
	getline(cin,line);
	int n_nodes = stoi(line);
	assert(n_nodes > 0);
	
	
	string line2;
	for(int i = 0; i<n_nodes; ++i) {
		getline(cin,line);
		stringstream ss(line);
		
		getline(ss,line2," ");
		
		
		
		
	}
		
	vector<coord2d> nodes;
	nodes.reserve(argc);
	
	for(int i = 0; i<argc; ++i) {
		//~ nodes.push_back(coord2d(atof(argc),atof()))
		cout << argv[i] << endl;		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}







































