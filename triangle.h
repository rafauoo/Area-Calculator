#ifndef triangle
#define triangle

class Triangle
{
    private:
        int base, height;
    public:
        Triangle(int, int);
        void set_values(int, int);
        float area();
};

#endif