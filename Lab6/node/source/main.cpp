//
// Created by kajet on 15.11.2021.
//

#include "Node.h"
#include "Vector.h"

int main(){
    Node pkt1(2, 3), pkt2(4,6);
    cout << pointsDistance(pkt1, pkt2) << endl;
    Vector v1(9,7), v2(2,6);
    print(-v1);
    print(v1*4);
    print(v1+v2);
    return 0;
}
