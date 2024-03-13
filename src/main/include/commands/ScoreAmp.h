// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/Command.h>
#include <frc2/command/CommandHelper.h>

#include "subsystems/Intake.h"
#include "subsystems/Shooter.h"

class ScoreAmp : public frc2::CommandHelper<frc2::Command, ScoreAmp> {
 public:
  ScoreAmp(Intake*, Shooter*);

  void Initialize() override;

  void Execute() override;

  void End(bool interrupted) override;

  bool IsFinished() override;

  private:
    Intake* m_intake;
    Shooter* m_shooter;
};
