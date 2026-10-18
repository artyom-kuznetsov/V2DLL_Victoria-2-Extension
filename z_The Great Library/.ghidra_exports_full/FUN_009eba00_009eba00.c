// FUN_009eba00 @ 009eba00 body=[[009eba00, 009eba47]]


void FUN_009eba00(undefined8 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(param_1 + 1);
  *(undefined8 *)(in_ECX + 0x110) = *param_1;
  *(undefined4 *)(in_ECX + 0x118) = uVar1;
  FUN_009ebf10(in_ECX);
  return;
}

