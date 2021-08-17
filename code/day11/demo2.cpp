// 改写day9中demo3的日志

#include <iostream>
using namespace std;

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
            cout << "[Info]: " << message << endl;
    }
    void Error(const char* message)
    {
        if (LogLevel_m <= 2)
            cout << "[Error]: " << message << endl;
    }
    void Warn(const char* message)
    {
        if (LogLevel_m <= 0)
            cout << "[Warning]: " << message << endl;
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

