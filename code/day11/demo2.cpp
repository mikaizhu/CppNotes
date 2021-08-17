// 改写day9中demo3的日志

#include <iostream>
using namespace std;

class Log
{
    // 可以这样分隔开私有和公有变量，方便管理
  public:
    enum Level : int
    {
        LevelWarning = 0, LevelInfo = 1, LevelError = 2
    };

  private:
    Level LogLevel_m;

  public:
    void SetLevel(Level level)
    {
        LogLevel_m = level;
    }

    void Warn(const char* message)
    {
        if (LogLevel_m <= LevelWarning)
            cout << "[Warning]: " << message << endl;
    }

    void Info(const char* message)
    {
        if (LogLevel_m <= LevelInfo)
            cout << "[Info]: " << message << endl;
    }

    void Error(const char* message)
    {
        if (LogLevel_m <= LevelError)
            cout << "[Error]: " << message << endl;
    }
};

int main()
{
    Log log;
    //log.SetLevel("warn");
    //log.SetLevel("debug");
    log.SetLevel(Log::LevelInfo);
    log.Info("Hello World");
    log.Error("Hello World");
    log.Warn("Hello World");
}

