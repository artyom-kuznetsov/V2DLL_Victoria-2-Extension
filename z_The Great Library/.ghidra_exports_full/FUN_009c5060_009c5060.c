// FUN_009c5060 @ 009c5060 body=[[009c5060, 009c50f1]]


undefined2 * FUN_009c5060(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  float local_8;
  
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x154) + 0x44))(local_10);
  iVar2 = *(int *)(iVar2 + 4);
  (**(code **)(**(int **)(in_ECX + 0x154) + 0x44))(local_18);
  local_8 = *(float *)(in_ECX + 0xf8);
  uVar1 = FUN_00b31c00();
  *param_1 = uVar1;
  param_1[1] = (short)(int)((float)iVar2 * local_8);
  return param_1;
}

