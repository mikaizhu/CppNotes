// 写一个基本的日志功能类，可以设置等级，该等级以上的内容会被打印
#include <iostream>

class Log
{
    // 可以这样分隔开私有和公有变量，方便管理
  public:
    const int LogLevelWarning = 0;
    const int LogLevelInfo = 1;
    const int LogLevelError = 2;
  private:
    int LogLevel_m;
  public:
    void SetLevel(int level)
    {
        LogLevel_m = level;
    }
    void Info(const char* message)
    {
        if (LogLevel_m <= 1)
            std::cout << "[Info]: " << message << std::endl;
    }
    void Error(const char* message)
    {
        if (LogLevel_m <= 2)
            std::cout << "[Error]: " << message << std::endl;
    }
    void Warn(const char* message)
    {
        if (LogLevel_m <= 0)
            std::cout << "[Warning]: " << message << std::endl;
    }
};

int main()
{
    Log log;
    //log.SetLevel("warn");
    //log.SetLevel("debug");
    log.SetLevel(log.LogLevelError);
    log.Info("Hello World");
    log.Error("Hello World");
    log.Warn("Hello World");
}
