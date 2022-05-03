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

    void addScalar(double);  //Сложение со скаляром
    void subScalar(double);  //Вычитание скаляра
    void multipleScalar(double); //умножение на скаляр
    void divScalar(double); //деление на скаляр

    void normalize(); //Нормализация вектора

    const Vector2d operator+(const Vector2d&);
    const Vector2d operator-(const Vector2d&);

    void multipleSVector(const Vector2d&); //Скалярное произведение векторов
    void multipleVector(Vector2d& v); //Векторное произведение


    double getX();
    double getY();
};

#endif //VECTOR2D_H
