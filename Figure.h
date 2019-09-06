#include <vector>
#include <iostream>
#ifndef EDITOR_FIGURE_H
#define EDITOR_FIGURE_H
struct Coordinate{
    size_t x;
    size_t y;
};


class Color{
public:
    Color();
    Color(const size_t& r, const size_t& g, const size_t& b);
private:
    size_t red_;
    size_t green_;
    size_t blue_;
};

class Figure{
public:
    virtual std::string get_view() = 0;
    virtual std::string get_type() = 0;
};

class Line : public Figure{
    public:
    Line(const Color& color,const Coordinate& point1, const Coordinate& point2);
    std::string get_view() override ;
    std::string get_type() override;
private:
    Coordinate start_;
    Coordinate end_;
    Color line_color_;
};

#endif //EDITOR_FIGURE_H
