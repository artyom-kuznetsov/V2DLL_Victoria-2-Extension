// FUN_0055c3d0 @ 0055c3d0 body=[[0055c3d0, 0055c46c] [0055c470, 0055c63f] [0055c643, 0055c65e] [0055c660, 0055c6b5]]


void FUN_0055c3d0(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  char ****_Str1;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined1 uStack_154;
  char ***apppcStack_13c [4];
  undefined4 uStack_12c;
  uint uStack_128;
  int aiStack_120 [66];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4639b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_009a1440(param_2);
  do {
    piVar7 = (int *)param_2[7];
    if ((char)piVar7[0x44] == '\0') {
      iVar3 = (**(code **)(*piVar7 + 4))();
      piVar7[2] = iVar3;
      if (iVar3 == 0) {
        piVar7[3] = 0x13;
      }
      *(undefined1 *)(piVar7 + 0x44) = 1;
    }
    piVar7 = piVar7 + 3;
    piVar8 = aiStack_120;
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) {
      (**(code **)*param_2)(1);
      ExceptionList = pvStack_18;
      return;
    }
    uStack_128 = 0xf;
    uStack_12c = 0;
    apppcStack_13c[0] = (char ***)((uint)apppcStack_13c[0] & 0xffffff00);
    pcVar4 = (char *)(param_2 + 9);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(param_2 + 9,(int)pcVar4 - ((int)param_2 + 0x25));
    uStack_c = 0;
    _Str1 = (char ****)apppcStack_13c[0];
    if (uStack_128 < 0x10) {
      _Str1 = apppcStack_13c;
    }
    uVar5 = (int)*(char *)((int)_Str1 + 2) + (int)*(char *)((int)_Str1 + 1) + (int)*(char *)_Str1 &
            0x3f;
    piVar7 = (int *)(param_1 + 0x14 + uVar5 * 0x10);
    iVar3 = *(int *)(param_1 + 0x18 + uVar5 * 0x10) - *(int *)(param_1 + 0x14 + uVar5 * 0x10) >> 3;
    iVar9 = 0;
    if (0 < iVar3) {
      do {
        iVar6 = __strnicmp((char *)_Str1,(char *)(*piVar7 + iVar9 * 8),3);
        if (iVar6 == 0) {
          iVar3 = *(int *)(*piVar7 + 4 + iVar9 * 8);
          goto LAB_0055c4ec;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar3);
    }
    iVar3 = 0;
LAB_0055c4ec:
    uVar2 = DAT_00f092fc;
    iVar3 = *(int *)(*(int *)(param_1 + 4) + iVar3 * 4);
    FUN_009a1440(param_2);
    if (param_2[8] == 0x471) {
      FUN_009b6ea0(param_2);
      *(undefined4 *)(iVar3 + 0x944) = 0x18d;
      *(ulonglong *)(iVar3 + 0x948) = CONCAT44(uVar2,uVar2);
      *(undefined4 *)(iVar3 + 0x950) = uVar2;
      *(undefined4 *)(iVar3 + 0x954) = uVar2;
      *(undefined1 *)(iVar3 + 0x958) = 1;
      FUN_009a1440(param_2);
    }
    if (param_2[8] == 0x472) {
      FUN_009b6ea0(param_2);
      *(undefined4 *)(iVar3 + 0x960) = 0x18d;
      *(ulonglong *)(iVar3 + 0x964) = CONCAT44(uVar2,uVar2);
      *(undefined4 *)(iVar3 + 0x96c) = uVar2;
      *(undefined4 *)(iVar3 + 0x970) = uVar2;
      *(undefined1 *)(iVar3 + 0x974) = 1;
      FUN_009a1440(param_2);
    }
    if (param_2[8] == 0x473) {
      FUN_009b6ea0(param_2);
      *(undefined ***)(iVar3 + 0x97c) = CColor::vftable;
      *(ulonglong *)(iVar3 + 0x980) = CONCAT44(uVar2,0x18d);
      *(undefined4 *)(iVar3 + 0x988) = uVar2;
      *(undefined4 *)(iVar3 + 0x98c) = uVar2;
      uStack_154 = (undefined1)uVar2;
      *(undefined1 *)(iVar3 + 0x990) = uStack_154;
      (**(code **)(*(int *)param_2[7] + 4))();
    }
    FUN_009a1440(param_2);
    uStack_c = 0xffffffff;
    if (0xf < uStack_128) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(apppcStack_13c[0]);
    }
    uStack_128 = 0xf;
    uStack_12c = 0;
    apppcStack_13c[0] = (char ***)((uint)apppcStack_13c[0] & 0xffffff00);
  } while( true );
}

