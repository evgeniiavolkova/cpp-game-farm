#ifndef ERRORLOGGER_H
#define ERRORLOGGER_H
#include <vector>
#include "error.h"


class ErrorLogger
{
private:
    std::vector<Error*>m_errorLog;
public:
    ErrorLogger();
};

#endif // ERRORLOGGER_H
