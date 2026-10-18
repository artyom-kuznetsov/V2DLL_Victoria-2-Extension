// FUN_00456700 @ 00456700 body=[[00456700, 00456796]]


void FUN_00456700(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 in_EAX;
  undefined4 local_c;
  undefined1 local_8 [4];
  
  uVar1 = param_3;
  param_3 = param_3 & 0xffffff;
  FUN_0049b7f0(&local_c,in_EAX,(int)&param_3 + 3);
  if (param_3._3_1_ != '\0') {
    param_3 = uVar1;
    FUN_0093d080(&param_3);
    if (param_1 != *(int *)(param_1 + 0xc)) {
      FUN_00445430(local_8);
      if (param_3 != *(uint *)(param_1 + 0x14)) {
        *param_2 = *(undefined4 *)(param_3 + 0x10);
        return;
      }
    }
  }
  *param_2 = local_c;
  return;
}

