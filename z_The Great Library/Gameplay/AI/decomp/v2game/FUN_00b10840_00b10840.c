// FUN_00b10840 @ 00b10840 body=[[00b10840, 00b10882]]


void FUN_00b10840(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  in_ECX[2] = param_3;
  in_ECX[1] = param_1;
  *(undefined1 *)(in_ECX + 8) = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0x3f800000;
  in_ECX[6] = 0x3f800000;
  in_ECX[7] = 0;
  uVar1 = FUN_00b157e0(param_2);
  *in_ECX = uVar1;
  return;
}

