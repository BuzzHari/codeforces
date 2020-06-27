#include <iostream>
#include <string>
#include <cctype>
#include <math.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while(t--){ 
        string a="", c=""; 
        int b = 0, d = 0;

        string inp;
        cin >> inp;
        int len = inp.length();
        int flag_a = 0, flag_b = 0;

        for(int i = 0; i < len; ++i) {
            
            if(toupper(inp[i]) >= 'A' && toupper(inp[i]) <= 'Z') {
                if(!flag_a)
                    a += toupper(inp[i]);
                else { 
                    flag_b = 1;
                    c += toupper(inp[i]);
                }
            }
            else {
                flag_a = 1;
                if(flag_a && !flag_b) 
                    b = b*10 + (inp[i] - '0');
                else {
                    d = d*10 + (inp[i] - '0');
                }
            }
        }
         
        string cord = "";
        int col = 0;
        int temp;
        // RxCy format.
        if( flag_a + flag_b == 2) {
            int i = 0;

            while( d > 0 ) {
                temp = d / pow(26, i);
                int temp2 = temp % 26;
                if (temp2 == 0) {
                    cord = 'Z' + cord;
                    temp2 = 26;
                }
                else {
                    cord = char(temp2 + 'A' - 1) +  cord ;
                }

                d = d - (pow(26,i) * temp2);
                i++;
            }
            
            printf("%s%d\n", cord.c_str(), b);
        }
        else {
            int len = a.size()-1;
            for(int i = 0; i < a.size(); ++i) {
                col += pow(26,len)*(a[i] - 'A' + 1 ) ;
                --len;
            }
           printf("R%dC%d\n", b, col);
        }
           
    }
    return 0;
}

