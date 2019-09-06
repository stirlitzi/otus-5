#include "Figure.h"
#include <sstream>

Color::Color() : red_(0), green_(0), blue_(0) {}

Color::Color(const size_t &r, const size_t &g, const size_t &b) : red_(r), green_(g), blue_(b) {}

Line::Line(const Color &color, const Coordinate &point1, const Coordinate &point2) : start_(point1), end_(point2),
                                                                                     line_color_(color) {}

std::string  Line::get_view() {
    std::stringstream ss;
    ss << "Create Line from" << start_.x << "." << start_.y << "to " << end_.x << "." << end_.y << std::endl;
    return ss.str();
}

std::string Line::get_type() {
    return "Line";
}
