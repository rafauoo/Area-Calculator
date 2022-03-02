#ifndef circle
#define circle

class Circle
{
    private:
        int radius;
    public:
        Circle(int);
        void set_radius(int);
        float area();
};

#endif