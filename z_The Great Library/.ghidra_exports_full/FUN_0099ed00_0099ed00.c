// FUN_0099ed00 @ 0099ed00 body=[[0099ed00, 0099ed3f]]


undefined4 FUN_0099ed00(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = (iVar1 - *param_1) / 0xc;
  if (iVar2 == 0) {
    return 0;
  }
  if (*param_1 != iVar1) {
    param_1[1] = iVar1 + -0xc;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

