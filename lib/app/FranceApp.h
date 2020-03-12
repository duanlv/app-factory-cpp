#include "IApplication.h"

class FranceApp : public IApplication {

public:
    FranceApp() {}
    virtual ~FranceApp() {}
    virtual void sayHello();

private:
    static const char *word;
};

#ifdef __cplusplus
extern "C" {
    extern IApplication* createApp(void);
    extern void destroyApp(IApplication* app);
};
#endif //__cplusplus