// FUN_009387f0 @ 009387f0 body=[[009387f0, 00938ac6]]


uint FUN_009387f0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  
  iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_2[1] * 4);
  piVar3 = *(int **)(param_1 + 0x30);
  piVar10 = (int *)(param_1 + 0x2c);
  piVar2 = (int *)*piVar10;
  if (piVar2 != piVar3) {
    do {
      if (piVar2[1] == param_2[1]) break;
      piVar2 = piVar2 + 2;
    } while (piVar2 != piVar3);
    if (piVar2 != piVar3) goto LAB_00938910;
  }
  piVar3 = *(int **)(param_1 + 0x40);
  piVar2 = *(int **)(param_1 + 0x3c);
  piVar8 = (int *)(param_1 + 0x3c);
  if (piVar2 != piVar3) {
    do {
      if (piVar2[1] == param_2[1]) break;
      piVar2 = piVar2 + 2;
    } while (piVar2 != piVar3);
    if (piVar2 != piVar3) goto LAB_00938910;
  }
  if ((*(char *)(iVar6 + 0x31) == '\0') ||
     (((local_10 = iVar6, *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) != 0 &&
       (piVar2 = (int *)FUN_0042b220(), (char)piVar2 != '\0')) ||
      (piVar2 = (int *)FUN_005395a0(iVar6), (char)piVar2 != '\0')))) goto LAB_00938910;
  if (*(char *)(param_1 + 0xfc) == '\0') {
    if ((char)param_3 != '\0') goto LAB_00938910;
    puVar9 = (undefined4 *)*piVar8;
    iVar6 = *(int *)(param_1 + 0x40) - (int)puVar9 >> 3;
    local_1c = 0;
    local_18 = puVar9;
    if (0 < iVar6) {
      do {
        piVar3 = (int *)FUN_009387c0(param_1,*puVar9,puVar9[1]);
        iVar5 = piVar3[1] - *piVar3 >> 6;
        iVar7 = 0;
        if (0 < iVar5) {
          piVar3 = (int *)(*piVar3 + 0xc);
          do {
            piVar1 = *(int **)(*piVar3 + 0x120);
            while( true ) {
              piVar2 = (int *)0x0;
              if (piVar1 == (int *)0x0) goto LAB_00938910;
              if (*piVar1 == 0x8da) break;
              piVar1 = (int *)piVar1[2];
            }
            iVar7 = iVar7 + 1;
            piVar3 = piVar3 + 0x10;
          } while (iVar7 < iVar5);
        }
        local_1c = local_1c + 1;
        puVar9 = puVar9 + 2;
      } while (local_1c < iVar6);
    }
    iVar6 = FUN_00936fc0(param_1,*piVar10,local_18,0);
    piVar2 = (int *)(*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x3dc) / 1000);
    if (-(int)piVar2 != iVar6 && (int)piVar2 <= -iVar6) goto LAB_00938910;
  }
  FUN_00936640();
  iVar6 = *(int *)(DAT_012586dc + 0x30);
  piVar2 = (int *)FUN_00424810(*(int *)(iVar6 + 0x3e0) / 1000);
  if (local_1c <= *(int *)(DAT_012588e8 + 0xb0c)) {
    if (*(char *)(param_1 + 0xfc) == '\0') {
      piVar10 = (int *)*piVar8;
      iVar5 = *(int *)(param_1 + 0x40) - (int)piVar10 >> 3;
      iVar6 = 0;
      piVar2 = piVar8;
      if (iVar5 < 1) goto LAB_00938910;
      local_10 = *(undefined4 *)(local_10 + 0xbe8);
      while( true ) {
        local_14 = piVar10[1];
        local_18 = (undefined4 *)*piVar10;
        uVar4 = FUN_009315a0();
        if (((char)uVar4 != '\0') && (uVar4 = FUN_0093c1e0(&local_18), (char)uVar4 != '\0')) break;
        iVar6 = iVar6 + 1;
        piVar10 = piVar10 + 2;
        if (iVar5 <= iVar6) {
          return uVar4 & 0xffffff00;
        }
      }
    }
    else {
      local_10 = *param_2;
      piVar2 = *(int **)(*(int *)(DAT_012587e4 + 4) + param_2[1] * 4);
      if ((char)param_3 == '\0') {
        iVar5 = *piVar8;
      }
      else {
        iVar5 = *piVar10;
      }
      if (*(int *)(*(int *)(piVar2[0x2fa] + *(int *)(iVar5 + 4) * 4) + 0x3c) <
          *(int *)(iVar6 + 0x494)) goto LAB_00938910;
      if (*(int *)(iVar6 + 0x498) < piVar2[0x1a0]) {
        return (uint)piVar2 & 0xffffff00;
      }
    }
    piVar2 = (int *)FUN_00939450(param_1,param_2,param_3,0,1);
    if ((char)piVar2 != '\0') {
      uVar4 = FUN_0093ac50(param_2);
      return uVar4;
    }
  }
LAB_00938910:
  return (uint)piVar2 & 0xffffff00;
}

