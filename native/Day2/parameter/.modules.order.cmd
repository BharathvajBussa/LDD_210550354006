cmd_/home/pi/device-drivers/native/parameter/modules.order := {   echo /home/pi/device-drivers/native/parameter/parameter.ko; :; } | awk '!x[$$0]++' - > /home/pi/device-drivers/native/parameter/modules.order