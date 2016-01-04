#include "ELAppDelegate.h"
#include "ELDirector.h"
#include "include_scenes.h"
#include <ctime>

NS_BEGIN(elloop);


bool AppDelegate::applicationDidFinishLaunching()
{

    auto director = Director::getInstance();
    assert(director);

    srand(time(0));

    // simple rectangle. pure color.
    /*auto simpleRectangle = SimpleRectangle::create();
    director->pushScene(simpleRectangle);*/

    // colorful rectangle. 
    /*auto colorRect = ColorRectangle::create();
    director->pushScene(colorRect);*/

    // circle.
    /*auto circle = Circle::create();
    director->pushScene(circle);*/

    // rotate.
   /* auto rotateRectangle = RotateRectangle::create();
    director->pushScene(rotateRectangle);*/

    // texture rectangle 1.
    /*auto texture1 = TextureRectangle1::create();
    director->pushScene(texture1);*/

    // multi texture.
    auto multiTexture = MultiTexture::create();
    director->pushScene(multiTexture);

    return true;
}

AppDelegate::AppDelegate() : Application()
{

}

AppDelegate::~AppDelegate()
{

}

NS_END(elloop);