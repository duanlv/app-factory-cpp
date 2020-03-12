#ifndef _IAPPLICATION_H_
#define _IAPPLICATION_H_

class IApplication {
public:
    virtual ~IApplication() {}
    virtual void sayHello() = 0;
};

typedef class IApplication* create_t();
typedef void destroy_t(IApplication*);

#endif //_IAPPLICATION_H_