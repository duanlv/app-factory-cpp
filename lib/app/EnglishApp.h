#include "IApplication.h"

class EnglishApp : public IApplication {

public:
    EnglishApp() {}
    virtual ~EnglishApp() {}
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