// FUN_006aea10 @ 006aea10 body=[[006aea10, 006aea97] [006aea9b, 006aebfe]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

char * FUN_006aea10(int param_1,char *param_2)

{
  char **ppcVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  code *pcVar5;
  char cVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uStack_7c;
  undefined1 auStack_78 [4];
  int aiStack_74 [3];
  undefined1 auStack_68 [4];
  int aiStack_64 [2];
  undefined *puStack_5c;
  char *pcStack_58;
  char **ppcStack_54;
  char *pcStack_50;
  char *local_40 [4];
  undefined4 local_30;
  uint local_2c;
  int *local_24;
  undefined4 local_20;
  char **local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41128;
  local_10 = ExceptionList;
  pcStack_50 = param_2;
  ppcStack_54 = (char **)0x6aea48;
  ExceptionList = &local_10;
  cVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 100) + 0x18) + 0x94))();
  if (cVar6 != '\0') {
    ppcStack_54 = (char **)0xe;
    pcStack_58 = "leader_listbox";
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = (char *)((uint)local_40[0] & 0xffffff00);
    puStack_5c = (undefined *)0x6aea6c;
    FUN_00409350();
    local_8 = 0;
    ppcStack_54 = local_40;
    pcStack_58 = (char *)0x6aea7d;
    local_24 = (int *)(**(code **)(**(int **)(param_1 + 100) + 0x7c))();
    local_8 = 0xffffffff;
    if (0xf < local_2c) {
      pcStack_58 = local_40[0];
                    /* WARNING: Subroutine does not return */
      puStack_5c = &UNK_006aea98;
      FUN_00aae91b();
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = (char *)((uint)local_40[0] & 0xffffff00);
    pcStack_58 = param_2;
    puStack_5c = (undefined *)0x6aeab7;
    cVar6 = (**(code **)(local_24[1] + 0x94))();
    if (cVar6 != '\0') {
      local_20 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
      iVar11 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
      iVar2 = *(int *)(iVar11 + 0xbdc);
      puStack_5c = (undefined *)0x6aeaf0;
      (&puStack_5c)[-iVar2] = (undefined *)0x6aeaf9;
      piVar3 = *(int **)(iVar11 + 0xbd4);
      iVar11 = 0;
      iVar8 = 0;
      while (piVar3 != (int *)0x0) {
        pcVar4 = (char *)*piVar3;
        piVar3 = (int *)piVar3[2];
        if (pcVar4[0xd4] == '\0') {
          (&pcStack_58)[iVar2 * -2 + iVar11] = pcVar4;
          iVar11 = iVar11 + 1;
        }
        else {
          (&pcStack_58)[iVar8 - iVar2] = pcVar4;
          iVar8 = iVar8 + 1;
        }
      }
      local_18 = iVar8;
      local_14 = iVar11;
      (&puStack_5c)[iVar2 * -2] = (undefined *)*(undefined4 *)(param_1 + 0x264);
      aiStack_64[iVar2 * -2 + 1] =
           (int)(&pcStack_58 + (iVar8 - iVar2)) - (int)(&pcStack_58 + -iVar2) >> 2;
      aiStack_64[iVar2 * -2] = (int)(&pcStack_58 + (iVar8 - iVar2));
      *(char ***)(auStack_68 + iVar2 * -8) = &pcStack_58 + -iVar2;
      aiStack_74[iVar2 * -2 + 2] = 0x6aeb4e;
      FUN_006b54d0();
      iVar11 = local_14;
      aiStack_74[iVar2 * -2 + 2] = *(undefined4 *)(param_1 + 0x264);
      ppcVar1 = &pcStack_58 + iVar2 * -2 + iVar11;
      aiStack_74[iVar2 * -2 + 1] = (int)ppcVar1 - (int)(&pcStack_58 + iVar2 * -2) >> 2;
      aiStack_74[iVar2 * -2] = (int)ppcVar1;
      *(char ***)(auStack_78 + iVar2 * -8) = &pcStack_58 + iVar2 * -2;
      local_1c = ppcVar1;
      (&uStack_7c)[iVar2 * -2] = 0x6aeb70;
      FUN_006b54d0();
      if (*(char *)(param_1 + 0x272) == '\0') {
        (&puStack_5c)[iVar2 * -2] = (undefined *)0x6aeb88;
        FUN_006b53c0();
        (&puStack_5c)[iVar2 * -2] = (undefined *)0x6aeb92;
        FUN_006b53c0();
      }
      pcVar5 = *(code **)(*local_24 + 0x2c);
      ppuVar9 = &puStack_5c + iVar2 * -2;
      (&puStack_5c)[iVar2 * -2] = (undefined *)0x6aeb9c;
      puVar7 = (undefined4 *)(*pcVar5)();
      piVar3 = (int *)*puVar7;
      iVar11 = 0;
      while (piVar3 != (int *)0x0) {
        pcVar5 = *(code **)(*(int *)(*(int *)(*piVar3 + 0x20) + 0x18) + 0x94);
        piVar3 = (int *)piVar3[2];
        *(char **)((int)ppuVar9 + -4) = param_2;
        puVar10 = (undefined4 *)((int)ppuVar9 + -8);
        ppuVar9 = (undefined **)((int)ppuVar9 + -8);
        *puVar10 = 0x6aebc1;
        cVar6 = (*pcVar5)();
        if (cVar6 != '\0') break;
        iVar11 = iVar11 + 1;
      }
      if (iVar11 < local_18) {
        ExceptionList = local_10;
        return (&pcStack_58)[iVar11 - iVar2];
      }
      if (iVar11 - local_18 < local_14) {
        ExceptionList = local_10;
        return (&pcStack_58)[iVar2 * -2 + (iVar11 - local_18)];
      }
    }
  }
  ExceptionList = local_10;
  return (char *)0x0;
}

