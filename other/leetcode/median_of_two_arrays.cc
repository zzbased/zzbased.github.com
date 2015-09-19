class Solution {
public:
  // 寻找第k小的数
  double find_kth(vector<int>::iterator it1, int n1,
                  vector<int>::iterator it2, int n2,
                  int k) {
    // 确保n1 >= n2
    if (n1 < n2) {
      return find_kth(it2, n2, it1, n1, k);
    }
    if (n2 == 0) {
      return *(it1 + k-1);
    }
    if (k == 1) {
      return min(*it1, *it2);
    }
    // 注意这个划分,很重要
    int i2 = min(k/2, n2);
    int i1 = k - i2;
    if (*(it1 + i1-1) > *(it2 + i2-1)) {
      // 删掉数组2的i2个
      return find_kth(it1, n1, it2 + i2, n2 - i2, i1);
    } else if (*(it1 + i1-1) < *(it2 + i2-1)) {
      // 删掉数组1的i1个
      return find_kth(it1 + i1, n1 - i1, it2, n2, i2);
    } else {
      return *(it1 + i1-1);
    }
  }

  // 寻找第k小的数, C语言版本
  double find_kth2(const int* A, int m, const int* B, int n, int k) {
    if (m < n) {
      return find_kth2(B, n, A, m, k);
    }
    if (n == 0) {
      return A[k-1];
    }
    if (k == 1) {
      return min(A[0], B[0]);
    }

    int i2 = min(k/2, n);
    int i1 = k - i2;
    if (A[i1-1] < B[i2-1]) {
      return find_kth2(A+i1, m-i1, B, n, k-i1);
    } else if (A[i1-1] > B[i2-1]) {
      return find_kth2(A, m, B+i2, n-i2, k-i2);
    } else {
      return A[i1-1];
    }
  }
  // 数组从小到大排序
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int total = nums1.size() + nums2.size();
    if (total & 0x1) {
      // odd
      // return find_kth(nums1.begin(), nums1.size(), nums2.begin(), nums2.size(), total/2 + 1);
      return find_kth2(nums1.data(), nums1.size(), nums2.data(), nums2.size(), total/2 + 1);
    } else {
      // return ( find_kth(nums1.begin(), nums1.size(), nums2.begin(), nums2.size(), total/2 + 1)
      //     + find_kth(nums1.begin(), nums1.size(), nums2.begin(), nums2.size(), total/2) )/ 2.0;
      return ( find_kth2(nums1.data(), nums1.size(), nums2.data(), nums2.size(), total/2 + 1)
          + find_kth2(nums1.data(), nums1.size(), nums2.data(), nums2.size(), total/2) )/ 2.0;
    }

  }
};