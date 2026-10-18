// FUN_0095ca80 @ 0095ca80 body=[[0095ca80, 0095cad7] [0095cae0, 0095cb9b] [0095cb9f, 0095cbb9] [0095cbbd, 0095cbde] [0095cbe2, 0095cc0e]]


void FUN_0095ca80(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_EDX;
  int iVar6;
  undefined *puVar7;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
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
  
  puStack_c = &LAB_00b4f738;
  local_10 = ExceptionList;
  iVar3 = *(int *)(in_EDX + 0x28) * 0x58 + *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x714);
  iVar5 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  iVar6 = 0;
  ExceptionList = &local_10;
  local_18 = iVar3;
  local_14 = iVar5;
  if (0 < iVar5) {
    do {
      local_8 = 0xffffffff;
      piVar1 = (int *)(*(int *)(param_2 + 0x48) + (uint)*(byte *)(param_2 + 8 + iVar6) * 8);
      iVar2 = piVar1[1];
      if ((-1 < iVar2) && ((0 < iVar2 || (*piVar1 != 0)))) {
        piVar1 = (int *)(*(int *)(iVar3 + 0x48) + (uint)*(byte *)(iVar6 + 8 + iVar3) * 8);
        iVar3 = piVar1[1];
        if ((iVar3 < 0) || ((iVar3 < 1 && (*piVar1 == 0)))) {
          puVar7 = &DAT_00e10ec4;
        }
        else {
          puVar7 = &DAT_00e35f18;
        }
        FUN_00448740(puVar7,3);
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        FUN_00409350(&DAT_00df8514,2);
        local_8 = 0;
        FUN_005659c0(*(undefined4 *)(*(int *)(DAT_012587f0 + 0xc) + iVar6 * 4),local_6c);
        local_8._0_1_ = 1;
        uVar4 = FUN_00988f20(local_34);
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_00448aa0(uVar4,0,0xffffffff);
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50);
        }
        local_3c = 0xf;
        local_40 = 0;
        local_50 = local_50 & 0xffffff00;
        if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_6c[0]);
        }
        local_8 = 0xffffffff;
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = local_6c[0] & 0xffffff00;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        iVar3 = local_18;
        iVar5 = local_14;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  ExceptionList = local_10;
  return;
}

