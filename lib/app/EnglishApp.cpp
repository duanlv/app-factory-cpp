#include <iostream>
#include "EnglishApp.h"

const char *EnglishApp::word = "Hello";

void EnglishApp::sayHello() {
    std::cout << EnglishApp::word << std::endl;
}

#ifdef __cplusplus
extern "C" {
    IApplication* createApp(void) {
        EnglishApp *app = new EnglishApp();
        return dynamic_cast<IApplication *>(app);
    }

    void destroyApp(IApplication* app) {
        delete app;
    }
};
#endif //__cplusplus
