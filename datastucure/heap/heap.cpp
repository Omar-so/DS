#include <bits/stdc++.h>

using namespace std;

#define output(v) for (auto &it : v) { cout << it << " "; } cout << "\n";
#define input(v) for (auto &it : v) { cin >> it; }
#define watch(x) cerr << #x << " : " << x << endl;
#define all(v) v.begin(), v.end()
#define int long long

void FastCode() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

class Heap {
private:
    vector<int> heap;

    int L(int p) {
        return 2 * p + 1;
    }

    int R(int p) {
        return 2 * p + 2;
    }

    int P(int c) {
        return (c - 1) / 2;  // Fix: Changed `n` to `c`
    }

    void heapfyup(int node = -1) {
        if (node == -1) node = heap.size() - 1; 

        int parent = P(node);
        if (parent >= 0 && heap[parent] < heap[node]) { 
            swap(heap[node], heap[parent]);
            heapfyup(parent);
        }
    }

    void heapfydown(int node = 0) {
        int l = L(node);
        int r = R(node);

        int largest = node;

        if (l < heap.size() && heap[l] > heap[largest]) {
            largest = l;
        }

        if (r < heap.size() && heap[r] > heap[largest]) {
            largest = r;
        }

        if (largest != node) {
            swap(heap[node], heap[largest]);
            heapfydown(largest);
        }
    }

public:
    void insert(int value) {
        heap.push_back(value);
        heapfyup();
    }

    void remove() {
        if (heap.size() > 0) {
            swap(heap[0], heap.back());
            heap.pop_back();
            heapfydown();
        }
    }

    void print() {
        output(heap);
    }
};

void solve() {
    Heap h;
    h.insert(5);
    h.insert(3);
    h.insert(8);
    h.insert(1);
    h.print();
    h.remove();
    h.print();
}

signed main() {
    FastCode();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
