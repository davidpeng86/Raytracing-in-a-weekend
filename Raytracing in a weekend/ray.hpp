//
//  ray.hpp
//  Raytracing in a weekend
//
//  Created by Dubito on 2019/11/17.
//  Copyright © 2019 Dubito. All rights reserved.
//

#ifndef ray_hpp
#define ray_hpp

#include <stdio.h>
#include "vec3.hpp"

class ray{
public:
    ray(){}
    ray(const vec3& a, const vec3& b){ A = a; B = b;}
    vec3 origin() const {return A;}
    vec3 direction() const {return B;}
    vec3 point_at_parameter(float t) const {return A + t*B;}
    
    vec3 A, B;
};

#endif /* ray_hpp */