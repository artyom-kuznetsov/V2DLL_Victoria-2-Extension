// FUN_0098ab80 @ 0098ab80 body=[[0098ab80, 0098ac2e]]


undefined4 * FUN_0098ab80(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41829;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  local_8 = 0;
  uVar1 = param_1[4];
  uVar3 = *(int *)(param_2 + 0x10) + *(int *)(param_3 + 0x10);
  if (((uVar1 <= uVar3) && (param_1[5] != uVar3)) && (cVar2 = FUN_004094e0(uVar3,1), cVar2 != '\0'))
  {
    param_1[4] = uVar1;
    puVar4 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar4 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar4 + uVar1) = 0;
  }
  FUN_00448aa0(param_2,0,0xffffffff);
  FUN_00448aa0(param_3,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

