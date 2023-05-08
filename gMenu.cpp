#include "gMenu.h"

gMenu::gMenu(){
    initSDL(gWindow, gRenderer, SCREEN_WIDTH, SCREEN_HEIGHT, "Fly Birdie by nguyenkhanhlinh_22021158");
}

void gMenu::display(){
    SDL_RenderPresent(gRenderer);
    SDL_RenderClear(gRenderer);
}

void gMenu::displayy(){
    SDL_Rect dst = {0, 0, SCREEN_WIDTH, SCREEN_HEIGHT};
    SDL_RenderPresent(gRenderer);
    SDL_RenderCopy(gRenderer, gTexture, nullptr, &dst);
    SDL_RenderClear(gRenderer);
}

void gMenu::render_bgStart(){
    gUtils image;
    image.Load_Img(menu_path);
    image.Render_Img(0, 0);
    image.free();
}

bool gMenu::checkStart(){
    int x, y;
    SDL_GetMouseState(&x, &y);
    if (x > 322 && x < 322 + 190 && y > 212 && y < 212 + 41) return true;
    return false;
}

bool gMenu::checkQuit_Start(){
    int x, y;
    SDL_GetMouseState(&x, &y);
    if (x > 322 && x < 322 + 190 && y > 255 && y < 255 + 41) return true;
    return false;
}

bool gMenu::checkHowToPlay(){
    int x, y;
    SDL_GetMouseState(&x, &y);
    if (x > 322 && x < 322 + 190 && y > 298 && y < 298 + 41) return true;
    return false;
}

void gMenu::renderHowToPlay(){
    gUtils image;
    image.Load_Img("image/howToPlay.png");
    image.Render_Img(0, 0);
    image.free();
}

bool gMenu::checkBack(){
    int x, y;
    SDL_GetMouseState(&x, &y);
    if (x > 204 && x < 204 + 190 && y > 254 && y < 254 + 41) return true;
    return false;
}

void gMenu::playMenuSound(){
    menu_sound.init();
    menu_sound.playMenuSound();
}