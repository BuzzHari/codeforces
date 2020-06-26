#include <iostream>


int main() {
    int t;
    scanf("%d", &t);
    int x = 0, y = 0, z = 0;
    int s_x = 0, s_y = 0, s_z = 0;
    for(int i = 0; i < t; ++i) {
        scanf("%d %d %d", &x, &y, &z);
        s_x += x;
        s_y += y;
        s_z += z;
    }

    if ((s_x == 0 && s_y == 0 ) && s_z == 0)
        printf("YES");
    else 
        printf("NO");
    return 0;
}

