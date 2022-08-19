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

#ifndef MIFSA_BASE_POOL_H
#define MIFSA_BASE_POOL_H

#include "mifsa/base/define.h"
#include <functional>
#include <stdint.h>

MIFSA_NAMESPACE_BEGIN

class MIFSA_EXPORT Pool final {
public:
    using Callback = std::function<void()>;
    explicit Pool(uint32_t thread_count);
    ~Pool();
    void enqueue(const Callback& cb);
    void shutdown();

private:
    struct PoolHelper* m_poolHelper = nullptr;
};

MIFSA_NAMESPACE_END

#endif // MIFSA_BASE_POOL_H
