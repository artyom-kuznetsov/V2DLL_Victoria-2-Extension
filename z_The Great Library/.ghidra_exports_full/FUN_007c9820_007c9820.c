// FUN_007c9820 @ 007c9820 body=[[007c9820, 007c996e] [007c9972, 007c999b] [007c999f, 007c9a33] [007c9a37, 007c9a60] [007c9a64, 007c9b2f] [007c9b33, 007c9b5c] [007c9b60, 007c9bf1] [007c9bf5, 007c9c19] [007c9c1d, 007c9d01]]


/* WARNING: Removing unreachable block (ram,0x007c99eb) */
/* WARNING: Removing unreachable block (ram,0x007c9924) */
/* WARNING: Removing unreachable block (ram,0x007c9ae5) */
/* WARNING: Removing unreachable block (ram,0x007c9baa) */
/* WARNING: Removing unreachable block (ram,0x007c9a2b) */

void FUN_007c9820(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  undefined4 local_90;
  uint local_7c;
  uint local_74;
  uint local_60;
  uint local_58;
  uint local_44;
  uint local_3c;
  uint local_28;
  int *local_20;
  int *local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b43199;
  local_10 = ExceptionList;
  piVar10 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1);
  ExceptionList = &local_10;
  FUN_007cd2d0(param_3 + -1,param_4);
  local_14 = piVar10;
  while (((param_2 < local_14 && (cVar5 = FUN_007c68c0(local_14[-1],*local_14), cVar5 == '\0')) &&
         (cVar5 = FUN_007c68c0(*local_14,local_14[-1]), cVar5 == '\0'))) {
    local_14 = local_14 + -1;
  }
  do {
    piVar10 = piVar10 + 1;
    piVar4 = piVar10;
    local_20 = local_14;
    if ((param_3 <= piVar10) || (cVar5 = FUN_007c68c0(*piVar10,*local_14), cVar5 != '\0')) break;
    cVar5 = FUN_007c68c0(*local_14,*piVar10);
  } while (cVar5 == '\0');
