// FUN_007651f0 @ 007651f0 body=[[007651f0, 0076525f] [00765263, 0076536d] [00765371, 00765395] [00765399, 007653b6] [007653ba, 007653f3]]


void FUN_007651f0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint local_130 [4];
  undefined4 local_120;
  uint local_11c;
  undefined1 local_114 [164];
  undefined1 local_70;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6d23e;
  local_10 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  FUN_00409350("games",5);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x368) + 0x7c))(local_34);
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  iVar2 = (**(code **)(*piVar1 + 0x34))();
  if (*(int *)(iVar2 + 8) != 0) {
    (**(code **)(*piVar1 + 0x34))();
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("playername",10);
    local_8 = 1;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x368) + 0x40))(local_50);
    uVar3 = (**(code **)(*(int *)(iVar2 + 0x54) + 0x4c))(local_6c);
    local_8._0_1_ = 2;
    local_11c = 0xf;
    local_120 = 0;
    local_130[0] = local_130[0] & 0xffffff00;
    FUN_00408ed0(uVar3,0,0xffffffff);
    local_8._0_1_ = 3;
    FUN_00648af0(local_114);
    local_70 = 0;
    local_8 = CONCAT31(local_8._1_3_,4);
    local_14 = *(int *)(in_ECX + 4) + 0x98;
    FUN_00408ed0(local_130,0,0xffffffff);
    FUN_007589c0();
    *(undefined1 *)(local_14 + 0xc0) = local_70;
    FUN_00648a60();
    if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_130[0]);
    }
    local_11c = 0xf;
    local_120 = 0;
    local_130[0] = local_130[0] & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
    local_8 = 0xffffffff;
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    *(undefined1 *)(DAT_012588e8 + 3000) = 1;
    DAT_012589ac = 2;
    FUN_00765870(local_18);
  }
  ExceptionList = local_10;
  return;
}

