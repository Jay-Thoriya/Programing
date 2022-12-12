#include <iostream>
using namespace std;

class shape
{
protected:
   int width, height;

public:
   shape(int a = 0, int b = 0)
   {
      width = a;
      height = b;
   }
   int area()
   {
      cout << "perent class area :" << endl;
      return 0;
   }
};

class rectangle : public shape
{
public:
   rectangle(int a = 0, int b = 0) : shape(a, b) {}
   int arearectangl()
   {
      cout << " Rectangle class area :";
      return (width * height);
   }
};

   class triangle : public shape
   {
   public:
      triangle(int a = 0, int b = 0) : shape(a, b) {}
      int areatriangle()
      {
         cout << " triangle class area :";
         return (width * height / 2);
      }
   };
   int main()
   {
      shape *shape;
      rectangle *rea(9,6);
      triangle *tri(5,76) ;

   
      shape->area();
      cout<<"the value of "<<rea->arearectangl();
      cout<<"the value of "<<tri->areatriangle();

      return 0;
   }