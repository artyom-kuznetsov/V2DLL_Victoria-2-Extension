// FUN_008ae030 @ 008ae030 body=[[008ae030, 008ae09c] [008ae0a0, 008ae146]]


undefined1 FUN_008ae030(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  float10 extraout_ST0;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar2 = (int *)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x50))();
  (**(code **)(*piVar2 + 0x14))();
  puVar1 = *(undefined4 **)(in_ECX + 0xb4);
  if ((float10)1 <= extraout_ST0 - (float10)*(float *)(in_ECX + 200)) {
    while (puVar1 != (undefined4 *)0x0) {
      piVar2 = (int *)*puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      (**(code **)(*piVar2 + 0xb8))();
    }
  }
  else {
    while (puVar1 != (undefined4 *)0x0) {
      piVar2 = (int *)*puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      (**(code **)(*piVar2 + 0xbc))();
    }
  }
  if (*(int *)(DAT_012588e8 + 0xb0c) <= *(int *)(in_ECX + 0xc4)) {
    ExceptionList = local_10;
    return *(undefined1 *)(in_ECX + 0x58);
  }
  iVar3 = FUN_00aae9af();
  local_8 = 0;
  if (iVar3 != 0) {
    FUN_008a88d0();
    FUN_00907d40(iVar3,*(undefined4 *)(in_ECX + 0xc));
  }
  local_8 = 0xffffffff;
  iVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x44))();
  (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))();
  ExceptionList = local_10;
  return 0;
}

