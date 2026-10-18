// FUN_0098ffc0 @ 0098ffc0 body=[[0098ffc0, 009900d9] [009900dd, 009900f2]]


void FUN_0098ffc0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  undefined **local_54 [10];
  uint local_2c;
  int local_24;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b58243;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *in_ECX = &PTR_FUN_00e37c30;
  *(undefined2 *)(in_ECX + 0x44) = 0x100;
  puVar1 = (undefined4 *)FUN_00aae9af();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[0xd] = 0xf;
    puVar1[0xc] = 0;
    *(undefined1 *)(puVar1 + 8) = 0;
  }
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_54,param_1,0);
  local_c = 0;
  FUN_009d7140();
  iVar2 = FUN_00aae9af();
  local_c._0_1_ = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_009d5450();
  }
  local_c = (uint)local_c._1_3_ << 8;
  FUN_00408ed0();
  in_ECX[1] = uVar3;
  FUN_00990100();
  local_54[0] = &PTR_FUN_00e37dc0;
  if (local_24 != 0) {
    PHYSFS_close();
    local_24 = 0;
  }
  local_54[0] = &PTR_FUN_00e3b540;
  if (local_2c < 0x10) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

