// FUN_00951920 @ 00951920 body=[[00951920, 00951afe] [00951b02, 00951ecd]]


int * FUN_00951920(int param_1,int *param_2,char param_3)

{
  longlong lVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int local_44;
  int local_40;
  int local_3c;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  undefined4 local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb8828;
  local_14 = ExceptionList;
  if (*(char *)(*(int *)(param_1 + 0xc) + 0x1d4) != '\0') {
    *param_2 = 0;
    return param_2;
  }
  piVar5 = *(int **)(*(int *)(param_1 + 0xc) + 0x120);
  local_44 = 0;
  ExceptionList = &local_14;
  if (piVar5 != (int *)0x0) {
LAB_00951984:
    if (*piVar5 != 0x8a3) goto code_r0x0095198c;
    iVar7 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x28) * 4) + 0x188
                    );
    ExceptionList = &local_14;
    for (uVar9 = *(uint *)(iVar7 + 0x48);
        (*(uint *)(iVar7 + 0x48) <= uVar9 && (uVar9 < *(uint *)(iVar7 + 0x4c))); uVar9 = uVar9 + 4)
    {
      piVar5 = (int *)FUN_004b79a0(local_30);
      FUN_00401000(0x452f0800);
      iVar4 = FUN_00b31c00();
      iVar4 = __alldiv((longlong)*piVar5 * (longlong)iVar4,1000,0);
      local_44 = local_44 + iVar4;
    }
  }
LAB_00951a14:
  piVar5 = *(int **)(*(int *)(param_1 + 0xc) + 0x120);
  if (piVar5 != (int *)0x0) {
LAB_00951a27:
    if (*piVar5 != 0x8a7) goto code_r0x00951a2f;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_c = 0;
    FUN_0094e4d0(param_1);
    local_40 = 0;
    iVar7 = local_24 - local_28 >> 2;
    if (0 < iVar7) {
      do {
        iVar4 = *(int *)(local_28 + local_40 * 4);
        for (uVar9 = *(uint *)(iVar4 + 0x48);
            (*(uint *)(iVar4 + 0x48) <= uVar9 && (uVar9 < *(uint *)(iVar4 + 0x4c)));
            uVar9 = uVar9 + 4) {
          piVar5 = (int *)FUN_004b79a0(local_2c);
          FUN_00401000(0x452f0800);
          iVar6 = FUN_00b31c00();
          iVar6 = __alldiv((longlong)iVar6 * (longlong)*piVar5,1000,0);
          local_44 = local_44 + iVar6;
        }
        local_40 = local_40 + 1;
      } while (local_40 < iVar7);
    }
    local_c = 0xffffffff;
    if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_28);
    }
  }
LAB_00951b02:
  piVar8 = *(int **)(*(int *)(param_1 + 0xc) + 0x120);
  for (piVar5 = piVar8; piVar2 = piVar8, piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
    if (*piVar5 == 0x8a2) {
      local_44 = local_44 + *(int *)(*(int *)(DAT_012586dc + 0x30) + 4);
      break;
    }
  }
  do {
    piVar5 = piVar8;
    if (piVar2 == (int *)0x0) goto joined_r0x00951b6f;
    if (*piVar2 == 0x8aa) {
      local_44 = local_44 + *(int *)(*(int *)(DAT_012586dc + 0x30) + 8);
      goto joined_r0x00951b6f;
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
code_r0x0095198c:
  piVar5 = (int *)piVar5[2];
  ExceptionList = &local_14;
  if (piVar5 == (int *)0x0) goto LAB_00951a14;
  goto LAB_00951984;
code_r0x00951a2f:
  piVar5 = (int *)piVar5[2];
  if (piVar5 == (int *)0x0) goto LAB_00951b02;
  goto LAB_00951a27;
joined_r0x00951b6f:
  piVar2 = piVar8;
  if (piVar5 == (int *)0x0) goto joined_r0x00951b90;
  if (*piVar5 == 0x942) {
    local_44 = local_44 + *(int *)(*(int *)(DAT_012586dc + 0x30) + 0xc);
    goto joined_r0x00951b90;
  }
  piVar5 = (int *)piVar5[2];
  goto joined_r0x00951b6f;
joined_r0x00951b90:
  piVar5 = piVar8;
  if (piVar2 == (int *)0x0) goto joined_r0x00951bb1;
  if (*piVar2 == 0x8a4) {
    local_44 = local_44 + *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x10);
    goto joined_r0x00951bb1;
  }
  piVar2 = (int *)piVar2[2];
  goto joined_r0x00951b90;
joined_r0x00951bb1:
  piVar2 = piVar8;
  if (piVar5 == (int *)0x0) goto joined_r0x00951bd2;
  if (*piVar5 == 0xa2f) {
    local_44 = local_44 + *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x14);
    goto joined_r0x00951bd2;
  }
  piVar5 = (int *)piVar5[2];
  goto joined_r0x00951bb1;
joined_r0x00951bd2:
  piVar5 = piVar8;
  if (piVar2 == (int *)0x0) goto joined_r0x00951bf3;
  if (*piVar2 == 0xa4c) {
    local_44 = local_44 + *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x44);
    goto joined_r0x00951bf3;
  }
  piVar2 = (int *)piVar2[2];
  goto joined_r0x00951bd2;
joined_r0x00951bf3:
  piVar2 = piVar8;
  if (piVar5 == (int *)0x0) goto joined_r0x00951c14;
  if (*piVar5 == 0xa30) {
    local_44 = local_44 + *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x18);
    goto joined_r0x00951c14;
  }
  piVar5 = (int *)piVar5[2];
  goto joined_r0x00951bf3;
