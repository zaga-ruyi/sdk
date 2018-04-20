namespace csharp Ruyi.SDK.GlobalInputDefine
namespace cpp Ruyi.SDK.GlobalInputDefine

enum RuyiInputDeviceType {
    XB360 = 0,
    Mouse = 1,
    Keyboard = 2,
    Joystick = 3,
    Gamepad = 4,
    Driving = 5,
    Flight = 6,
    FirstPerson = 7,
    ControlDevice = 8,
    ScreenPointer = 9,
    Remote = 10,
    Supplemental = 11,
    RuyiController = 100,
}

enum GamepadButtonFlags {
    Y = -32768,
    None = 0,
    DPadUp = 1,
    DPadDown = 2,
    DPadLeft = 4,
    DPadRight = 8,
    Start = 16,
    Back = 32,
    LeftThumb = 64,
    RightThumb = 128,
    LeftShoulder = 256,
    RightShoulder = 512,
    A = 4096,
    B = 8192,
    X = 16384,
    LeftTrigger = 32768,
    RightTrigger = 65536,
    LeftThumbX = 131072,
    LeftThumbY = 262144,
    RightThumbX = 524288,
    RightThumbY = 1048576,
}

enum Key {
    Unknown = 0,
    Escape = 1,
    D1 = 2,
    D2 = 3,
    D3 = 4,
    D4 = 5,
    D5 = 6,
    D6 = 7,
    D7 = 8,
    D8 = 9,
    D9 = 10,
    D0 = 11,
    Minus = 12,
    Equals = 13,
    Back = 14,
    Tab = 15,
    Q = 16,
    W = 17,
    E = 18,
    R = 19,
    T = 20,
    Y = 21,
    U = 22,
    I = 23,
    O = 24,
    P = 25,
    LeftBracket = 26,
    RightBracket = 27,
    Return = 28,
    LeftControl = 29,
    A = 30,
    S = 31,
    D = 32,
    F = 33,
    G = 34,
    H = 35,
    J = 36,
    K = 37,
    L = 38,
    Semicolon = 39,
    Apostrophe = 40,
    Grave = 41,
    LeftShift = 42,
    Backslash = 43,
    Z = 44,
    X = 45,
    C = 46,
    V = 47,
    B = 48,
    N = 49,
    M = 50,
    Comma = 51,
    Period = 52,
    Slash = 53,
    RightShift = 54,
    Multiply = 55,
    LeftAlt = 56,
    Space = 57,
    Capital = 58,
    F1 = 59,
    F2 = 60,
    F3 = 61,
    F4 = 62,
    F5 = 63,
    F6 = 64,
    F7 = 65,
    F8 = 66,
    F9 = 67,
    F10 = 68,
    NumberLock = 69,
    ScrollLock = 70,
    NumberPad7 = 71,
    NumberPad8 = 72,
    NumberPad9 = 73,
    Subtract = 74,
    NumberPad4 = 75,
    NumberPad5 = 76,
    NumberPad6 = 77,
    Add = 78,
    NumberPad1 = 79,
    NumberPad2 = 80,
    NumberPad3 = 81,
    NumberPad0 = 82,
    Decimal = 83,
    Oem102 = 86,
    F11 = 87,
    F12 = 88,
    F13 = 100,
    F14 = 101,
    F15 = 102,
    Kana = 112,
    AbntC1 = 115,
    Convert = 121,
    NoConvert = 123,
    Yen = 125,
    AbntC2 = 126,
    NumberPadEquals = 141,
    PreviousTrack = 144,
    AT = 145,
    Colon = 146,
    Underline = 147,
    Kanji = 148,
    Stop = 149,
    AX = 150,
    Unlabeled = 151,
    NextTrack = 153,
    NumberPadEnter = 156,
    RightControl = 157,
    Mute = 160,
    Calculator = 161,
    PlayPause = 162,
    MediaStop = 164,
    VolumeDown = 174,
    VolumeUp = 176,
    WebHome = 178,
    NumberPadComma = 179,
    Divide = 181,
    PrintScreen = 183,
    RightAlt = 184,
    Pause = 197,
    Home = 199,
    Up = 200,
    PageUp = 201,
    Left = 203,
    Right = 205,
    End = 207,
    Down = 208,
    PageDown = 209,
    Insert = 210,
    Delete = 211,
    LeftWindowsKey = 219,
    RightWindowsKey = 220,
    Applications = 221,
    Power = 222,
    Sleep = 223,
    Wake = 227,
    WebSearch = 229,
    WebFavorites = 230,
    WebRefresh = 231,
    WebStop = 232,
    WebForward = 233,
    WebBack = 234,
    MyComputer = 235,
    Mail = 236,
    MediaSelect = 237,
}

