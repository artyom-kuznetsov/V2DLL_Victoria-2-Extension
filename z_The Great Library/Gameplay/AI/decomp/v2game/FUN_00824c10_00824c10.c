// FUN_00824c10 @ 00824c10 body=[[00824c10, 00824dcc] [00824dd0, 00824e7a]]


int FUN_00824c10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_10;
  
  iVar1 = *(int *)(param_2 + 0x5c);
  iVar3 = *(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200);
  iVar2 = iVar3 * 0x38e38e39;
  local_10 = 0;
  if (0 < iVar3 / 0x24) {
    piVar4 = (int *)(*(int *)(iVar1 + 200) + 4);
    do {
      iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar4 * 4);
      if ((*(int *)(iVar2 + 300) != 0) && (*(int *)(iVar2 + 0x158) != 0)) {
        iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
        if ((*(int *)(iVar2 + 300) != *(int *)(iVar3 + 0x20)) &&
           (((*(int *)(*(int *)(*(int *)(iVar3 + 0xbe8) + *(int *)(iVar2 + 300) * 4) + 0x34) != 0 ||
             (((*(char *)(iVar2 + 0x128) == 'R' && (*(char *)(iVar2 + 0x129) == 'E')) &&
              (*(char *)(iVar2 + 0x12a) == 'B')))) ||
            (((*(char *)(iVar3 + 0x1c) == 'R' && (*(char *)(iVar3 + 0x1d) == 'E')) &&
             (*(char *)(iVar3 + 0x1e) == 'B')))))) {
          iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
          if ((*(int *)(iVar2 + 0x134) != *(int *)(iVar3 + 0x20)) &&
             ((*(int *)(*(int *)(*(int *)(iVar3 + 0xbe8) + *(int *)(iVar2 + 0x134) * 4) + 0x34) != 0
              || ((((*(char *)(iVar2 + 0x130) == 'R' && (*(char *)(iVar2 + 0x131) == 'E')) &&
                   (*(char *)(iVar2 + 0x132) == 'B')) ||
                  (((*(char *)(iVar3 + 0x1c) == 'R' && (*(char *)(iVar3 + 0x1d) == 'E')) &&
                   (*(char *)(iVar3 + 0x1e) == 'B')))))))) {
            iVar2 = *(int *)(iVar2 + 0x5c);
            iVar3 = 0;
            if (0 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24) {
              do {
                iVar3 = iVar3 + 1;
              } while (iVar3 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24);
            }
          }
        }
      }
      iVar2 = (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24;
      local_10 = local_10 + 1;
      piVar4 = piVar4 + 9;
    } while (local_10 < iVar2);
  }
  return iVar2;
}

