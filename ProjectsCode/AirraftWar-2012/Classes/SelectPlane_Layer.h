//
//  SelectPlane_Layer.h
//  a4
//
//  Created by student on 15-7-26.
//
//

#ifndef __a4__SelectPlane_Layer__
#define __a4__SelectPlane_Layer__

#include <iostream>
#include "cocos2d.h"
USING_NS_CC;
class SelectPlane_Layer:public Layer
{
private:
    int page_node_;
    int cur_page_node_;
    Point touch_down_point_;
    Point touch_up_point_;
    Point touch_cur_point_;
    float size_x;
    float size_y;
    void goToCurNode();
public:
    SelectPlane_Layer();
    ~SelectPlane_Layer();
    virtual bool init();
    CREATE_FUNC(SelectPlane_Layer);
    void addNode(Node *level);
    virtual bool onTouchBegan(Touch *touch, Event *event);
    virtual void onTouchMoved(Touch *touch, Event *event);
    virtual void onTouchEnded(Touch *touch, Event *event);
};
#endif /* defined(__a4__SelectPlane_Layer__) */
