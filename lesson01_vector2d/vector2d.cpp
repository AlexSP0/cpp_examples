#include "vector2d.h"
#include <math.h>

Vector2d::Vector2d(double x, double y)
    :x(x), y(y){

}

Vector2d::Vector2d(const Vector2d &vector){
    x=vector.x;
    y=vector.y;
}

Vector2d::~Vector2d() {

}

double Vector2d::vectorLength(){
        return sqrt(x*x+y*y);
}

void Vector2d::normalize() {
    if (vectorLength() != 0) {
        x = x / vectorLength();
        y = y / vectorLength();
    }
}

const Vector2d* Vector2d::operator+(const Vector2d& v) {
    const Vector2d* cv = new Vector2d(x+v.x, y+v.y);
    return cv;
}

const Vector2d* Vector2d::operator-(const Vector2d& v) {
    const Vector2d* cv = new Vector2d(x-v.x, y-v.y);
    return cv;
}

const Vector2d* Vector2d::operator+(double s) {
    x=x+s;
    y=y+s;
}

const Vector2d* Vector2d::operator-(double s) {
    x=x-s;
    y=y-s;
}

const Vector2d* Vector2d::operator*(double s) {
    x=x*s;
    y=y*s;
}

const Vector2d* Vector2d::operator/(double s) {
    x=x/s;
    y=y/s;
}

void Vector2d* Vector2d::multipleSVector(const Vector2d& v) {
    const Vector2d* cv = new Vector2d(x * x.y, y * y.x);
    return cv;
}

void Vector2d* Vector2d::multipleVector(Vector2d& v) {
    const Vector2d* cv = new Vector2d(x * v.y, y * v.x);
    return cv;
}

double Vector2d::getX() {
    return x;
}

double Vector2d::getY() {
    return y;
}

