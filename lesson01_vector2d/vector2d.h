#ifndef VECTOR2D_H
#define VECTOR2D_H

class Vector2d {
private:
    double x;
    double y;

public:
    Vector2d(double x, double y);
    Vector2d(const Vector2d &vector);
    virtual ~Vector2d();

    double vectorLength();

    void normalize(); //Нормализация вектора

    const Vector2d* operator+(const Vector2d&);
    const Vector2d* operator-(const Vector2d&);

    const Vector2d* operator+(double);
    const Vector2d* operator-(double);
    const Vector2d* operator*(double);
    const Vector2d* operator/(double);

    void Vector2d* multipleSVector(const Vector2d&); //Скалярное произведение векторов
    void Vector2d* multipleVector(Vector2d& v); //Векторное произведение


    double getX();
    double getY();
};

#endif //VECTOR2D_H
