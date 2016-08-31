#ifndef EllipseSerializer_h
#define EllipseSerializer_h 1

#include "geometry/Ellipse.h"

DRISHTI_GEOMETRY_BEGIN

class EllipseSerializer : public cv::RotatedRect
{
public:

    EllipseSerializer() {}
    EllipseSerializer(const cv::RotatedRect &e) : cv::RotatedRect(e) {}
    void read(const cv::FileNode& node);
    void write(cv::FileStorage& fs) const;
};

void write(cv::FileStorage& fs, const std::string&, const EllipseSerializer& x);
void read(const cv::FileNode& node, EllipseSerializer& x, const EllipseSerializer & default_value);

DRISHTI_GEOMETRY_END

#endif // EllipseSerializer_h 1
