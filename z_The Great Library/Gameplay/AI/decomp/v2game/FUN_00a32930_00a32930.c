// FUN_00a32930 @ 00a32930 body=[[00a32930, 00a32a6a] [00a32a70, 00a32ae8] [00a32aec, 00a32b1e] [00a32b22, 00a32b42] [00a32b46, 00a32b7a]]


/* WARNING: Removing unreachable block (ram,0x00a32a92) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00a32930(int param_1,int param_2,char param_3)

{
  DWORD DVar1;
  uint uVar2;
  LPSTR ******pppppppCVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  LPSTR ******local_50 [4];
  DWORD local_40;
  uint local_3c;
  LPSTR ******local_34 [4];
  DWORD local_24;
  uint local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44510;
  local_10 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = (LPSTR ******)((uint)local_34[0] & 0xffffff00);
  ExceptionList = &local_10;
  FUN_00408ed0(param_2,0,0xffffffff);
  local_8 = 0;
  if (param_3 != '\0') {
    pppppppCVar3 = local_34[0];
    if (local_20 < 0x10) {
      pppppppCVar3 = (LPSTR ******)local_34;
    }
    CharLowerBuffA((LPSTR)pppppppCVar3,local_24);
  }
  param_2 = 0;
  local_18 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8) >> 5;
  if (0 < local_18) {
    local_14 = 0;
    do {
      uVar2 = local_20;
      DVar1 = local_24;
      if (param_3 == '\0') {
        uVar6 = *(uint *)(local_14 + *(int *)(param_1 + 0xb8) + 0x14);
        uVar7 = uVar6;
        if (local_24 <= uVar6) {
          uVar7 = local_24;
        }
        iVar5 = FUN_00414bd0(uVar7);
        if (((iVar5 == 0) && (DVar1 <= uVar6)) && (uVar6 == local_24)) {
          if (uVar2 < 0x10) {
            ExceptionList = local_10;
            return *(undefined4 *)(param_2 * 0x20 + *(int *)(param_1 + 0xb8));
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
      }
      else {
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = (LPSTR ******)((uint)local_50[0] & 0xffffff00);
        FUN_00408ed0(*(int *)(param_1 + 0xb8) + local_14 + 4,0,0xffffffff);
        local_8._0_1_ = 1;
        pppppppCVar3 = local_50[0];
        if (local_3c < 0x10) {
          pppppppCVar3 = (LPSTR ******)local_50;
        }
        CharLowerBuffA((LPSTR)pppppppCVar3,local_40);
        uVar2 = local_3c;
        DVar1 = local_40;
        pppppppCVar3 = local_50[0];
        DVar4 = local_24;
        if (local_40 <= local_24) {
          DVar4 = local_40;
        }
        iVar5 = FUN_00414bd0(DVar4);
        bVar8 = false;
        if (iVar5 == 0) {
          if (local_24 < DVar1) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)(local_24 != DVar1);
          }
          bVar8 = uVar6 == 0;
        }
        if (bVar8) {
          if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(pppppppCVar3);
          }
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = (LPSTR ******)((uint)local_50[0] & 0xffffff00);
          if (local_20 < 0x10) {
            ExceptionList = local_10;
            return *(undefined4 *)(param_2 * 0x20 + *(int *)(param_1 + 0xb8));
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(pppppppCVar3);
        }
      }
      local_14 = local_14 + 0x20;
      param_2 = param_2 + 1;
    } while (param_2 < local_18);
  }
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  ExceptionList = local_10;
  return 0xffffffff;
}

