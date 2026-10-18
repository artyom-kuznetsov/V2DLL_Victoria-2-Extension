// FUN_00b2b750 @ 00b2b750 body=[[00b2b750, 00b2b78b]]


undefined4 FUN_00b2b750(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      if (param_1[1] == 0) {
        return 6;
      }
      param_1[1] = param_1[1] + -1;
      *(undefined1 *)(uVar1 + param_2) = *(undefined1 *)*param_1;
      *param_1 = *param_1 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  return 0;
}

