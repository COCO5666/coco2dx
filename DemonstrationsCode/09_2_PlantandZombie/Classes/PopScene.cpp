//
//  PopScene.cpp
//  twenty
//
//  Created by student on 15-6-14.
//
//

#include "PopScene.h"
#include "WelcomeScene.h"
Scene *PopScene::createScene()
{
   auto popScene=Scene::create();
    auto popLayer=PopScene::create();
    popScene->addChild(popLayer);
    return popScene;}


bool PopScene::init()
{
    if (!Layer::init())
    {
        return false;
    }
   
    this->schedule(schedule_selector(PopScene::updateWelcomeScene), 3);
    
    auto popMenu=MenuItemImage::create("popcap.png","popcap2.png",CC_CALLBACK_0(PopScene::enterWelcomeScene,this));
    auto menu=Menu::create(popMenu,NULL);
    this->addChild(menu);
    
    return true;
}
 // void PopScene::updateWelcomeScene( Ref *sender)
void PopScene::enterWelcomeScene( )
{
    Scene *scene=WelcomeScene::createScene();
    auto transitionScene=TransitionJumpZoom::create(1, scene);
    Director::getInstance()->replaceScene(transitionScene);
}
void PopScene::updateWelcomeScene(float f)
{
    Scene *scene=WelcomeScene::createScene();
    auto transitionScene=TransitionFade::create(1, scene);
    Director::getInstance()->replaceScene(transitionScene);
}