//
//  main.cpp
//  Raytracing in a weekend
//
//  Created by Dubito on 2019/11/17.
//  Copyright © 2019 Dubito. All rights reserved.
//

#include <iostream>
#include "vec3.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    int nx = 200;
    int ny = 100;
    cout << "P3\n" << nx << " " << ny << "\n255\n";
    for (int j = ny-1; j >= 0; j--){
        for (int i = 0; i < nx; i++){
            vec3 col(float(i) / float(nx), float(j) / float(ny), 0.2);
            int ir = int (255.99*col[0]);
            int ig = int (255.99*col[1]);
            int ib = int (255.99*col[2]);
             
            //cout << ir << " " << ig << " " << ib << "   ";
            printf("%3i %3i %3i ", ir, ig, ib);
        }
        cout << "\n";
    }
    return 0;
}

