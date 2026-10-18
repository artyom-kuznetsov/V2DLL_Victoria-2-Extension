// FUN_00ae3510 @ 00ae3510 body=[[00ae3510, 00ae360e]]


void FUN_00ae3510(int param_1,char param_2)

{
  void *_Dst;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  uint uVar6;
  uint local_c;
  
  puVar1 = *(undefined4 **)(*in_ECX + param_1 * 4);
  uVar2 = *(uint *)(*(int *)(DAT_00f209e0 + 0x30) + 4);
  local_c = 0;
  if (uVar2 != 0) {
    do {
      iVar5 = *(int *)(**(int **)(DAT_00f209e0 + 0x30) + local_c * 4);
      iVar3 = *(int *)(iVar5 + 0x1b8);
      if (*(int *)(iVar3 + 8) != 0) {
        uVar6 = 0;
        do {
          iVar4 = *(int *)(*(int *)(iVar3 + 4) + uVar6 * 4);
          if (*(undefined4 **)(iVar4 + 0x8c) == puVar1) {
            FUN_00b08200(0);
            (**(code **)(**(int **)(iVar5 + 0x1b8) + 0x24))(iVar4);
          }
          else {
            uVar6 = uVar6 + 1;
          }
        } while (uVar6 < *(uint *)(iVar3 + 8));
      }
      local_c = local_c + 1;
    } while (local_c < uVar2);
  }
  if (param_2 == '\x01') {
    FUN_00b07320(0);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    uVar2 = in_ECX[1];
  }
  else {
    uVar2 = in_ECX[1];
  }
  if ((1 < uVar2) && (iVar5 = (uVar2 - param_1) + -1, iVar5 != 0)) {
    _Dst = (void *)(*in_ECX + param_1 * 4);
    FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),iVar5 * 4);
  }
  in_ECX[1] = in_ECX[1] + -1;
  return;
}

