// FUN_00409f20 @ 00409f20 body=[[00409f20, 00409f8d]]


void FUN_00409f20(uint *param_1)

{
  uint uVar1;
  uint in_EAX;
  
  uVar1 = param_1[1];
  if ((in_EAX < uVar1) && (*param_1 <= in_EAX)) {
    if (uVar1 == param_1[2]) {
      FUN_0040a090();
    }
    FUN_0040a460(param_1[1]);
    param_1[1] = param_1[1] + 0x34;
    return;
  }
  if (uVar1 == param_1[2]) {
    FUN_0040a090();
  }
  FUN_0040a690();
  param_1[1] = param_1[1] + 0x34;
  return;
}

