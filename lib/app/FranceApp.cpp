#include <iostream>
#include "FranceApp.h"

const char *FranceApp::word = "Bonjour";

void FranceApp::sayHello() {
    std::cout << FranceApp::word << std::endl;
}

#ifdef __cplusplus
extern "C" {
    IApplication* createApp(void) {
        FranceApp *app = new FranceApp();
        return dynamic_cast<IApplication *>(app);
    }

    void destroyApp(IApplication* app) {
        delete app;
    }
};
#endif //__cplusplus