enum MouseOffset {
    X = 0,
    Y = 4,
    Z = 8,
    Buttons0 = 12,
    Buttons1 = 13,
    Buttons2 = 14,
    Buttons3 = 15,
    Buttons4 = 16,
    Buttons5 = 17,
    Buttons6 = 18,
    Buttons7 = 19,
}

enum JoystickOffset {
    X = 0,
    Y = 4,
    Z = 8,
    RotationX = 12,
    RotationY = 16,
    RotationZ = 20,
    Sliders0 = 24,
    Sliders1 = 28,
    PointOfViewControllers0 = 32,
    PointOfViewControllers1 = 36,
    PointOfViewControllers2 = 40,
    PointOfViewControllers3 = 44,
    Buttons0 = 48,
    Buttons1 = 49,
    Buttons2 = 50,
    Buttons3 = 51,
    Buttons4 = 52,
    Buttons5 = 53,
    Buttons6 = 54,
    Buttons7 = 55,
    Buttons8 = 56,
    Buttons9 = 57,
    Buttons10 = 58,
    Buttons11 = 59,
    Buttons12 = 60,
    Buttons13 = 61,
    Buttons14 = 62,
    Buttons15 = 63,
    Buttons16 = 64,
    Buttons17 = 65,
    Buttons18 = 66,
    Buttons19 = 67,
    Buttons20 = 68,
    Buttons21 = 69,
    Buttons22 = 70,
    Buttons23 = 71,
    Buttons24 = 72,
    Buttons25 = 73,
    Buttons26 = 74,
    Buttons27 = 75,
    Buttons28 = 76,
    Buttons29 = 77,
    Buttons30 = 78,
    Buttons31 = 79,
    Buttons32 = 80,
    Buttons33 = 81,
    Buttons34 = 82,
    Buttons35 = 83,
    Buttons36 = 84,
    Buttons37 = 85,
    Buttons38 = 86,
    Buttons39 = 87,
    Buttons40 = 88,
    Buttons41 = 89,
    Buttons42 = 90,
    Buttons43 = 91,
    Buttons44 = 92,
    Buttons45 = 93,
    Buttons46 = 94,
    Buttons47 = 95,
    Buttons48 = 96,
    Buttons49 = 97,
    Buttons50 = 98,
    Buttons51 = 99,
    Buttons52 = 100,
    Buttons53 = 101,
    Buttons54 = 102,
    Buttons55 = 103,
    Buttons56 = 104,
    Buttons57 = 105,
    Buttons58 = 106,
    Buttons59 = 107,
    Buttons60 = 108,
    Buttons61 = 109,
    Buttons62 = 110,
    Buttons63 = 111,
    Buttons64 = 112,
    Buttons65 = 113,
    Buttons66 = 114,
    Buttons67 = 115,
    Buttons68 = 116,
    Buttons69 = 117,
    Buttons70 = 118,
    Buttons71 = 119,
    Buttons72 = 120,
    Buttons73 = 121,
    Buttons74 = 122,
    Buttons75 = 123,
    Buttons76 = 124,
    Buttons77 = 125,
    Buttons78 = 126,
    Buttons79 = 127,
    Buttons80 = 128,
    Buttons81 = 129,
    Buttons82 = 130,
    Buttons83 = 131,
    Buttons84 = 132,
    Buttons85 = 133,
    Buttons86 = 134,
    Buttons87 = 135,
    Buttons88 = 136,
    Buttons89 = 137,
    Buttons90 = 138,
    Buttons91 = 139,
    Buttons92 = 140,
    Buttons93 = 141,
    Buttons94 = 142,
    Buttons95 = 143,
    Buttons96 = 144,
    Buttons97 = 145,
    Buttons98 = 146,
    Buttons99 = 147,
    Buttons100 = 148,
    Buttons101 = 149,
    Buttons102 = 150,
    Buttons103 = 151,
    Buttons104 = 152,
    Buttons105 = 153,
    Buttons106 = 154,
    Buttons107 = 155,
    Buttons108 = 156,
    Buttons109 = 157,
    Buttons110 = 158,
    Buttons111 = 159,
    Buttons112 = 160,
    Buttons113 = 161,
    Buttons114 = 162,
    Buttons115 = 163,
    Buttons116 = 164,
    Buttons117 = 165,
    Buttons118 = 166,
    Buttons119 = 167,
    Buttons120 = 168,
    Buttons121 = 169,
    Buttons122 = 170,
    Buttons123 = 171,
    Buttons124 = 172,
    Buttons125 = 173,
    Buttons126 = 174,
    Buttons127 = 175,
    VelocityX = 176,
    VelocityY = 180,
    VelocityZ = 184,
    AngularVelocityX = 188,
    AngularVelocityY = 192,
    AngularVelocityZ = 196,
    VelocitySliders0 = 200,
    VelocitySliders1 = 204,
    AccelerationX = 208,
    AccelerationY = 212,
    AccelerationZ = 216,
    AngularAccelerationX = 220,
    AngularAccelerationY = 224,
    AngularAccelerationZ = 228,
    AccelerationSliders0 = 232,
    AccelerationSliders1 = 236,
    ForceX = 240,
    ForceY = 244,
    ForceZ = 248,
    TorqueX = 252,
    TorqueY = 256,
    TorqueZ = 260,
    ForceSliders0 = 264,
    ForceSliders1 = 268,
}

