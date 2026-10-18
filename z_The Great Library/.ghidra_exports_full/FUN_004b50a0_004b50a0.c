// FUN_004b50a0 @ 004b50a0 body=[[004b50a0, 004b52d7]]


void FUN_004b50a0(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int unaff_ESI;
  undefined4 local_10;
  int local_c;
  
  iVar1 = *(int *)(unaff_ESI + 0x134);
  iVar2 = *(int *)(DAT_012587e4 + 4);
  iVar4 = *(int *)(param_1 + 4);
  uVar5 = *(undefined4 *)param_1;
  while ((local_10 = uVar5, local_c = iVar4, iVar3 = *(int *)(iVar2 + local_c * 4),
         *(char *)(iVar3 + 0xcf5) != '\0' || (*(char *)(iVar3 + 0xcf4) != '\0'))) {
    iVar4 = *(int *)(iVar3 + 0xcfc);
    uVar5 = *(undefined4 *)(iVar3 + 0xcf8);
    iVar3 = *(int *)(iVar2 + *(int *)(iVar3 + 0xcfc) * 4);
    if ((*(int *)(unaff_ESI + 0x134) == *(int *)(iVar3 + 0x20)) ||
       (((*(int *)(*(int *)(*(int *)(iVar3 + 0xbe8) + *(int *)(unaff_ESI + 0x134) * 4) + 0x34) == 0
         && (((*(char *)(unaff_ESI + 0x130) != 'R' || (*(char *)(unaff_ESI + 0x131) != 'E')) ||
             (*(char *)(unaff_ESI + 0x132) != 'B')))) &&
        (((*(char *)(iVar3 + 0x1c) != 'R' || (*(char *)(iVar3 + 0x1d) != 'E')) ||
         (*(char *)(iVar3 + 0x1e) != 'B')))))) break;
  }
  iVar4 = *(int *)(iVar2 + *(int *)(unaff_ESI + 0x134) * 4);
  iVar3 = *(int *)(param_1 + 4);
  if ((iVar3 == *(int *)(iVar4 + 0x20)) ||
     ((*(int *)(*(int *)(*(int *)(iVar4 + 0xbe8) + iVar3 * 4) + 0x34) == 0 &&
      ((((*param_1 != 'R' || (param_1[1] != 'E')) || (param_1[2] != 'B')) &&
       (((*(char *)(iVar4 + 0x1c) != 'R' || (*(char *)(iVar4 + 0x1d) != 'E')) ||
        (*(char *)(iVar4 + 0x1e) != 'B')))))))) {
    local_10 = *(undefined4 *)(unaff_ESI + 0x130);
    local_c = *(int *)(unaff_ESI + 0x134);
  }
  else {
    iVar2 = *(int *)(iVar2 + *(int *)(unaff_ESI + 300) * 4);
    if ((iVar3 == *(int *)(iVar2 + 0x20)) ||
       ((*(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + iVar3 * 4) + 0x34) == 0 &&
        ((((*param_1 != 'R' || (param_1[1] != 'E')) || (param_1[2] != 'B')) &&
         (((*(char *)(iVar2 + 0x1c) != 'R' || (*(char *)(iVar2 + 0x1d) != 'E')) ||
          (*(char *)(iVar2 + 0x1e) != 'B')))))))) {
      local_10 = *(undefined4 *)(unaff_ESI + 0x128);
      local_c = *(int *)(unaff_ESI + 300);
    }
  }
  if (local_c != *(int *)(unaff_ESI + 0x134)) {
    FUN_004b5730(unaff_ESI,&local_10,DAT_012588e8 + 0xb0c,1);
  }
  if (*(int *)(unaff_ESI + 0x134) != iVar1) {
    piVar6 = *(int **)(unaff_ESI + 0xd8);
    while (piVar6 != (int *)0x0) {
      puVar7 = (undefined4 *)*piVar6;
      piVar6 = (int *)piVar6[2];
      if (puVar7 != (undefined4 *)0x0) {
        (**(code **)*puVar7)(1);
      }
    }
    FUN_009a63f0();
    if ((iVar1 == *(int *)(DAT_012588e8 + 0xb60)) ||
       (*(int *)(unaff_ESI + 0x134) == *(int *)(DAT_012588e8 + 0xb60))) {
      FUN_00679970();
    }
    FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4));
    FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x134) * 4));
    FUN_004b2610();
  }
  return;
}

