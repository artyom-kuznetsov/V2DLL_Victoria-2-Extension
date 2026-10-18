// FUN_0082e4e0 @ 0082e4e0 body=[[0082e4e0, 0082e50e]]


undefined4 FUN_0082e4e0(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_00826530();
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  uVar1 = *(undefined4 *)(in_ECX + 0xdc);
  *(undefined4 *)(param_1 + 0x1b0) = uVar1;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

