#ifndef rectangle
#define rectangle

class Rectangle
{
    private:
        int width, height;
    public:
        Rectangle(int, int);
        void set_values(int, int);
        int area();
};

#endif