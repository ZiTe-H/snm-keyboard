
# 簡介
SNM60是[SNM-Keyboard](https://github.com/ZiTe-H/snm-keyboard)計劃的主要項目，是一個整合了滑鼠功能的60%尺寸機械式鍵盤。

# 構想
## PCB
1. PCB的尺寸及螺絲孔位要與[GH60](https://github.com/komar007/gh60)相同，令其可以兼容GH60的外殼。
2. 支援RGB-LED燈。
    1. 在<kbd>Caps Lock</kbd>鍵下方放一個獨立的RGB-LED燈，以用來指示目前鍵盤的各種狀態。
        1. 英文大小寫鎖定狀態。
        2. 數字鍵盤狀態。
        3. 目前所在的的層。使用色碼電阻或彩虹順序表示。
        4. 電量與充電狀態。
    2. 鍵盤背光。
3. 有多種按鍵佈局可供選擇。預計會有以下幾種常見的佈局。
    1. [Minila](http://www.filco.com.tw/index.php/products/index/3)
    2. [HHKB](https://happyhackingkb.com/)
    3. [Poker II](https://www.ikbckeyboard.com/product-page/new-poker-ii-black)
4. Reset按鍵要在可以比較方便按的地方，方便燒錄。

## 滑鼠功能
1. 將相關零件放在原空白鍵位置，主要以大拇指操作。
2. 使用搖桿（蘑菇頭）來移動滑鼠游標，並透過搭配組合鍵（Fn鍵）的方式來達成滑鼠滾輪。
3. 使用TrackPoint（小紅點）來移動滑鼠游標，並透過搭配組合鍵（Fn鍵）的方式來達成滑鼠滾輪。
    1. PCB在按鍵<kbd>H</kbd>、<kbd>G</kbd>、<kbd>B</kbd>的中間保留安裝TrackPoint模組的位置。
    2. 有PS/2接口以供TrackPoint模組使用。
4. 使用5向開關來作為滑鼠按鍵。包含了左、右、中鍵和另外2個額外的按鍵。
5. 不使用編碼器（Encoder）作為滑鼠滾輪。因為滾輪的零件不好取得。

## 藍牙
1. 使用藍牙低功耗（Bluetooth Low Energy，BLE）之藍牙模組。
2. 藍牙電源開關在後側（同USB孔），而不是在底下。

## 額外的功能與想法
1. 手勢感測器。提供非接觸式的操作。
2. 將<kbd>Esc</kbd>鍵改成垂直的編碼器（Encoder）。
3. 人體紅外線自動偵測藍牙電源開關。
4. 內建USB HUB。
5. 軌跡球。
6. 懸浮Fn鍵。非接觸式的Fn鍵
7. 懸浮滑鼠操作。透過非接觸式的距離感測器來操作滑鼠。
    1. 有上下左右4個感測器。
    2. 讀取距離最短的。
    3. 距離遠近代表移動速度。
    4. 快速變換距離代表左右鍵。
8. 使用大拇指操作的按鍵必須要可以裝斜的（如空白鍵反裝）。

# 鍵盤佈局（Layout）
![SNM60 Keyboard Layout Ver1.0](https://raw.githubusercontent.com/ZiTe-H/snm-keyboard/develop/SNM60/Hardware/keyboard_layout_editor/snm60_layout_ver1.0.png)
