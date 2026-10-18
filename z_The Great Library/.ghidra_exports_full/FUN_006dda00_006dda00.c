// FUN_006dda00 @ 006dda00 body=[[006dda00, 006ddaf0] [006ddaf4, 006ddb20] [006ddb24, 006ddb5d] [006ddb61, 006ddc13] [006ddc17, 006ddc43] [006ddc47, 006ddc7a] [006ddc7e, 006ddcaf] [006ddcb3, 006ddcce] [006ddcd2, 006ddd00]]


/* WARNING: Removing unreachable block (ram,0x006ddcc6) */
/* WARNING: Removing unreachable block (ram,0x006ddca7) */

uint FUN_006dda00(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined3 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_fc;
  uint local_e8;
  undefined4 local_e0;
  uint local_cc;
  undefined4 local_c4;
  uint local_b0;
  undefined4 local_a8;
  uint local_94;
  undefined4 local_8c;
  uint local_78;
  undefined4 local_70;
  uint local_5c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7e055;
  local_10 = ExceptionList;
  if ((param_1 < 0) || (param_3 < 0)) {
    return (uint)(param_1 < param_3);
  }
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1 * 4);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4);
  uVar7 = *(undefined4 *)(iVar2 + 0x1c);
  uVar3 = *(undefined4 *)(iVar2 + 0x20);
  uVar6 = *(undefined4 *)(iVar1 + 0x1c);
  uVar4 = *(undefined4 *)(iVar1 + 0x20);
  bVar9 = param_2 != 0;
  if (bVar9) {
    ExceptionList = &local_10;
    FUN_0048fe90();
    local_8 = 1;
    uVar6 = FUN_0055cbd0(uVar6,uVar4);
    local_8 = 2;
  }
  else {
    ExceptionList = &local_10;
    uVar6 = FUN_0055c8a0(uVar6,uVar4);
    local_8 = 0;
  }
  FUN_00408ed0(uVar6,0,0xffffffff);
  local_8 = 3;
  if ((bVar9) && (0xf < local_5c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70);
  }
  if ((bVar9) && (0xf < local_94)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a8);
  }
  local_8._1_3_ = 0;
  uVar5 = local_8._1_3_;
  local_8._0_1_ = 6;
  local_8._1_3_ = 0;
  if ((!bVar9) && (0xf < local_cc)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_e0);
  }
  bVar9 = param_4 != 0;
  if (bVar9) {
    local_8._1_3_ = uVar5;
    FUN_0048fe90();
    local_8 = 8;
    uVar7 = FUN_0055cbd0(uVar7,uVar3);
    local_8 = 9;
  }
  else {
    uVar7 = FUN_0055c8a0(uVar7,uVar3);
    local_8 = CONCAT31(local_8._1_3_,7);
  }
  FUN_00408ed0(uVar7,0,0xffffffff);
  local_8 = 10;
  if ((bVar9) && (0xf < local_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_8c);
  }
  if ((bVar9) && (0xf < local_b0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c4);
  }
  local_8 = 0xd;
  if ((!bVar9) && (0xf < local_e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_fc);
  }
  uVar8 = FUN_0098ab20();
  ExceptionList = local_10;
  return uVar8;
}

