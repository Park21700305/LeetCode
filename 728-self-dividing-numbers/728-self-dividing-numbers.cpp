class Solution {
public:
	vector<int> selfDividingNumbers(int left, int right) {
		vector<int> res;
		for (int i = left; i <= right; ++i) {
			if (fuc1(i))
				res.push_back(i);
		}
		return res;
	}

	bool fuc1(int num) {
		int n = num;
		while (n) {
			if (n % 10 == 0 || num % (n % 10) != 0)
				return false;
			n /= 10;
		}
		return true;
	}
};