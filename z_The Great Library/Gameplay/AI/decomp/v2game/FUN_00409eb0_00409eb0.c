// FUN_00409eb0 @ 00409eb0 body=[[00409eb0, 00409f1d]]


void FUN_00409eb0(uint *param_1)

{
  uint uVar1;
  uint in_EAX;
  
  uVar1 = param_1[1];
  if ((in_EAX < uVar1) && (*param_1 <= in_EAX)) {
    if (uVar1 == param_1[2]) {
      FUN_0040a010();
    }
    FUN_0040a3e0(param_1[1]);
    param_1[1] = param_1[1] + 0x34;
    return;
  }
  if (uVar1 == param_1[2]) {
    FUN_0040a010();
  }
  FUN_0040a610();
  param_1[1] = param_1[1] + 0x34;
  return;
}

