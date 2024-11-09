#include "rectangle.h"

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

Rectangle::Rectangle() {}

void Rectangle::getArea()
{
    cout<<"Recrangle area is " <<width * height<<endl;

}

void Rectangle::getCircum()
{
    cout<<"Recrangle circumference is " <<2 * (width + height)<<endl;
}
