// FUN_009e09c0 @ 009e09c0 body=[[009e09c0, 009e09f1]]


undefined4 FUN_009e09c0(int *param_1)

{
  SHORT SVar1;
  
  SVar1 = GetKeyState(0x11);
  if (-1 < SVar1) {
    SVar1 = GetKeyState(0x10);
    if ((-1 < SVar1) && (*param_1 == 0x27)) {
      return 1;
    }
  }
  return 0;
}

