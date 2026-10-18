// FUN_00534ab0 @ 00534ab0 body=[[00534ab0, 00534b76]]


undefined4 FUN_00534ab0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x67c) != '\0') {
    piVar4 = *(int **)(DAT_012588e8 + 0xb3c);
    do {
      do {
        do {
          if (piVar4 == (int *)0x0) {
            return 0;
          }
          iVar1 = *piVar4;
          piVar4 = (int *)piVar4[2];
        } while (((int)(*(int *)(iVar1 + 0x30) - *(int *)(iVar1 + 0x2c) & 0xfffffff8U) < 8) ||
                ((int)(*(int *)(iVar1 + 0x40) - *(int *)(iVar1 + 0x3c) & 0xfffffff8U) < 8));
        iVar2 = *(int *)(iVar1 + 0x30);
        iVar5 = *(int *)(iVar1 + 0x2c);
      } while (iVar5 == iVar2);
      do {
        if (*(int *)(iVar5 + 4) == *(int *)(param_1 + 0x20)) break;
        iVar5 = iVar5 + 8;
      } while (iVar5 != iVar2);
    } while ((iVar5 == iVar2) || (*(int *)(*(int *)(iVar1 + 0x3c) + 4) != param_4));
    param_1 = *(undefined4 *)(param_1 + 0x20);
    piVar4 = (int *)FUN_0093d080(&param_1);
    iVar1 = *(int *)(*piVar4 + 0x10);
    cVar3 = FUN_0043a860();
    if (cVar3 != '\0') {
      do {
      } while (*(int *)(iVar1 + 0xc) != param_2);
      return 1;
    }
  }
  return 0;
}

