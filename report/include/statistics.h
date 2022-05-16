/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TEST_WUKONG_STATISTICS
#define TEST_WUKONG_STATISTICS
#include <string>

#include "wukong_define.h"
namespace OHOS {
namespace WuKong {
class Statistics {
public:
    Statistics();
    virtual ~Statistics();
    virtual ErrCode StatisticsDetail();
};
}  // namespace WuKong
}  // namespace OHOS
#endif