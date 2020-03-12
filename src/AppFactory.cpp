#include <stdio.h>
#include <dlfcn.h>
#include "AppFactory.h"

#ifdef __cplusplus
extern "C" {

static const char lib_dir[] = "/opt/lib";

static IApplication* loadApp(const char* app_name)
{
    void *lib_hdl;
    create_t* fn_create;
    char *error;
    char lib_path[LIB_PATH_LENGTH_MAX];

    snprintf(lib_path, LIB_PATH_LENGTH_MAX, "%s/lib%s.so", lib_dir, app_name);
    lib_hdl = dlopen(lib_path, RTLD_LAZY);
    if (!lib_hdl) {
        fprintf(stderr, "%s\n", dlerror());
        return NULL;
    }

    fn_create = (create_t *)dlsym(lib_hdl, "createApp");
    if ((error = dlerror()) != NULL) {
        fprintf(stderr, "%s\n", error);
        dlclose(lib_hdl);
        return NULL;
    }

    IApplication *pApp = fn_create();

    dlclose(lib_hdl);

    return pApp;
}

void factoryApp(const char* app_name) 
{
   if (app_name == NULL) {
       fprintf(stderr, "%s: invalid app name.\n", __func__);
       return;
   }
   IApplication *pApp = loadApp(app_name);
   if (pApp == NULL) {
       fprintf(stderr, "%s: invalid app ha(%p) (%p).\n", __func__ , pApp);
       return;
   }
   // run app
   {
        pApp->sayHello();
   }
}

}; // extern "C"

#endif
