#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareEdges(const vector<int>& a, const vector<int>& b) {
    return a[2] < b[2];
}

void displayInput(const vector<vector<int>>& v) {

    for (int i = 0; i < v.size(); i++) {
        cout << v[i][0] << "  " << v[i][1] << "  " << v[i][2] << endl;
    }
}

int main() {
    int node, edge;
    cin >> node >> edge;

    vector<vector<int>> edges(edge, vector<int>(3));

    for (int i = 0; i < edge; i++) {
        int s, d, w;
        cin >> s >> d >> w;
        edges[i][0] = s;
        edges[i][1] = d;
        edges[i][2] = w;
    }

    sort(edges.begin(), edges.end(), compareEdges);
    
    displayInput(edges);

    return 0;
}
