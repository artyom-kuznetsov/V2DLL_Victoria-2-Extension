// FUN_00453f90 @ 00453f90 body=[[00453f90, 00453ff9] [00454000, 00454081] [00454085, 004540ab] [004540af, 0045412a]]


/* WARNING: Removing unreachable block (ram,0x00454038) */

void FUN_00453f90(int param_1,undefined1 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  int iVar6;
  bool bVar7;
  uint local_60;
  uint local_4c;
  uint local_44;
  uint local_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8f960;
  local_10 = ExceptionList;
  local_18 = in_ECX - param_1 >> 2;
  iVar6 = local_18 - (in_ECX - param_1 >> 0x1f) >> 1;
  if (0 < iVar6) {
    local_1c = iVar6 * 2 + 2;
    ExceptionList = &local_10;
    do {
      local_28 = *(undefined4 *)(param_1 + -4 + iVar6 * 4);
      local_20 = iVar6 + -1;
      iVar6 = local_1c + -2;
      local_24 = CONCAT31(local_24._1_3_,param_2);
      bVar7 = iVar6 == local_18;
      local_1c = iVar6;
      local_14 = local_20;
      if (iVar6 < local_18) {
        do {
          iVar3 = FUN_004f97a0();
          local_8 = 0;
          iVar4 = FUN_004f97a0();
          uVar1 = *(uint *)(iVar3 + 0x10);
          uVar2 = *(uint *)(iVar4 + 0x10);
          uVar5 = uVar2;
          if (uVar1 <= uVar2) {
            uVar5 = uVar1;
          }
          uVar5 = FUN_00414bd0(uVar5);
          if (uVar5 == 0) {
            if (uVar2 < uVar1) {
              uVar5 = 0xffffffff;
            }
            else {
              uVar5 = (uint)(uVar2 != uVar1);
            }
          }
          if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_44);
          }
          local_8 = 0xffffffff;
          local_30 = 0xf;
          local_44 = local_44 & 0xffffff00;
          if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_60);
          }
          local_4c = 0xf;
          local_60 = local_60 & 0xffffff00;
          iVar3 = iVar6;
          if ((int)uVar5 < 0) {
            iVar3 = iVar6 + -1;
          }
          iVar6 = iVar3 * 2 + 2;
          *(undefined4 *)(param_1 + local_14 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
          local_14 = iVar3;
        } while (iVar6 < local_18);
        bVar7 = iVar6 == local_18;
      }
      iVar6 = local_20;
      if (bVar7) {
        *(undefined4 *)(param_1 + local_14 * 4) = *(undefined4 *)(param_1 + -4 + local_18 * 4);
        local_14 = local_18 + -1;
      }
      FUN_00454b30(param_1,local_14,local_20,&local_28,local_24);
    } while (0 < iVar6);
  }
  ExceptionList = local_10;
  return;
}

