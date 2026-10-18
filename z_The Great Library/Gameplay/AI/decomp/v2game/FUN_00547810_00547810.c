// FUN_00547810 @ 00547810 body=[[00547810, 0054788a]]


void FUN_00547810(int *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = param_1 + 4;
  if (param_1[0x19] != 0) {
    cVar2 = FUN_00548cc0();
    if (cVar2 == '\0') {
      piVar5 = (int *)0x0;
    }
    iVar3 = __fclose_nolock((FILE *)param_1[0x19]);
    if (iVar3 == 0) goto LAB_00547842;
  }
  piVar5 = (int *)0x0;
LAB_00547842:
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  FUN_00549030();
  param_1[0x19] = 0;
  param_1[0x17] = DAT_013f0824;
  param_1[0x15] = 0;
  if (piVar5 == (int *)0x0) {
    uVar1 = *(uint *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1);
    uVar4 = uVar1 | 2;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      uVar4 = uVar1 | 6;
    }
    FUN_00401120(uVar4,0);
  }
  return;
}

