// FUN_008465a0 @ 008465a0  (requested 008465A0, first bytes: 55 8B EC 81 EC BC 00 00)


int * FUN_008465a0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int unaff_EDI;
  undefined1 local_c0 [8];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_74 [4];
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_58;
  undefined1 *local_4c;
  undefined4 local_44;
  int local_40;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  uint *local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  piVar3 = param_1;
  FUN_008a8650(0);
  FUN_008a8650(0);
  local_b8 = *(undefined4 *)(unaff_EDI + 0x18);
  local_b4 = *(undefined4 *)(unaff_EDI + 0x1c);
  local_68 = *(undefined4 *)(unaff_EDI + 0x20);
  local_4c = local_c0;
  local_c = 0;
  local_14 = 0;
  local_64 = *(undefined4 *)(unaff_EDI + 0x24);
  local_18 = (uint *)(DAT_012588e8 + 0xadc);
  piVar7 = (int *)*local_18;
  *piVar3 = 0;
  local_10 = 0x2d2d2d;
  while (((int *)*local_18 <= piVar7 && (piVar7 < (int *)local_18[1]))) {
    local_44 = *(undefined4 *)(*piVar7 + 0x1c);
    iVar1 = *(int *)(*piVar7 + 0x20);
    piVar7 = piVar7 + 1;
    if ((iVar1 != 0) &&
       ((((char)local_44 != 'R' || ((char)((uint)local_44 >> 8) != 'E')) ||
        ((char)((uint)local_44 >> 0x10) != 'B')))) {
      local_40 = iVar1;
      local_20 = piVar7;
      *(undefined4 *)(local_4c + 0x2c) = local_44;
      *(int *)(local_4c + 0x30) = iVar1;
      if ((((param_5 == 0) || (*(int *)(param_5 + 0x14) == iVar1)) &&
          (cVar4 = (**(code **)(*(int *)(*(int *)(unaff_EDI + 0xc) + 0xd8) + 0x18))(local_70),
          cVar4 != '\0')) &&
         (FUN_00846c40(&param_1,param_2,param_3,&local_44,*(undefined4 *)(unaff_EDI + 0xc),&local_44
                       ,param_4), 0 < (int)param_1)) {
        local_28 = *(undefined4 *)(unaff_EDI + 0x20);
        piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0x24) * 4) +
                          0xe44);
        while (piVar2 != (int *)0x0) {
          iVar1 = *piVar2;
          local_24 = (int *)piVar2[2];
          if (iVar1 == 0) {
            local_58 = 0;
          }
          else if ((*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x48) & 0xfffffffcU) == 0) {
            local_58 = 0;
          }
          else {
            local_58 = **(undefined4 **)(iVar1 + 0x48);
          }
          if ((((param_5 == 0) || (*(char *)(*(int *)(unaff_EDI + 0xc) + 0x1dc) != '\0')) ||
              (piVar7 = local_20, piVar2 = local_24,
              *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_5 + 0x28) * 4) +
                      0x188) == iVar1)) &&
             (((cVar4 = (**(code **)(*(int *)(*(int *)(unaff_EDI + 0xc) + 0xa0) + 0x18))(local_70),
               piVar7 = local_20, piVar2 = local_24, cVar4 != '\0' &&
               (((char)param_4 == '\0' ||
                (cVar4 = (**(code **)(*(int *)(*(int *)(unaff_EDI + 0xc) + 0x84) + 0x18))(local_70),
                piVar7 = local_20, piVar2 = local_24, cVar4 != '\0')))) &&
              ((param_3 == 0 ||
               ((cVar4 = FUN_0093c6f0(&local_44,0,0), piVar7 = local_20, piVar2 = local_24,
                cVar4 == '\0' &&
                (cVar4 = FUN_0093c7c0(iVar1), piVar7 = local_20, piVar2 = local_24, cVar4 == '\0')))
               ))))) {
            piVar5 = (int *)FUN_00847b60(local_74,param_2,param_3,iVar1,
                                         *(undefined4 *)(unaff_EDI + 0xc));
            piVar7 = local_20;
            piVar2 = local_24;
            if (*piVar3 < *piVar5 + (int)param_1) {
              *piVar3 = *piVar5 + (int)param_1;
              local_14 = iVar1;
              local_10 = local_44;
              local_c = local_40;
            }
          }
        }
      }
    }
  }
  uVar6 = 0;
  if (0 < *piVar3) {
    *(undefined4 *)(unaff_EDI + 0x10) = local_10;
    *(int *)(unaff_EDI + 0x14) = local_c;
    if ((local_14 != 0) &&
       ((*(int *)(local_14 + 0x4c) - *(int *)(local_14 + 0x48) & 0xfffffffcU) != 0)) {
      uVar6 = **(undefined4 **)(local_14 + 0x48);
    }
    *(undefined4 *)(unaff_EDI + 0x28) = uVar6;
  }
  return piVar3;
}

