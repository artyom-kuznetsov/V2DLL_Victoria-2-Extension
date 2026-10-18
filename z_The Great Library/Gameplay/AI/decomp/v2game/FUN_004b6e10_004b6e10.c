// FUN_004b6e10 @ 004b6e10 body=[[004b6e10, 004b6f1f]]


uint FUN_004b6e10(uint param_1)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  int iVar3;
  int *piVar4;
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 300) != 0) {
    iVar1 = *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200);
    in_EAX = iVar3 * 0x38e38e39;
    iVar3 = iVar3 / 0x24;
    param_1 = 0;
    if (0 < iVar3) {
      piVar4 = *(int **)(iVar1 + 200);
      do {
        if ((((*piVar4 != 4) &&
             (iVar1 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + piVar4[1] * 4),
             *(char *)(*(int *)(iVar1 + 0x5c) + 0x2a) != '\0')) && (*(int *)(iVar1 + 300) != 0)) &&
           (*(int *)(iVar1 + 0x134) != *(int *)(iVar2 + 0x134))) {
          iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 0x134) * 4);
          if ((*(int *)(iVar2 + 0x134) != *(int *)(iVar1 + 0x20)) &&
             (((*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + *(int *)(iVar2 + 0x134) * 4) + 0x34) !=
                0 || (((*(char *)(iVar2 + 0x130) == 'R' && (*(char *)(iVar2 + 0x131) == 'E')) &&
                      (*(char *)(iVar2 + 0x132) == 'B')))) ||
              (((*(char *)(iVar1 + 0x1c) == 'R' && (*(char *)(iVar1 + 0x1d) == 'E')) &&
               (*(char *)(iVar1 + 0x1e) == 'B')))))) {
            return CONCAT31((int3)((uint)iVar1 >> 8),1);
          }
        }
        in_EAX = param_1 + 1;
        piVar4 = piVar4 + 9;
        param_1 = in_EAX;
      } while ((int)in_EAX < iVar3);
    }
  }
  return in_EAX & 0xffffff00;
}

