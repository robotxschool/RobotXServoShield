library RobotXServoshield

Authors: Burmistrov Stepan, Briskindov Evgeniy.

Company: RobotX

This library provides a set of functions for operating an STM32 based servo controller.

To start working with the servo you need to enable Serial at 115200.
Then send the command to initialize needed servo.   servoInit (servo number(0-11), start position).
Servo positions are specified by pulse length in microseconds (540-2500us).

If you want to turn off the servo, use the servoReset (servo number) command.
To turn the servo to the target state, use the command

servoTurn (servo number, pulse period in microseconds, rotate speed (0 - disabled speed control. From 1 to 15), current control (0 - disabled current control. From 1 to 7))

The speed and current parameters are optional and set to 0 by default.
