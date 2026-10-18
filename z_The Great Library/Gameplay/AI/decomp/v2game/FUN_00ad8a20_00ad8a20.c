// FUN_00ad8a20 @ 00ad8a20 body=[[00ad8a20, 00ad8ac0]]


void FUN_00ad8a20(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b37299;
  local_c = ExceptionList;
  uVar5 = DAT_00ef259c ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  iVar2 = in_ECX[1];
  uVar6 = iVar2 + 1;
  in_ECX[1] = uVar6;
  if ((uint)in_ECX[2] < uVar6) {
    FUN_00ae6430(iVar2 + 2);
  }
  puVar1 = (undefined4 *)(*in_ECX + (in_ECX[1] + -1) * 8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_00e3fb28;
    puVar1[1] = 0;
    piVar3 = *(int **)(param_1 + 4);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(uVar5);
    }
    piVar4 = (int *)puVar1[1];
    puVar1[1] = piVar3;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
  }
  ExceptionList = local_c;
  return;
}

