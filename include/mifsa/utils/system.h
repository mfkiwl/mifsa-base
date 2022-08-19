/*********************************************************************************
 *Copyright @ Fibocom Technologies Co., Ltd. 2019-2030. All rights reserved.
 *Author:  Juntuan.Lu
 *Version: 1.0
 *Date:  2022/04/01
 *Phone: 15397182986
 *Description:
 *Others:
 *Function List:
 *History:
 **********************************************************************************/

#ifndef MIFSA_UTILS_SYSTEM_H
#define MIFSA_UTILS_SYSTEM_H

#include "mifsa/base/define.h"
#include <string>

MIFSA_NAMESPACE_BEGIN

namespace Utils {
extern MIFSA_EXPORT bool programCheckSingleton(const std::string& programName) noexcept;
extern MIFSA_EXPORT bool programRegisterTerminate(void (*ExitCallBack)(int)) noexcept;
extern MIFSA_EXPORT bool freeUnusedMemory() noexcept;
}

MIFSA_NAMESPACE_END
#endif // MIFSA_UTILS_SYSTEM_H
