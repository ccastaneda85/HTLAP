#include<iostream>

using std::cout;
using std::endl;
using std::string;

void pyramid(int n, string pos) {

    if (n == 0) return;

    if (pos == "top") {
        pyramid(n - 1, "left");
        for(int i = 0; i < n; i++)
            cout << "#";
        cout << endl;
        pyramid(n-1, "right");
    }
        
    if(pos == "left") {
        pyramid(n - 1, "left");
         for(int i = 0; i < n; i++)
            cout << "#";
        cout << endl;
    }

    if(pos == "right") {
         for(int i = 0; i < n; i++)
            cout << "#";
        cout << endl;
        pyramid(n - 1, "right");
    }

}

string pyramid2(int n) {
    string pyramid = "";

    int l = 1;
    for (int i = 0; i < n; i++){
        for(int j = 1; j < n - i; j++) {
            pyramid += " ";
        }

        for(int k = 1; k <= l; k++) {
            pyramid += "^";
        }

        pyramid += "\n";            
        l += 2;
    }

    return pyramid;
}

void printPyramid(int n) {
    for (int i = 1; i <= n; ++i) {
        // Print spaces
        std::cout << std::string(n - i, ' ');

        // Print stars
        std::cout << std::string(2 * i - 1, '*');

        // New line after each row
        std::cout << std::endl;
    }
}

std::string generatePyramid(int n) {
    std::string pyramid;

    for (int i = 1; i <= n; ++i) {
        // Append spaces
        pyramid += std::string(n - i, ' ');

        // Append stars
        pyramid += std::string(2 * i - 1, '*');

        // Add a newline except for the last row
        if (i < n) {
            pyramid += '\n';
        }
    }

    return pyramid;
}

int main(int argc, char const *argv[])
{
    
    int num;

    cout << "Enter a number ";
    
    std::cin >> num;
    string mystring = pyramid2(num);

    cout << mystring;
    
    
    




    return 0;
}
