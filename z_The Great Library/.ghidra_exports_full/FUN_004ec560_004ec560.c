// FUN_004ec560 @ 004ec560 body=[[004ec560, 004ec652]]


void FUN_004ec560(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_50 [8];
  undefined4 local_48;
  int local_44;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((((*(char *)(param_1 + 0x1c) != 'R') || (*(char *)(param_1 + 0x1d) != 'E')) ||
      (*(char *)(param_1 + 0x1e) != 'B')) &&
     (0 < (int)(*(int *)(param_1 + 0x9dc) - *(int *)(param_1 + 0x9d8) & 0xfffffffcU))) {
    uVar3 = FUN_009b7950(0x793,0);
    FUN_008a8650(uVar3);
    local_48 = *(undefined4 *)(param_1 + 0x1c);
    local_44 = *(int *)(param_1 + 0x20);
    piVar4 = *(int **)(*(int *)(DAT_012588e8 + 0xb98) + local_44 * 0x10);
    if (piVar4 != (int *)0x0) {
      do {
        iVar1 = *piVar4;
        piVar4 = (int *)piVar4[2];
        if (*(int *)(iVar1 + 0x9c) != 0) {
          local_18 = *(undefined4 *)(iVar1 + 8);
          local_14 = *(undefined4 *)(iVar1 + 0xc);
          cVar2 = (**(code **)(*(int *)(*(int *)(iVar1 + 0x30) + 0xbc) + 0x18))(local_50);
          if ((cVar2 != '\0') &&
             (cVar2 = FUN_004e7950(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20)),
             cVar2 != '\0')) {
            FUN_00516630(param_1,iVar1);
            FUN_00515490(param_1);
            FUN_00534b80(param_1);
            return;
          }
        }
        if (piVar4 == (int *)0x0) {
          return;
        }
      } while( true );
    }
  }
  return;
}

