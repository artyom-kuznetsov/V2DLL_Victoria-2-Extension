// FUN_009e0a40 @ 009e0a40 body=[[009e0a40, 009e0a60]]


uint FUN_009e0a40(void)

{
  SHORT SVar1;
  int *in_EAX;
  undefined2 extraout_var;
  
  if ((*in_EAX == 0x27) && (in_EAX[1] != 0x102)) {
    SVar1 = GetKeyState(0x10);
    in_EAX = (int *)CONCAT22(extraout_var,SVar1);
    if (SVar1 < 0) {
      return CONCAT31((int3)((uint)in_EAX >> 8),1);
    }
  }
  return (uint)in_EAX & 0xffffff00;
}

