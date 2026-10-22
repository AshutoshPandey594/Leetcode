
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();

        vector<int> rev = nums;
        reverse(rev.begin(), rev.end());

        // State: (type, shift)
        // type 0 = rotations of nums
        // type 1 = rotations of reversed nums
        vector<int> dist(2 * n, -1);
        vector<bool> target(2 * n, false);
        queue<int> q;

        // Identify states that produce the sorted array.
        for (int type = 0; type < 2; type++) {
            vector<int>& a = (type == 0 ? nums : rev);

            for (int k = 0; k < n; k++) {
                bool ok = true;

                for (int i = 0; i < n; i++) {
                    if (a[(i + k) % n] != i) {
                        ok = false;
                        break;
                    }
                }

                if (ok) {
                    target[type * n + k] = true;
                }
            }
        }

        dist[0] = 0;
        q.push(0);

        while (!q.empty()) {
            int state = q.front();
            q.pop();

            if (target[state]) {
                return dist[state];
            }

            int type = state / n;
            int k = state % n;

            // Operation 1: rotate left by one.
            int next = type * n + (k + 1) % n;

            if (dist[next] == -1) {
                dist[next] = dist[state] + 1;
                q.push(next);
            }

            // Operation 2: reverse the entire array.
            int nextType = 1 - type;
            int nextK = (n - k) % n;
            next = nextType * n + nextK;

            if (dist[next] == -1) {
                dist[next] = dist[state] + 1;
                q.push(next);
            }
        }

        return -1;
    }
};
