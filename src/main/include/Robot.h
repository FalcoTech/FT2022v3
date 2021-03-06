// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <string>

#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;
  //void SimulationInit() override;
  //void SimulationPeriodic() override;
  void MoveClimber(double rotations);
  void AutoShootAtTargetPRM(double rpm);
  void DriveRobot(double distance);
  void DriveRobotForward(units::second_t time);
  void RotateRobot(units::degrees degrees);
  void ExtendClimber();
  void RetractClimber();
  void ExtendIntake();
  void RetractIntake();
  void HighGear();
  void LowGear();
  void RunIntake(units::second_t time);
  void RunIntake(units::second_t time, bool invert);
  void RunIntake();
  void RunIntake(bool invert);
  void StopIntake();
  void RunShooter(units::second_t time);
  void RunShooter(units::second_t time, double percentOutput);
  void RunShooter(double percentOutput);
  void StopShooter();
  void RunShooterAtRPM(units::second_t time, double rpm);
  void RunShooterAtRPM(double rpm);
  void DefaultAuto();
  void OnlyDriveAuto();

 private:
  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;
};