enum RuyiControllerKey {
    eButtonL3 = 1,
    eButtonR3 = 2,
    eButtonX = 4,
    eButtonB = 8,
    eButtonY = 16,
    eButtonA = 32,
    eButtonL1 = 64,
    eButtonR1 = 128,
    eButtonLeft = 256,
    eButtonRight = 512,
    eButtonUp = 1024,
    eButtonDown = 2048,
    eButtonStart = 4096,
    eButtonBack = 8192,
    eButtonHome = 16384,
    eAnalogL2 = 32768,
    eAnalogR2 = 65536,
    eAnalogLeftJoyX = 131072,
    eAnalogLeftJoyY = 262144,
    eAnalogRightJoyX = 524288,
    eAnalogRightJoyY = 1048576,
}

enum RuyiActionActivateEvent {
    eKeyDown = 1,
    eKeyUp = 2,
    eKeyDownAndUp = 3,
}


struct Gamepad {
    /** enum.GamepadButtonFlags */
	1: i32 Buttons,
    2: i8 LeftTrigger,
    3: i8 RightTrigger,
    4: i16 LeftThumbX,
    5: i16 LeftThumbY,
    6: i16 RightThumbX,
    7: i16 RightThumbY,
}

struct RuyiInputStateXB360 {
    1: i32 PacketNumber,
    2: Gamepad gamepad,
}

struct RuyiInputStateKeyboard {
    1: i32 RawOffset,
    2: i32 Value,
    3: i32 Timestamp,
    4: i32 Sequence,
    5: Key Key,
    6: bool IsPressed,
    7: bool IsReleased,
}

struct RuyiInputStateMouse {
    1: i32 RawOffset,
    2: i32 Value,
    3: i32 Timestamp,
    4: i32 Sequence,
    5: MouseOffset Offset,
    6: bool IsButton,
}

struct RuyiInputStateGamepad {
    1: i32 RawOffset,
    2: i32 Value,
    3: i32 Timestamp,
    4: i32 Sequence,
    5: JoystickOffset Offset,
}

struct RuyiInputStateJoystick {
    1: i32 RawOffset,
    2: i32 Value,
    3: i32 Timestamp,
    4: i32 Sequence,
    5: JoystickOffset Offset,
}

struct RuyiInputStateRuyiController {
    1: i64 PacketId,
    2: i32 ChannelId,
    3: string DeviceId,
    4: i32 KeyPress,
    5: i8 AnalogL2,
    6: i8 AnalogR2,
    7: i8 AnalogLeftJoyX,
    8: i8 AnalogLeftJoyY,
    9: i8 AnalogRightJoyX,
    10: i8 AnalogRightJoyY,
}


/** From 0 to 255 */
const byte AnalogChangeSensitivity = 1

/** From 0 to 255 */
const byte AnalogTriggerActionValue = 30

/** In miniseconds. */
const i32 RuyiInputCombineTime = 230

const i32 RuyiGamepadJoyDefaultValue = 128