joined_r0x00951c14:
  piVar5 = piVar8;
  if (piVar2 == (int *)0x0) goto joined_r0x00951c35;
  if (*piVar2 == 0x8a5) {
    local_44 = local_44 + *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x1c);
    goto joined_r0x00951c35;
  }
  piVar2 = (int *)piVar2[2];
  goto joined_r0x00951c14;
joined_r0x00951c35:
  piVar2 = piVar8;
  if (piVar5 == (int *)0x0) goto joined_r0x00951c56;
  if (*piVar5 == 0x8a8) {
    local_44 = local_44 + *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x28);
    goto joined_r0x00951c56;
  }
  piVar5 = (int *)piVar5[2];
  goto joined_r0x00951c35;
joined_r0x00951c56:
  piVar5 = piVar8;
  if (piVar2 == (int *)0x0) goto joined_r0x00951c77;
  if (*piVar2 == 0x8da) {
    local_44 = local_44 + *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x30);
    goto joined_r0x00951c77;
  }
  piVar2 = (int *)piVar2[2];
  goto joined_r0x00951c56;
joined_r0x00951c77:
  piVar2 = piVar8;
  if (piVar5 == (int *)0x0) goto joined_r0x00951c9f;
  if (*piVar5 == 0x8a9) {
    local_44 = local_44 + *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x2c);
    goto joined_r0x00951c9f;
  }
  piVar5 = (int *)piVar5[2];
  goto joined_r0x00951c77;
joined_r0x00951c9f:
  piVar5 = piVar8;
  if (piVar2 == (int *)0x0) goto joined_r0x00951cc0;
  if (*piVar2 == 0x8a1) {
    local_44 = local_44 + *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x34);
    goto joined_r0x00951cc0;
  }
  piVar2 = (int *)piVar2[2];
  goto joined_r0x00951c9f;
joined_r0x00951cc0:
  piVar2 = piVar8;
  if (piVar5 == (int *)0x0) goto joined_r0x00951ce4;
  if (*piVar5 == 0x6c2) {
    local_44 = local_44 + *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x44c);
    goto joined_r0x00951ce4;
  }
  piVar5 = (int *)piVar5[2];
  goto joined_r0x00951cc0;
joined_r0x00951ce4:
  piVar5 = piVar8;
  if (piVar2 == (int *)0x0) goto joined_r0x00951d05;
  if (*piVar2 == 0x975) {
    local_44 = local_44 + *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x3c);
    goto joined_r0x00951d05;
  }
  piVar2 = (int *)piVar2[2];
  goto joined_r0x00951ce4;
joined_r0x00951d05:
  if (piVar5 == (int *)0x0) goto joined_r0x00951d2c;
  if (*piVar5 == 0x976) {
    local_44 = local_44 + *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x40);
    goto joined_r0x00951d2c;
  }
  piVar5 = (int *)piVar5[2];
  goto joined_r0x00951d05;
joined_r0x00951d2c:
  if (piVar8 == (int *)0x0) goto LAB_00951e17;
  if (*piVar8 == 0x264) {
    iVar7 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x440);
    if (1 < *DAT_012587e4) {
      piVar5 = (int *)DAT_012587e4[1];
      local_3c = *DAT_012587e4 + -1;
      piVar8 = piVar5;
      do {
        piVar8 = piVar8 + 1;
        iVar4 = *(int *)(*piVar8 + 0x20);
        if (*(int *)(*(int *)(piVar5[iVar4] + 0xe64) + 0x50) ==
            *(int *)(*(int *)(piVar5[*(int *)(param_1 + 0x1c)] + 0xe64) + 0x50)) {
          if (*(int *)(piVar5[iVar4] + 0x142c) == *(int *)(param_1 + 0x24)) {
            local_44 = local_44 + iVar7;
          }
          if (*(int *)(*(int *)(*(int *)(piVar5[*(int *)(param_1 + 0x24)] + 0xbe8) + iVar4 * 4) +
                      0x24) != 0) {
            local_44 = local_44 + iVar7;
          }
        }
        local_3c = local_3c + -1;
      } while (local_3c != 0);
    }
    local_44 = local_44 + iVar7;
LAB_00951e17:
    local_28 = *(undefined4 *)(param_1 + 0x18);
    iVar7 = *(int *)(*(int *)(*(int *)(DAT_012587e4[1] + *(int *)(param_1 + 0x1c) * 4) + 0xbe8) +
                    *(int *)(param_1 + 0x24) * 4);
    if (((iVar7 != 0) && (iVar7 = *(int *)(iVar7 + 0x34), iVar7 != 0)) &&
       (*(char *)(iVar7 + 0xfc) != '\0')) {
      if ((param_3 == '\0') && (cVar3 = FUN_0093cf20(param_1 + 0x18), cVar3 != '\0')) {
        lVar1 = (longlong)local_44 * (longlong)*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x4ac);
      }
      else {
        lVar1 = (longlong)*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x4a8) * (longlong)local_44;
      }
      local_44 = __alldiv(lVar1,1000,0);
    }
    iVar7 = __alldiv((longlong)*(int *)(*(int *)(param_1 + 0xc) + 0xfc) * (longlong)local_44,1000,0)
    ;
    if (100000 < iVar7) {
      iVar7 = 100000;
    }
    *param_2 = iVar7;
    ExceptionList = local_14;
    return param_2;
  }
  piVar8 = (int *)piVar8[2];
  goto joined_r0x00951d2c;
}

