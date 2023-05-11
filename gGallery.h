#pragma once

#include "gUtils.h"

class gBackground : gUtils
{
public:
    gBackground();
    ~gBackground();
    void render();
    void moveBackground();

private:
    Position posBackground;
};


extern vector<Position> posTree;

class gTree : gUtils
{
private:
    // random pipe verticly position
    const int treeMin = -373 + 20;
    const int treeMax = SCREEN_HEIGHT - 373 - tree_distance - 20;
    

public:
    bool init();
    void Free();
    void render();
    void update();
};


class gBird : gUtils
{
public:
    bool init();
    void render();
    void Free();
    void resetTime()
    {
        time = 0;
    }
    void update();

private:
    // time : biểu thị thời gian đã trôi qua kể từ lần cuối cùng con chim được nhảy. Được sử dụng để tính toán vị trí của con chim trên trục y khi điều khiển di chuyển của nó
    // x0: là giá trị tọa độ y của con chim lúc nó bắt đầu rơi xuống hoặc nhảy lên.
    int angle, time, x0;
    int ahead = 0;
    string saved_path = "";
    Position posBird;
};