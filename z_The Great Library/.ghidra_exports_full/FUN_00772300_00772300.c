// FUN_00772300 @ 00772300 body=[[00772300, 007725a5]]


void FUN_00772300(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int in_ECX;
  float10 fVar5;
  undefined4 uStack_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b59a89;
  pvStack_14 = ExceptionList;
  if (*(int *)(in_ECX + 0x5c0) == 0) {
    ExceptionList = &pvStack_14;
    if (*(char *)(DAT_012588e8 + 0xd10) == '\0') {
      ExceptionList = &pvStack_14;
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        ExceptionList = &pvStack_14;
        DAT_00f20c18 = (undefined4 *)FUN_00aae9af();
        if (DAT_00f20c18 == (undefined4 *)0x0) {
          DAT_00f20c18 = (undefined4 *)0x0;
        }
        else {
          *DAT_00f20c18 = &PTR_FUN_00e38b28;
        }
      }
      fVar5 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)FUN_00aae9af();
        if (DAT_00f20c18 == (undefined4 *)0x0) {
          DAT_00f20c18 = (undefined4 *)0x0;
        }
        else {
          *DAT_00f20c18 = &PTR_FUN_00e38b28;
        }
      }
      DAT_00f20c14 = 0;
      uStack_20 = (undefined4)(longlong)ROUND((double)fVar5);
      DAT_00f20c1c = uStack_20;
    }
    pvVar3 = (void *)FUN_00aae9af();
    local_c = 2;
    if (pvVar3 != (void *)0x0) {
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)FUN_00aae9af();
        if (DAT_00f20c18 == (undefined4 *)0x0) {
          DAT_00f20c18 = (undefined4 *)0x0;
          DAT_00f20c18 = (undefined4 *)FUN_00aae9af();
          if (DAT_00f20c18 == (undefined4 *)0x0) {
            DAT_00f20c18 = (undefined4 *)0x0;
          }
          else {
            *DAT_00f20c18 = &PTR_FUN_00e38b28;
          }
        }
        else {
          *DAT_00f20c18 = &PTR_FUN_00e38b28;
        }
      }
      FUN_0072cb40();
    }
    local_c = 0xffffffff;
    iVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))();
    iVar1 = FUN_00aae9af();
    puStack_10 = (undefined1 *)0x3;
    if (iVar1 != 0) {
      FUN_0072a7b0();
    }
    puStack_10 = (undefined1 *)0xffffffff;
    iVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))();
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x44))();
    (**(code **)(*piVar4 + 8))();
    ExceptionList = pvVar3;
    return;
  }
  ExceptionList = &pvStack_14;
  iVar1 = FUN_00aae9af();
  local_c = 0;
  if (iVar1 != 0) {
    (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
    FUN_00408ed0();
    local_c._0_1_ = 1;
    iVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
    FUN_00408ed0(iVar2 + 0x134,0,0xffffffff);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00a06ea0(iVar1,*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x5c0) + 0x1b8) + 0x68));
  }
  local_c = 0xffffffff;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x5c0) + 0x38) + 0x18))();
  ExceptionList = pvStack_18;
  return;
}

