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

#include "hardkey_input.h"
#include "input_manager.h"
#include "multimode_manager.h"
#include "wukong_define.h"

namespace OHOS {
namespace WuKong {
namespace {
const int hardkeyCount = 3;
const int downtime = 10;
}  // namespace
HardkeyInput::HardkeyInput() : InputAction() {}

HardkeyInput::~HardkeyInput() {}

ErrCode HardkeyInput::OrderInput(std::shared_ptr<SpcialTestObject>& specialTestObject)
{
    ErrCode result = OHOS::ERR_OK;
    result = MultimodeManager::GetInstance()->SingleKeyCodeInput(MMI::KeyEvent::KEYCODE_POWER, downtime);
    return result;
}

ErrCode HardkeyInput::RandomInput()
{
    ErrCode result = OHOS::ERR_OK;
    int keycode = MMI::KeyEvent::KEYCODE_VOLUME_UP + rand() % hardkeyCount;
    result = MultimodeManager::GetInstance()->SingleKeyCodeInput(keycode, downtime);
    return result;
}

ErrCode HardkeyInput::GetInputInfo()
{
    return OHOS::ERR_OK;
}
}  // namespace WuKong
}  // namespace OHOS
