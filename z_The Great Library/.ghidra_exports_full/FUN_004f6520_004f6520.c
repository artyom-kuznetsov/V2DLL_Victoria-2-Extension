// FUN_004f6520 @ 004f6520 body=[[004f6520, 004f6540]]


void FUN_004f6520(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x1580) + 4 + *(int *)(param_1 + 4) * 8);
  *in_EAX = *(undefined4 *)(*(int *)(in_ECX + 0x1580) + *(int *)(param_1 + 4) * 8);
  in_EAX[1] = uVar1;
  return;
}

