class Wektor2D
{
    private:
    double X;
    double Y;
   
    public:
    Wektor2D(double x, double y){
        X = x;
        Y = y;
    };
    
    Wektor2D(){
        X = 0;
        Y = 0;
    };
    Wektor2D operator + (Wektor2D obj) {
        Wektor2D result;
        result.setX(obj.getX() + X);
        result.setY(obj.getY() + Y);;
        return result;
    }
    
    double operator * (Wektor2D obj) {
        double iloczynSkalarny = obj.getX() * X + obj.getY() * Y;
        return iloczynSkalarny;
    }
    void setX(double value) {
        X = value;
    }
    double getX() {
        return X;
    }
    void setY(double value) {
        Y = value;
    }
    double getY() {
        return Y;
    }
};
