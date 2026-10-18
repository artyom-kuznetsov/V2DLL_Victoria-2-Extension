// FUN_009a19f0 @ 009a19f0 body=[[009a19f0, 009a1a1a] [009a1a20, 009a1ba8]]


void FUN_009a19f0(uint param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_22c [66];
  int local_124 [67];
  undefined1 local_18 [4];
  uint local_14;
  ushort local_10 [2];
  int local_c;
  uint local_8;
  
  uVar1 = param_1;
  local_14 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x228) == 3) {
    FUN_009a1440(param_1);
  }
  local_c = 0;
  do {
    iVar3 = *(int *)(uVar1 + 0x20);
    if (iVar3 == 0xb) {
      FID_conflict__sscanf((char *)(uVar1 + 0x22c),"%u",&local_14);
    }
    else if (iVar3 == 0x15) {
      iVar3 = FID_conflict__sscanf((char *)(uVar1 + 0x22c),"%u",&param_1);
      if (iVar3 == 0) {
        local_8 = 0;
      }
      else {
        local_8 = param_1 & 0xffff;
      }
    }
    else if (iVar3 == 0xd9) {
      iVar3 = FID_conflict__sscanf((char *)(uVar1 + 0x22c),"%u",local_10);
      if (iVar3 == 0) {
        local_8 = 0;
      }
      else {
        local_8 = (uint)local_10[0];
      }
    }
    else if (iVar3 == 0x16) {
      FID_conflict__sscanf((char *)(uVar1 + 0x22c),"%u",local_18);
    }
    else {
      cVar2 = FUN_009a1140();
      if (cVar2 != '\0') break;
    }
    piVar4 = *(int **)(uVar1 + 0x1c);
    if ((char)piVar4[0x44] == '\0') {
      iVar3 = (**(code **)(*piVar4 + 4))();
      piVar4[2] = iVar3;
      if (iVar3 == 0) {
        piVar4[3] = 0x13;
      }
      *(undefined1 *)(piVar4 + 0x44) = 1;
    }
    piVar4 = piVar4 + 3;
    piVar5 = local_124;
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    if (((local_124[0] == 4) || (local_124[0] == 0x13)) || (local_c == 2)) {
      piVar4 = *(int **)(uVar1 + 0x1c);
      if ((char)piVar4[0x44] == '\0') {
        iVar3 = (**(code **)(*piVar4 + 4))();
        piVar4[2] = iVar3;
        if (iVar3 == 0) {
          piVar4[3] = 0x13;
        }
        *(undefined1 *)(piVar4 + 0x44) = 1;
      }
      piVar4 = piVar4 + 3;
      piVar5 = local_22c;
      for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
      if ((local_22c[0] == 4) || (local_22c[0] == 0x13)) {
        (**(code **)(**(int **)(uVar1 + 0x1c) + 4))();
      }
    }
    else {
      FUN_009a1440(uVar1);
    }
    local_c = local_c + 1;
  } while (local_c < 2);
  *param_2 = local_8 & 0xffff;
  param_2[1] = local_14;
  return;
}

