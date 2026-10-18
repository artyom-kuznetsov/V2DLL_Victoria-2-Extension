// FUN_00846a70 @ 00846a70  (requested 00846A70, first bytes: 55 8B EC 81 EC AC 00 00)


int * FUN_00846a70(int *param_1,undefined4 param_2,int param_3,char param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int unaff_ESI;
  undefined1 local_b0 [8];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined1 *local_44;
  undefined4 local_20;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_008a8650(0);
  FUN_008a8650(0);
  local_a8 = *(undefined4 *)(unaff_ESI + 0x18);
  local_a4 = *(undefined4 *)(unaff_ESI + 0x1c);
  local_60 = *(undefined4 *)(unaff_ESI + 0x20);
  local_44 = local_b0;
  local_5c = *(undefined4 *)(unaff_ESI + 0x24);
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x24) * 4) + 0xe44);
  *param_1 = 0;
  local_10 = local_60;
  local_14 = 0;
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    if (iVar2 == 0) {
      local_50 = 0;
    }
    else if ((*(int *)(iVar2 + 0x4c) - *(int *)(iVar2 + 0x48) & 0xfffffffcU) == 0) {
      local_50 = 0;
    }
    else {
      local_50 = **(undefined4 **)(iVar2 + 0x48);
    }
    if (((((param_5 == 0) ||
          (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_5 + 0x28) * 4) + 0x188)
           == iVar2)) &&
         (cVar3 = (**(code **)(*(int *)(*(int *)(unaff_ESI + 0xc) + 0xa0) + 0x18))(local_68),
         cVar3 != '\0')) &&
        ((param_4 == '\0' ||
         (cVar3 = (**(code **)(*(int *)(*(int *)(unaff_ESI + 0xc) + 0x84) + 0x18))(local_68),
         cVar3 != '\0')))) && ((param_3 == 0 || (cVar3 = FUN_0093c7c0(iVar2), cVar3 == '\0')))) {
      local_20 = *(undefined4 *)(unaff_ESI + 0x20);
      cVar3 = FUN_00846990(*(undefined4 *)
                            (*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x1c) * 4),
                           *(undefined4 *)
                            (*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x24) * 4));
      if (cVar3 == '\0') {
        local_10 = 0x2d2d2d;
        local_c = 0;
        FUN_00847b60(&local_18,param_2,param_3,iVar2,*(undefined4 *)(unaff_ESI + 0xc));
        if (*param_1 < local_18) {
          *param_1 = local_18;
          local_14 = iVar2;
        }
      }
    }
  }
  uVar4 = 0;
  if (0 < *param_1) {
    if ((local_14 != 0) &&
       ((*(int *)(local_14 + 0x4c) - *(int *)(local_14 + 0x48) & 0xfffffffcU) != 0)) {
      uVar4 = **(undefined4 **)(local_14 + 0x48);
    }
    *(undefined4 *)(unaff_ESI + 0x28) = uVar4;
  }
  return param_1;
}

