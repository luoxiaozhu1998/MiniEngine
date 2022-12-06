//
// Created by 71836 on 2022/11/10.
//

#include "TimeStep.h"

namespace mini {

    TimeStep::TimeStep(float time) : m_time_(time) {
    }

    float TimeStep::GetSeconds() const {
        return m_time_;
    }

    float TimeStep::GetMillSeconds() const {
        return m_time_ * 1000.0f;
    }
}