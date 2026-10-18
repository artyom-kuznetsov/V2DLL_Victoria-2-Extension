// FUN_00806ee0 @ 00806ee0 body=[[00806ee0, 00806fe5]]


uint FUN_00806ee0(int *param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  int *piVar5;
  float10 fVar6;
  uint local_10;
  float local_8;
  
  iVar3 = *(int *)(in_EAX + 0xc) - *(int *)(in_EAX + 8);
  iVar2 = iVar3 >> 0x1f;
  iVar3 = iVar3 / 0x48 + iVar2;
  uVar4 = 0;
  local_10 = 0xffffffff;
  local_8 = 1e+17;
  if (iVar3 != iVar2) {
    iVar1 = *param_1;
    piVar5 = *(int **)(in_EAX + 8);
    do {
      if (((*piVar5 != iVar1) || (piVar5[1] != param_1[1])) || (piVar5[2] != param_1[2])) {
        fVar6 = (float10)FUN_00401030(((float)param_1[0xe] - (float)piVar5[0x10]) *
                                      ((float)param_1[0xe] - (float)piVar5[0x10]) +
                                      ((float)param_1[0xd] - (float)piVar5[0xf]) *
                                      ((float)param_1[0xd] - (float)piVar5[0xf]));
        if ((float)fVar6 < local_8) {
          local_10 = uVar4;
          local_8 = (float)fVar6;
        }
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 0x12;
    } while (uVar4 < (uint)(iVar3 - iVar2));
    if (local_8 < DAT_00f17b54) {
      return local_10;
    }
  }
  return 0xffffffff;
}

