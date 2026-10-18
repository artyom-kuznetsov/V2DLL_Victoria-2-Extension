// FUN_00455290 @ 00455290 body=[[00455290, 004553be] [004553c5, 00455461]]


undefined1 * FUN_00455290(uint *param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_9e8 [624];
  int local_28;
  undefined4 local_24;
  int *local_18;
  int local_10;
  int local_c;
  
  iVar7 = 0;
  local_c = 0;
  local_10 = 0;
  local_28 = 0;
  local_24 = 1;
  piVar4 = (int *)*param_1;
LAB_004552b6:
  do {
    if ((piVar4 < (int *)*param_1) || ((int *)param_1[1] <= piVar4)) {
      if ((5 < (int)param_1[6]) && (uVar6 = param_1[4], uVar6 != 0)) {
        if ((char)param_1[7] == '\0') {
          uVar3 = *(uint *)(uVar6 + 8);
          param_1[4] = uVar3;
          if (uVar3 == 0) {
            param_1[5] = 0;
          }
          else {
            *(undefined4 *)(uVar3 + 4) = 0;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uVar6);
        }
        *(undefined1 *)(uVar6 + 0xc) = 1;
      }
      if (local_c == 0) {
        *(undefined4 *)(param_2 + 0x14) = 0xf;
        *(undefined4 *)(param_2 + 0x10) = 0;
        *param_2 = 0;
        FUN_00409350(&DAT_00ded94d,0);
        return param_2;
      }
      uVar6 = param_1[5];
      piVar4 = (int *)FUN_00aae9af(0x10);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = local_c;
        piVar4[1] = uVar6;
        piVar4[2] = 0;
        *(undefined1 *)(piVar4 + 3) = 0;
      }
      uVar3 = param_1[6];
      param_1[5] = (uint)piVar4;
      param_1[6] = uVar3 + 1;
      if (uVar3 == 0) {
        param_1[4] = (uint)piVar4;
        FUN_00454e90();
        return param_2;
      }
      *(int **)(uVar6 + 8) = piVar4;
      FUN_00454e90();
      return param_2;
    }
    iVar1 = *piVar4;
    piVar2 = (int *)param_1[4];
    local_18 = piVar4 + 1;
    for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      piVar4 = local_18;
      if (*piVar2 == iVar1) goto LAB_004552b6;
    }
    if (iVar7 == 0) {
      FUN_009b7700();
      iVar7 = local_28;
    }
    uVar6 = local_9e8[iVar7] ^ (int)local_9e8[iVar7] >> 0xb;
    uVar6 = uVar6 ^ (uVar6 & 0xff3a58ad) << 7;
    uVar6 = uVar6 ^ (uVar6 & 0xffffdf8c) << 0xf;
    uVar6 = uVar6 ^ (int)uVar6 >> 0x12;
    iVar7 = (iVar7 + 1) % 0x270;
    local_28 = iVar7;
    piVar4 = (int *)FUN_00454dc0();
    iVar5 = __alldiv((longlong)*piVar4 * (longlong)(int)((uVar6 + (1 - (int)uVar6 / 5) * 5) * 1000),
                     1000,0);
    piVar4 = local_18;
    if (local_10 < iVar5) {
      local_10 = iVar5;
      local_c = iVar1;
    }
  } while( true );
}

