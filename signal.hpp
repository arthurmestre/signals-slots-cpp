#ifndef SIGNAL_H
#define SIGNAL_H
#include <functional>

template <typename Return, typename... Args>
class Signal
{
public:
    void connect(std::function<Return(Args...)> f)
    {
        this->method = f;
    }
    void operator()(Args... args)
    {
        if(this->method == nullptr)
            return;
        this->method(args...);
    }
private:
    std::function<Return(Args... args)> method = nullptr;
};

#endif // SIGNAL_H
