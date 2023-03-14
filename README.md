# Macro_Keyboard

## HARDWARE

- STM32F103C6T6 最小系统板：【淘宝】https://m.tb.cn/h.UKbKojJ?tk=ipwed8BvzSd CZ3457 「STM32F103C8T6单片机开发板 最小系统板C6T6核心板 ARM实验板CH32」
点击链接直接打开 或者 淘宝搜索直接打开
- PCB：立创EDA绘制打样或铜板腐蚀
- 凯华轴座
- 普通机械键盘轴体和键帽
- 其他：0805 10k 电阻，15*1 排母等

## PCB

- TODO

## CODE

代码使用 STM32CUBEMX 生成 Makefile 格式。在根目录执行 `make` 后会在 `/build` 生成 Hex 文件和 Bin 文件。

- `/USB_DEVICE` 路径下存放 USB 驱动程序；
- `/Middlewares` 路径下存放 USB HID 驱动程序；

## NOTE

- 标准机械键盘键距为 `19mm-19.5mm`，设计PCB时需要注意对齐和间距；
- 键盘HID标识符配置可以在 [HID Descriptor Tool](https://usb.org/document-library/hid-descriptor-tool) 中获取；
- 键盘的USB数据包可以通过 WireShark 抓取；

