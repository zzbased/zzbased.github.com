
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;
class Solution {
public:
    
    string TwentyToWords(int num) {
        if (num > 19 || num < 0) {
            printf("Error1:%d\n", num);
        }
        static const char* storage[20] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", 
            "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seveteen", "Eighteen", "Nineteen"};
        return storage[num];
    }
    
    string HundredToWords(int num) {
        string output;
        if (num > 99 || num < 20) {
            printf("Error2:%d\n", num);
        }
        static const char* storage[8] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        output = storage[num / 10 - 2];
        if (num % 10 > 0) {
            output += " ";
            output += TwentyToWords(num % 10);
        }
        return output;
    }

    string ThousandToWords(int num) {
        if (num < 0 || num > 999) {
            printf("Error3:%d\n", num);
        }
        string output;
        if (num / 100 > 0) {
            output += TwentyToWords(num / 100) + " " + "Hundred" + " ";
            num = num % 100;
        }
        if (num >= 20) {
            output += HundredToWords(num);
            num = num % 10;
        } else if (num > 0 && num < 20) {
            output += TwentyToWords(num);
        }
        if (output[output.size() - 1] == ' ') {
	    output.resize(output.size() - 1);
	}
	return output;
    }
    
    // 1234567 -> "One Million Two Hundred Thirty Four Thousand Five Hundred Sixty Seven"
    string numberToWords(int num) {
        static const int kOneBillion = 1000000000;
        static const int kOneMillion = 1000000;
        static const int kOneThousand = 1000;
        if (num == 0) {
            return "Zero";
        }        
        string output;
        if (num / kOneBillion > 0) {
            int billion = num / kOneBillion;
            output += ThousandToWords(billion) + " " + "Billion" + " ";
            num = num % kOneBillion;
        }
        
        if (num / kOneMillion > 0) {
            int million = num / kOneMillion;
            output += ThousandToWords(million) + " " + "Million" + " ";
            num = num % kOneMillion;
        }
        
        if (num / kOneThousand > 0) {
            int thousand = num / kOneThousand;
            output += ThousandToWords(thousand) + " " + "Thousand" + " ";            
            num = num % kOneThousand;
        }
        
        output += ThousandToWords(num);
        
        return output;
    }
};

int main(int argc, char** argv) {

	Solution so;
        std::cout << 123 << so.numberToWords(123).c_str() << std::endl;
        std::cout << 10000 << so.numberToWords(10000).c_str() << std::endl;
        std::cout << 1234567 << so.numberToWords(1234567).c_str() << std::endl;
        std::cout << 1234567891 << so.numberToWords(1234567891).c_str() << std::endl;
        std::cout << 0 << so.numberToWords(0).c_str() << std::endl;
  
        std::cout << 1000 << so.numberToWords(1000).c_str() << std::endl;
        std::cout << 1000000 << so.numberToWords(1000000).c_str() << std::endl;
        std::cout << 1000000000 << so.numberToWords(1000000000).c_str() << std::endl;
	return 0;
}
