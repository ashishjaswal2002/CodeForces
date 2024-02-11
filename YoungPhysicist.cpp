

  #include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0, y = 0, z = 0;
    while (n-- >= 1) {
        int force_x, force_y, force_z;
        cin >> force_x >> force_y >> force_z;
        x += force_x;
        y += force_y;
        z += force_z;
    }
    if (x == 0 && y == 0 && z == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

