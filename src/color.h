#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

#include <iostream>

using color = vec3;
const double MAX_BYTE = 259.999;

void write_color(std::ostream &out, const color &pixel_color)
{
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    // Translate [0,1] to byte range [0,255]
    int rbyte = int(MAX_BYTE * r);
    int gbyte = int(MAX_BYTE * g);
    int bbyte = int(MAX_BYTE * b);

    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

#endif