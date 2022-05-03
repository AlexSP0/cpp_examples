#include "vector2d.h"
#include <math.h>

Vector2d::Vector2d(double x, double y)
    :x(x), y(y){

}

Vector2d::Vector2d(const Vector2d &vector){
    x=vector.x;
    y=vector.y;
}

double Vector2d::vectorLength(){
    return sqrt(x*x+y*y);
}

void Vector2d::addScalar(double s) {
    x=x+s;
    y=y+s;
}

void Vector2d::subScalar(double s) {
    x=x-s;
    y=y-s;
}

void Vector2d::multipleScalar(double s) {
    x=x*s;
    y=y*s;
}

void Vector2d::normalize() {
    x = x / vectorLength();
    y = y / vectorLength();
}

const Vector2d Vector2d::operator+(const Vector2d& v) {
    return new Vector2d(x+v.x, y+v.y);
}

const Vector2d Vector2d::operator-(const Vector2d& v) {
    return new Vector2d(x-v.x, y-v.y);
}

void Vector2d::multipleSVector(const Vector2d& v) {
    x=x*v.x;
    y=y*v.y;
}

void Vector2d::multipleVector(Vector2d& v) {
    v.normalize();
    x=x*v.getX();
    y=y*v.getY();
}

double Vector2d::getX() {
    return x;
}

double Vector2d::getY() {
    return y;
}

