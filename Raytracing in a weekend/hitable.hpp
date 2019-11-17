//
//  hitable.hpp
//  Raytracing in a weekend
//
//  Created by Dubito on 2019/11/17.
//  Copyright © 2019 Dubito. All rights reserved.
//

#ifndef hitable_hpp
#define hitable_hpp

#include "ray.hpp"

struct hit_record{
    float t;
    vec3 p;
    vec3 normal;
};

class hitable{
public:
    virtual bool hit(const ray& r, float t_min, float t_max, hit_record& rec) const = 0;
};

#endif /* hitable_hpp */
