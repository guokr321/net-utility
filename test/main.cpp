/**
 * This work copyright Chao Sun(qq:296449610) and licensed under
 * a Creative Commons Attribution 3.0 Unported License(https://creativecommons.org/licenses/by/3.0/).
 */

#include <iostream>

#include "../common/timer.h"
#include "../common/common-utils.h"
#include "../net/common-def.h"

#include "thread-pool-test-case.h"
#include "timer-test-case.h"
#include "mem-pool-test-case.h"
#include "tcp/client/tcp-client-test-case.h"
#include "tcp/server/tcp-server-test-case.h"

using namespace netty::common;
using namespace netty::net;

using namespace netty::test;

int main() {
    //ThreadPoolTest::Run();
    //MemPoolTest::Run();
    //TimerTest::Run();

    TcpClientTest::Run();
    //TcpServerTest::Run();

    getchar();

    return 0;
}
