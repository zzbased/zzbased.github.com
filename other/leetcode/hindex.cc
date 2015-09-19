#include <stdio.h>
#include <vector>
using namespace std;

    int hIndex(vector<int>& citations) {
        if (citations.empty()) {
            return 0;
        }
        // 0 1 3 5 6
        // 5 5 5 5 5
        // 0
        // sort(citations.begin(), citations.end());
        int hindex = 0;
        int begin = 0;
        int end = citations.size() - 1;
        while (begin <= end) {
            int middle = begin + ((end - begin) >> 1);
            printf("%d,%d,%d\n", begin, middle, end);
            int lower = citations.size() - middle - 1;  // h of his/her N papers have at least h citations
            if (lower >= 0 && citations[lower] >= middle + 1) {
                if (middle + 1 > hindex) {
                    hindex = middle + 1;
                }
                begin = middle + 1;
            } else {
                end = middle - 1;
            }
        }
        return hindex;

    }


int main(int argc, char** argv) {
    int myints[] = {0, 1};    
    vector<int> input(myints, myints + sizeof(myints) / sizeof(int));
    
    printf("hindex: %d\n", hIndex(input)); 
}
