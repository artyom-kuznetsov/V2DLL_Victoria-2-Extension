// FUN_004a0e80 @ 004a0e80 body=[[004a0e80, 004a0f39]]


undefined4 * FUN_004a0e80(int param_1,undefined4 *param_2)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  int in_EDX;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x2aa4) + in_EAX * 4);
  iVar4 = *(int *)(*(int *)(param_1 + 0x2aa4) + in_EDX * 4);
  uVar3 = *(int *)(iVar2 + 0x34) - *(int *)(iVar4 + 0x34);
  iVar4 = *(int *)(iVar2 + 0x38) - *(int *)(iVar4 + 0x38);
  iVar2 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  if (*(int *)(param_1 + 0x2abc) / 2 < iVar2) {
    uVar3 = *(int *)(param_1 + 0x2abc) - iVar2;
  }
  FUN_00401000((SQRT((float)(int)(iVar4 * iVar4 + uVar3 * uVar3)) + 0.0005) * 1000.0);
  iVar2 = FUN_00b31c00();
  uVar5 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
  uVar1 = __alldiv(uVar5,4000,0);
  *param_2 = uVar1;
  return param_2;
}

