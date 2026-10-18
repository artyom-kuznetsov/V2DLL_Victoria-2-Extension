// FUN_0082da90 @ 0082da90 body=[[0082da90, 0082db3c] [0082db40, 0082dc40]]


undefined4 FUN_0082da90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  if (((0 < *(int *)(param_1 + 0xb4)) && (iVar1 = **(int **)(param_1 + 0xac), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x1b4) == 0)) {
    if (((*(int *)(iVar1 + 0x74) != 0) || (*(int *)(iVar1 + 0x70) != 0)) ||
       ((*(char *)(iVar1 + 0x104) != '\0' ||
        (iVar3 = FUN_005dc8b0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38)),
        0 < iVar3)))) {
      return 1;
    }
    iVar3 = *(int *)(*(int *)(iVar1 + 0xdc) + 0x5c);
    iVar4 = 0;
    if (0 < (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24) {
      local_8 = 0;
      do {
        if ((*(int *)(local_8 + *(int *)(iVar3 + 200)) != 4) &&
           (iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                            *(int *)(local_8 + 4 + *(int *)(iVar3 + 200)) * 4),
           *(char *)(*(int *)(iVar3 + 0x5c) + 0x2a) != '\0')) {
          if (*(int *)(iVar3 + 300) != 0) {
            iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
            if (*(int *)(iVar3 + 0x134) != *(int *)(iVar2 + 0x20)) {
              if (*(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + *(int *)(iVar3 + 0x134) * 4) + 0x34)
                  != 0) {
                return 1;
              }
              if (((*(char *)(iVar3 + 0x130) == 'R') && (*(char *)(iVar3 + 0x131) == 'E')) &&
                 (*(char *)(iVar3 + 0x132) == 'B')) {
                return 1;
              }
              if (((*(char *)(iVar2 + 0x1c) == 'R') && (*(char *)(iVar2 + 0x1d) == 'E')) &&
                 (*(char *)(iVar2 + 0x1e) == 'B')) {
                return 1;
              }
            }
          }
          iVar3 = FUN_005dc8b0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
          if (0 < iVar3) {
            return 1;
          }
        }
        iVar3 = *(int *)(*(int *)(iVar1 + 0xdc) + 0x5c);
        local_8 = local_8 + 0x24;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24);
    }
  }
  return 0;
}

