cmd_/home/pi/device-drivers/native/chardev3/modules.order := {   echo /home/pi/device-drivers/native/chardev3/chardriver.ko; :; } | awk '!x[$$0]++' - > /home/pi/device-drivers/native/chardev3/modules.order
