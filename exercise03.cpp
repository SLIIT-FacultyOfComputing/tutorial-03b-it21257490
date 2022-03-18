#include <iostream>

using namespace std;

struct Box{
  int height;
  int width;
  int length;
}box1,box2;

int volume(int height, int width, int length);

int main() {
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : "<<endl;
    cin >> box1.height;
    cout << "Enter Box 1 Width : "<<endl;
    cin >> box1.width;
    cout << "Enter Box 1 Length : "<<endl;
    cin >> box1.length;
    
    cout << "Enter Box 2 Height : "<<endl;
    cin >> box2.height;
    cout << "Enter Box 2 Width : "<<endl;
    cin >> box2.width;
    cout << "Enter Box 2 Length : "<<endl;
    cin >> box2.length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(box1.height ,box1.width ,box1.length )
             + volume( box2.height,box2.width, box2.length );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here

int volume(int height, int width, int length)
{
  return(height*width*length);
}

