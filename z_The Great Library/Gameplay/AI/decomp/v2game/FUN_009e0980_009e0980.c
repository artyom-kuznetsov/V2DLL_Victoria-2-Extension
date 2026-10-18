// FUN_009e0980 @ 009e0980 body=[[009e0980, 009e09b1]]


undefined4 FUN_009e0980(int *param_1)

{
  SHORT SVar1;
  
  SVar1 = GetKeyState(0x11);
  if (-1 < SVar1) {
    SVar1 = GetKeyState(0x10);
    if ((-1 < SVar1) && (*param_1 == 0x25)) {
      return 1;
    }
  }
  return 0;
}

