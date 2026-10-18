// FUN_009d47a0 @ 009d47a0 body=[[009d47a0, 009d47ea] [009d47f0, 009d4a16] [009d4a20, 009d4b6c] [009d4b70, 009d4d90]]


/* WARNING: Removing unreachable block (ram,0x009d4ada) */
/* WARNING: Removing unreachable block (ram,0x009d49b3) */
/* WARNING: Removing unreachable block (ram,0x009d489b) */
/* WARNING: Removing unreachable block (ram,0x009d4824) */
/* WARNING: Removing unreachable block (ram,0x009d4939) */
/* WARNING: Removing unreachable block (ram,0x009d4a5f) */
/* WARNING: Removing unreachable block (ram,0x009d4ba6) */
/* WARNING: Removing unreachable block (ram,0x009d4c26) */

void FUN_009d47a0(uint *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_8 = param_2 + (((int)param_3 - (int)param_2 >> 3) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1) * 2;
  FUN_009d4da0(local_8,param_3 + -2,param_4);
  local_c = local_8 + 2;
  if (param_2 < local_8) {
    do {
      iVar1 = local_8[-2];
      iVar2 = *local_8;
      if (iVar1 == iVar2) {
        uVar3 = *(uint *)(local_8[-1] + 0x18);
        uVar4 = *(uint *)(local_8[1] + 0x18);
        uVar8 = uVar4;
        if (uVar3 <= uVar4) {
          uVar8 = uVar3;
        }
        uVar8 = FUN_00414bd0(uVar8);
        if (uVar8 == 0) {
          if (uVar4 < uVar3) {
            bVar12 = true;
            goto LAB_009d4864;
          }
          uVar8 = (uint)(uVar4 != uVar3);
        }
        bVar12 = (int)uVar8 < 0;
      }
      else {
        bVar12 = iVar2 < iVar1;
      }
LAB_009d4864:
      if (bVar12) break;
      if (iVar2 == iVar1) {
        uVar3 = *(uint *)(local_8[1] + 0x18);
        uVar4 = *(uint *)(local_8[-1] + 0x18);
        uVar8 = uVar4;
        if (uVar3 <= uVar4) {
          uVar8 = uVar3;
        }
        uVar8 = FUN_00414bd0(uVar8);
        if (uVar8 == 0) {
          if (uVar4 < uVar3) {
            bVar12 = true;
            goto LAB_009d48db;
          }
          uVar8 = (uint)(uVar4 != uVar3);
        }
        bVar12 = (int)uVar8 < 0;
      }
      else {
        bVar12 = iVar1 < iVar2;
      }
LAB_009d48db:
      if ((bVar12) || (local_8 = local_8 + -2, local_8 <= param_2)) break;
    } while( true );
  }
  if (local_c < param_3) {
    iVar1 = *local_8;
    do {
      iVar2 = *local_c;
      if (iVar2 == iVar1) {
        uVar3 = *(uint *)(local_c[1] + 0x18);
        uVar4 = *(uint *)(local_8[1] + 0x18);
        uVar8 = uVar4;
        if (uVar3 <= uVar4) {
          uVar8 = uVar3;
        }
        uVar8 = FUN_00414bd0(uVar8);
        if (uVar8 == 0) {
          if (uVar4 < uVar3) {
            bVar12 = true;
            goto LAB_009d4979;
          }
          uVar8 = (uint)(uVar4 != uVar3);
        }
        bVar12 = (int)uVar8 < 0;
      }
      else {
        bVar12 = iVar1 < iVar2;
      }
LAB_009d4979:
      if (bVar12) break;
      if (iVar1 == iVar2) {
        uVar3 = *(uint *)(local_8[1] + 0x18);
        uVar4 = *(uint *)(local_c[1] + 0x18);
        uVar8 = uVar4;
        if (uVar3 <= uVar4) {
          uVar8 = uVar3;
        }
        uVar8 = FUN_00414bd0(uVar8);
        if (uVar8 == 0) {
          if (uVar4 < uVar3) {
            bVar12 = true;
            goto LAB_009d49f3;
          }
          uVar8 = (uint)(uVar4 != uVar3);
        }
        bVar12 = (int)uVar8 < 0;
      }
      else {
        bVar12 = iVar2 < iVar1;
      }
LAB_009d49f3:
      if ((bVar12) || (local_c = local_c + 2, param_3 <= local_c)) break;
    } while( true );
  }
  local_14 = local_8;
  local_10 = local_c;
  piVar5 = local_c;
joined_r0x009d4a26:
  for (; piVar6 = local_14, piVar7 = local_8, local_10 < param_3; local_10 = local_10 + 2) {
    iVar1 = *local_8;
    iVar2 = *local_10;
    if (iVar1 == iVar2) {
      uVar3 = *(uint *)(local_8[1] + 0x18);
      uVar4 = *(uint *)(local_10[1] + 0x18);
      uVar8 = uVar4;
      if (uVar3 <= uVar4) {
        uVar8 = uVar3;
      }
      uVar8 = FUN_00414bd0(uVar8);
      if (uVar8 == 0) {
        if (uVar4 < uVar3) {
          bVar12 = true;
          goto LAB_009d4aa0;
        }
        uVar8 = (uint)(uVar4 != uVar3);
      }
      bVar12 = (int)uVar8 < 0;
    }
    else {
      bVar12 = iVar2 < iVar1;
    }
LAB_009d4aa0:
    local_c = piVar5;
    if (!bVar12) {
      if (iVar2 == iVar1) {
        uVar3 = *(uint *)(local_10[1] + 0x18);
        uVar4 = *(uint *)(local_8[1] + 0x18);
        uVar8 = uVar4;
        if (uVar3 <= uVar4) {
          uVar8 = uVar3;
        }
        uVar8 = FUN_00414bd0(uVar8);
        if (uVar8 == 0) {
          if (uVar4 < uVar3) {
            bVar12 = true;
            goto LAB_009d4b1a;
          }
          uVar8 = (uint)(uVar4 != uVar3);
        }
        bVar12 = (int)uVar8 < 0;
      }
      else {
        bVar12 = iVar1 < iVar2;
      }
LAB_009d4b1a:
      if (bVar12) break;
      local_c = piVar5 + 2;
      if (piVar5 != local_10) {
        iVar1 = *piVar5;
        *piVar5 = *local_10;
        *local_10 = iVar1;
        iVar1 = piVar5[1];
        piVar5[1] = local_10[1];
        local_10[1] = iVar1;
      }
    }
    piVar5 = local_c;
  }
  for (; local_8 = piVar7, param_2 < piVar6; piVar6 = piVar6 + -2) {
    piVar9 = local_14 + -2;
    iVar1 = *piVar9;
    iVar2 = *piVar7;
    if (iVar1 == iVar2) {
      uVar3 = *(uint *)(local_14[-1] + 0x18);
      uVar4 = *(uint *)(piVar7[1] + 0x18);
      uVar8 = uVar4;
      if (uVar3 <= uVar4) {
        uVar8 = uVar3;
      }
      uVar8 = FUN_00414bd0(uVar8);
      if (uVar8 == 0) {
        if (uVar4 < uVar3) {
          bVar12 = true;
          goto LAB_009d4bf2;
        }
        uVar8 = (uint)(uVar4 != uVar3);
      }
      bVar12 = (int)uVar8 < 0;
    }
    else {
      bVar12 = iVar2 < iVar1;
    }
LAB_009d4bf2:
    if (!bVar12) {
      if (iVar2 == iVar1) {
        uVar3 = *(uint *)(piVar7[1] + 0x18);
        uVar4 = *(uint *)(local_14[-1] + 0x18);
        uVar8 = uVar4;
        if (uVar3 <= uVar4) {
          uVar8 = uVar3;
        }
        uVar8 = FUN_00414bd0(uVar8);
        if (uVar8 == 0) {
          if (uVar4 < uVar3) {
            bVar12 = true;
            goto LAB_009d4c66;
          }
          uVar8 = (uint)(uVar4 != uVar3);
        }
        bVar12 = (int)uVar8 < 0;
      }
      else {
        bVar12 = iVar1 < iVar2;
      }
LAB_009d4c66:
      if (bVar12) break;
      local_8 = piVar7 + -2;
      if (local_8 != piVar9) {
        iVar1 = *local_8;
        *local_8 = *piVar9;
        *piVar9 = iVar1;
        iVar1 = piVar7[-1];
        piVar7[-1] = local_14[-1];
        local_14[-1] = iVar1;
      }
    }
    local_14 = piVar9;
    piVar7 = local_8;
  }
  if (piVar6 == param_2) {
    if (local_10 == param_3) {
      *param_1 = (uint)piVar7;
      param_1[1] = (uint)piVar5;
      return;
    }
    if ((piVar5 != local_10) && (piVar7 != piVar5)) {
      iVar1 = *piVar7;
      *piVar7 = *piVar5;
      *piVar5 = iVar1;
      iVar1 = piVar7[1];
      piVar7[1] = piVar5[1];
      piVar5[1] = iVar1;
    }
    piVar11 = local_10 + 2;
    bVar12 = piVar7 == local_10;
    piVar9 = local_10;
    piVar10 = piVar7;
    local_14 = piVar6;
    local_10 = piVar11;
    local_c = piVar5 + 2;
    local_8 = piVar7 + 2;
    piVar5 = piVar5 + 2;
    if (bVar12) goto joined_r0x009d4a26;
  }
  else {
    local_14 = piVar6 + -2;
    if (local_10 != param_3) {
      if (local_10 != local_14) {
        iVar1 = *local_10;
        *local_10 = *local_14;
        *local_14 = iVar1;
        iVar1 = local_10[1];
        local_10[1] = piVar6[-1];
        piVar6[-1] = iVar1;
      }
      local_10 = local_10 + 2;
      goto joined_r0x009d4a26;
    }
    piVar10 = piVar7 + -2;
    if (local_14 != piVar10) {
      iVar1 = *local_14;
      *local_14 = *piVar10;
      *piVar10 = iVar1;
      iVar1 = piVar6[-1];
      piVar6[-1] = piVar7[-1];
      piVar7[-1] = iVar1;
    }
    piVar9 = piVar5 + -2;
    local_c = piVar9;
    local_8 = piVar10;
    piVar5 = piVar9;
    if (piVar10 == piVar9) goto joined_r0x009d4a26;
  }
  iVar1 = *piVar10;
  *piVar10 = *piVar9;
  *piVar9 = iVar1;
  iVar1 = piVar10[1];
  piVar10[1] = piVar9[1];
  piVar9[1] = iVar1;
  piVar5 = local_c;
  goto joined_r0x009d4a26;
}

