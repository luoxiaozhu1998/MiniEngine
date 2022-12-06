//
// Created by 71836 on 2022/11/10.
//

#ifndef MINIENGINE_TIMESTEP_H
#define MINIENGINE_TIMESTEP_H
namespace mini {
    class TimeStep {
    public:
        explicit TimeStep(float time = 0.0f);

        explicit operator float() const { return m_time_; }

        [[nodiscard]] float GetSeconds() const;

        [[nodiscard]] float GetMillSeconds() const;

    private:
        float m_time_;
    };
}
#endif //MINIENGINE_TIMESTEP_H
