class Wektor2D
{
private:
    double x_p;
    double y_p;

public:
    Wektor2D(double x = 0, double y = 0)
    {
        x_p = x;
        y_p = y;
    };

    void setX(double x) { x_p = x; };

    void setY(double y) { y_p = y; };

    double getX() { return x_p; };

    double getY() { return y_p; };

    // dodawqnie wektorow
    Wektor2D operator+(Wektor2D& other) { return Wektor2D(x_p + other.x_p, y_p + other.y_p); }

    // iloczyn skalarny
    double operator*(const Wektor2D& other) { return (x_p * other.x_p + y_p * other.y_p); };
};