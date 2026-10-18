// FUN_00b00ef0 @ 00b00ef0 body=[[00b00ef0, 00b0100f]]


void FUN_00b00ef0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  uint uVar5;
  
  iVar1 = (int)param_1;
  if ((((*(ushort *)(param_3 + 0x27) >> 0xe & 1) == 0) || (*(int *)((int)param_1 + 0x104) == 0)) ||
     ((*(byte *)(param_2 + 0x29) & 2) != 0)) {
    uVar2 = 0;
    if (*(uint *)(in_ECX + 0x48) != 0) {
      param_1 = *(int **)(in_ECX + 0x44);
      do {
        if (*(int *)(*param_1 + 100) == param_2[4]) {
          if (uVar2 != 0xffffffff) {
            *(short *)(*param_3 + *param_2 * 2) = (short)uVar2;
          }
          break;
        }
        param_1 = param_1 + 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(in_ECX + 0x48));
    }
    uVar2 = param_2[0x10];
    uVar5 = 0;
    if (uVar2 != 0) {
      do {
        FUN_00b00ef0(iVar1,*(undefined4 *)
                            (*(int *)(iVar1 + 0x80) + *(int *)(param_2[0xf] + uVar5 * 4) * 4),
                     param_3);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
  }
  else {
    iVar1 = *param_2;
    uVar2 = (uint)*(ushort *)(iVar1 * 2 + *(int *)((int)param_1 + 0x104));
    piVar4 = param_2;
    if (uVar2 != 0xffff) {
      piVar4 = *(int **)(*(int *)((int)param_1 + 0x80) + uVar2 * 4);
    }
    iVar3 = FUN_00b03830(piVar4[4]);
    if (iVar3 != -1) {
      *(short *)(iVar1 * 2 + *param_3) = (short)iVar3;
    }
    uVar2 = param_2[0x10];
    uVar5 = 0;
    if (uVar2 != 0) {
      do {
        FUN_00b00ef0(param_1,*(undefined4 *)
                              (*(int *)((int)param_1 + 0x80) +
                              *(int *)(param_2[0xf] + uVar5 * 4) * 4),param_3);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
      return;
    }
  }
  return;
}

