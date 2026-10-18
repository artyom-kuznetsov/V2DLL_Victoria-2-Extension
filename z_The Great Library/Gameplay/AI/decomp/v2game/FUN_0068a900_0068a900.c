// FUN_0068a900 @ 0068a900 body=[[0068a900, 0068aa0e]]


void FUN_0068a900(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_EAX;
  undefined8 uVar3;
  
  if ((in_EAX != 0) && (*(char *)(DAT_012588e8 + 0xd1d) == '\0')) {
    FUN_005c5090(*(undefined2 *)(param_1 + 0x22));
  }
  if (param_1[0xc] != 0) {
    if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
      uVar1 = param_1[0x18];
      if ((((char)uVar1 == 'R') && ((char)((uint)uVar1 >> 8) == 'E')) &&
         ((char)((uint)uVar1 >> 0x10) == 'B')) {
        iVar2 = param_1[0xc];
        uVar3 = __alldiv(*(uint *)(iVar2 + 0x120) << 0xf,
                         *(int *)(iVar2 + 0x124) << 0xf | *(uint *)(iVar2 + 0x120) >> 0x11,
                         *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x140),
                         *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x144));
        *(undefined8 *)(iVar2 + 0x120) = uVar3;
      }
    }
    FUN_004be200();
    param_1[0xc] = 0;
  }
  iVar2 = param_1[0x1d];
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x74) != 0) {
      (**(code **)(**(int **)(*(int *)(iVar2 + 0x74) + 0x10) + 0x34))(param_1);
      (**(code **)(**(int **)(*(int *)(param_1[0x1d] + 0x74) + 0x14) + 0x34))(param_1);
    }
    FUN_005cb230(param_1);
  }
  (**(code **)*param_1)(1);
  return;
}

