#ifndef point_h
#define point_h

void writeOutput();

class point {
    private:
        int x;
        int y;

    public:
        void setX(int x);
        void setY(int y);
        int getX();
        int getY();
        void print() const;
        point();
        point(int xin, int yin);
        float distanceTo(const point p) const;
};

#endif