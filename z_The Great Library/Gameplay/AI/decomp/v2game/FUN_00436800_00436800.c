// FUN_00436800 @ 00436800 body=[[00436800, 004369de] [004369e2, 00436a13] [00436a2e, 00436bc3] [00436bc7, 00436bef] [00436c0a, 00436c2e]]


/* WARNING: Removing unreachable block (ram,0x004368a9) */
/* WARNING: Removing unreachable block (ram,0x00436a8b) */

void FUN_00436800(undefined4 param_1,int param_2)

{
  DWORD DVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  LPSTR ***ppppCVar5;
  int in_ECX;
  int iVar6;
  uint *puVar7;
  bool bVar8;
  LPSTR **local_1f0 [4];
  DWORD local_1e0;
  uint local_1dc;
  int local_1d4;
  uint local_1d0 [4];
  undefined4 local_1c0;
  uint local_1bc;
  uint local_1b4 [4];
  undefined4 local_1a4;
  uint local_1a0;
  undefined **appuStack_120 [48];
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5c212;
  local_14 = ExceptionList;
  if (param_2 == 0x1a) {
    ExceptionList = &local_14;
    FUN_009a1750(in_ECX + 0x28,0);
  }
  else {
    local_1d4 = in_ECX;
    if (param_2 == 0x48d) {
      iVar6 = 0;
      local_1dc = 0xf;
      local_1e0 = 0;
      local_1f0[0] = (LPSTR **)((uint)local_1f0[0]._1_3_ << 8);
      local_c = 0;
      ExceptionList = &local_14;
      FUN_009a1750(local_1f0,0);
      ppppCVar5 = (LPSTR ***)local_1f0[0];
      if (local_1dc < 0x10) {
        ppppCVar5 = local_1f0;
      }
      CharLowerBuffA((LPSTR)ppppCVar5,local_1e0);
      puVar7 = (uint *)(in_ECX + 0x94);
      do {
        uVar3 = *puVar7;
        DVar1 = local_1e0;
        if (uVar3 < local_1e0) {
          DVar1 = uVar3;
        }
        iVar2 = FUN_00414bd0(DVar1);
        bVar8 = false;
        if (iVar2 == 0) {
          if (uVar3 < local_1e0) {
            uVar3 = 0xffffffff;
          }
          else {
            uVar3 = (uint)(uVar3 != local_1e0);
          }
          bVar8 = uVar3 == 0;
        }
        if (bVar8) {
          *(undefined4 *)(local_1d4 + 0x44 + iVar6 * 4) = 1;
          break;
        }
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 7;
      } while (iVar6 < 0x10);
      if (iVar6 == 0x10) {
        local_1a0 = 0xf;
        local_1a4 = 0;
        local_1b4[0] = local_1b4[0] & 0xffffff00;
        FUN_00409350("directorysettings.cpp",0x15);
        local_c._0_1_ = 1;
        uVar4 = FUN_004015b0(local_1b4,0x82,0x1000);
        local_c._0_1_ = 2;
        FUN_00987d50(uVar4,"Error in modfile. Token \"",0x19,0);
        ppppCVar5 = (LPSTR ***)local_1f0[0];
        if (local_1dc < 0x10) {
          ppppCVar5 = local_1f0;
        }
        uVar4 = FUN_00418e30(uVar4,ppppCVar5);
        uVar4 = FUN_00418e30(uVar4,"\" is not recognised.");
        FUN_00401280(uVar4);
        local_c = CONCAT31(local_c._1_3_,1);
        FUN_00987ac0(appuStack_60);
        appuStack_60[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_60);
        if (0xf < local_1a0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_1b4[0]);
        }
        local_1a0 = 0xf;
        local_1a4 = 0;
        local_1b4[0] = local_1b4[0] & 0xffffff00;
        *(undefined1 *)(local_1d4 + 0x24) = 1;
      }
      if (0xf < local_1dc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_1f0[0]);
      }
    }
    else if (param_2 == 0x48e) {
      iVar6 = 0;
      local_1dc = 0xf;
      local_1e0 = 0;
      local_1f0[0] = (LPSTR **)((uint)local_1f0[0]._1_3_ << 8);
      local_c = 3;
      ExceptionList = &local_14;
      FUN_009a1750(local_1f0,0);
      ppppCVar5 = (LPSTR ***)local_1f0[0];
      if (local_1dc < 0x10) {
        ppppCVar5 = local_1f0;
      }
      CharLowerBuffA((LPSTR)ppppCVar5,local_1e0);
      puVar7 = (uint *)(in_ECX + 0x94);
      do {
        uVar3 = *puVar7;
        DVar1 = local_1e0;
        if (uVar3 < local_1e0) {
          DVar1 = uVar3;
        }
        iVar2 = FUN_00414bd0(DVar1);
        bVar8 = false;
        if (iVar2 == 0) {
          if (uVar3 < local_1e0) {
            uVar3 = 0xffffffff;
          }
          else {
            uVar3 = (uint)(uVar3 != local_1e0);
          }
          bVar8 = uVar3 == 0;
        }
        if (bVar8) {
          *(undefined4 *)(local_1d4 + 0x44 + iVar6 * 4) = 2;
          break;
        }
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 7;
      } while (iVar6 < 0x10);
      if (iVar6 == 0x10) {
        local_1bc = 0xf;
        local_1c0 = 0;
        local_1d0[0] = local_1d0[0] & 0xffffff00;
        FUN_00409350("directorysettings.cpp",0x15);
        local_c._0_1_ = 4;
        uVar4 = FUN_004015b0(local_1d0,0x97,0x1000);
        local_c._0_1_ = 5;
        FUN_00987d50(uVar4,"Error in modfile. Token \"",0x19,0);
        ppppCVar5 = (LPSTR ***)local_1f0[0];
        if (local_1dc < 0x10) {
          ppppCVar5 = local_1f0;
        }
        uVar4 = FUN_00418e30(uVar4,ppppCVar5);
        uVar4 = FUN_00418e30(uVar4,"\" is not recognised.");
        FUN_00401280(uVar4);
        local_c = CONCAT31(local_c._1_3_,4);
        FUN_00987ac0(appuStack_120);
        appuStack_120[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_120);
        if (0xf < local_1bc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_1d0[0]);
        }
        local_1bc = 0xf;
        local_1c0 = 0;
        local_1d0[0] = local_1d0[0] & 0xffffff00;
        *(undefined1 *)(local_1d4 + 0x24) = 1;
      }
      if (0xf < local_1dc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_1f0[0]);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