joined_r0x007c98d8:
  do {
    if (param_3 <= piVar4) {
joined_r0x007c9a96:
      for (; param_2 < local_20; local_20 = local_20 + -1) {
        iVar7 = local_20[-1];
        iVar6 = FUN_00974c50(*(undefined4 *)(*local_14 + 0x6c));
        local_8 = 4;
        iVar7 = FUN_00974c50(*(undefined4 *)(iVar7 + 0x6c));
        uVar2 = *(uint *)(iVar6 + 0x10);
        uVar3 = *(uint *)(iVar7 + 0x10);
        uVar8 = uVar3;
        if (uVar2 <= uVar3) {
          uVar8 = uVar2;
        }
        uVar8 = FUN_00414bd0(uVar8);
        if (uVar8 == 0) {
          if (uVar3 < uVar2) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (uint)(uVar3 != uVar2);
          }
        }
        if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_3c);
        }
        local_8 = 0xffffffff;
        local_28 = 0xf;
        local_3c = local_3c & 0xffffff00;
        if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_90);
        }
        if (-1 < (int)uVar8) {
          iVar7 = *local_14;
          iVar6 = FUN_00974c50(*(undefined4 *)(local_20[-1] + 0x6c));
          local_8 = 6;
          iVar7 = FUN_00974c50(*(undefined4 *)(iVar7 + 0x6c));
          uVar2 = *(uint *)(iVar6 + 0x10);
          uVar3 = *(uint *)(iVar7 + 0x10);
          uVar8 = uVar3;
          if (uVar2 <= uVar3) {
            uVar8 = uVar2;
          }
          uVar8 = FUN_00414bd0(uVar8);
          if (uVar8 == 0) {
            if (uVar3 < uVar2) {
              uVar8 = 0xffffffff;
            }
            else {
              uVar8 = (uint)(uVar3 != uVar2);
            }
          }
          if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_58);
          }
          local_8 = 0xffffffff;
          local_44 = 0xf;
          local_58 = local_58 & 0xffffff00;
          if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_74);
          }
          local_60 = 0xf;
          local_74 = local_74 & 0xffffff00;
          if ((int)uVar8 < 0) break;
          iVar7 = local_14[-1];
          local_14 = local_14 + -1;
          *local_14 = local_20[-1];
          local_20[-1] = iVar7;
        }
        local_8 = 0xffffffff;
      }
      if (local_20 == param_2) {
        if (piVar4 == param_3) {
          param_1[1] = piVar10;
          *param_1 = local_14;
          ExceptionList = local_10;
          return;
        }
        if (piVar10 != piVar4) {
          iVar7 = *local_14;
          *local_14 = *piVar10;
          *piVar10 = iVar7;
        }
        piVar10 = piVar10 + 1;
        iVar7 = *local_14;
        *local_14 = *piVar4;
        *piVar4 = iVar7;
        piVar4 = piVar4 + 1;
        local_14 = local_14 + 1;
      }
      else {
        local_20 = local_20 + -1;
        if (piVar4 == param_3) {
          local_14 = local_14 + -1;
          if (local_20 != local_14) {
            iVar7 = *local_20;
            *local_20 = *local_14;
            *local_14 = iVar7;
          }
          piVar1 = piVar10 + -1;
          iVar7 = *local_14;
          piVar10 = piVar10 + -1;
          *local_14 = *piVar1;
          *piVar10 = iVar7;
        }
        else {
          iVar7 = *piVar4;
          *piVar4 = *local_20;
          *local_20 = iVar7;
          piVar4 = piVar4 + 1;
        }
      }
      goto joined_r0x007c98d8;
    }
    iVar7 = *local_14;
    iVar6 = FUN_00974c50(*(undefined4 *)(*piVar4 + 0x6c));
    local_8 = 0;
    iVar7 = FUN_00974c50(*(undefined4 *)(iVar7 + 0x6c));
    uVar2 = *(uint *)(iVar6 + 0x10);
    uVar3 = *(uint *)(iVar7 + 0x10);
    uVar8 = uVar3;
    if (uVar2 <= uVar3) {
      uVar8 = uVar2;
    }
    uVar8 = FUN_00414bd0(uVar8);
    if (uVar8 == 0) {
      if (uVar3 < uVar2) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar8 = (uint)(uVar3 != uVar2);
      }
    }
    if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3c);
    }
    local_8 = 0xffffffff;
    uVar2 = local_3c >> 8;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_90);
    }
    local_1c = piVar10;
    if (-1 < (int)uVar8) {
      iVar7 = *piVar4;
      iVar6 = FUN_00974c50(*(undefined4 *)(*local_14 + 0x6c));
      local_8 = 2;
      iVar7 = FUN_00974c50(*(undefined4 *)(iVar7 + 0x6c));
      uVar3 = *(uint *)(iVar6 + 0x10);
      uVar8 = *(uint *)(iVar7 + 0x10);
      uVar9 = uVar8;
      if (uVar3 <= uVar8) {
        uVar9 = uVar3;
      }
      uVar9 = FUN_00414bd0(uVar9);
      if (uVar9 == 0) {
        if (uVar8 < uVar3) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)(uVar8 != uVar3);
        }
      }
      local_8 = 0xffffffff;
      local_28 = 0xf;
      local_3c = uVar2 << 8;
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_90);
      }
      if ((int)uVar9 < 0) goto joined_r0x007c9a96;
      iVar7 = *piVar10;
      local_1c = piVar10 + 1;
      *piVar10 = *piVar4;
      *piVar4 = iVar7;
    }
    local_3c = uVar2 << 8;
    local_8 = 0xffffffff;
    local_28 = 0xf;
    piVar10 = local_1c;
    piVar4 = piVar4 + 1;
  } while( true );
}

