// FUN_00b2f130 @ 00b2f130 body=[[00b2f130, 00b2f2e8]]


undefined4 FUN_00b2f130(uint *param_1)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  
  uVar1 = *param_1;
  if ((uVar1 == 0) || (4 < uVar1)) {
    return 0x80004001;
  }
  piVar2 = (int *)param_1[1];
  if (piVar2[2] != 0 || piVar2[3] != 0) {
    if (piVar2[2] != 0x30101) {
      return 0x80004001;
    }
    if (piVar2[3] != 0) {
      return 0x80004001;
    }
  }
  if (*piVar2 != 1) {
    return 0x80004001;
  }
  if (piVar2[1] != 1) {
    return 0x80004001;
  }
  if (uVar1 == 1) {
    if (param_1[4] != 1) {
      return 0x80004001;
    }
    if (*(int *)param_1[5] != 0) {
      return 0x80004001;
    }
    bVar3 = param_1[2] == 0;
  }
  else if (uVar1 == 2) {
    if (piVar2[8] != 0x3030103) {
      return 0x80004001;
    }
    if (piVar2[9] != 0) {
      return 0x80004001;
    }
    if (piVar2[6] != 1) {
      return 0x80004001;
    }
    if (piVar2[7] != 1) {
      return 0x80004001;
    }
    if (param_1[4] != 1) {
      return 0x80004001;
    }
    if (*(int *)param_1[5] != 0) {
      return 0x80004001;
    }
    if (param_1[2] != 1) {
      return 0x80004001;
    }
    if (*(int *)param_1[3] != 1) {
      return 0x80004001;
    }
    bVar3 = ((int *)param_1[3])[1] == 0;
  }
  else {
    if (uVar1 != 4) {
      return 0x80004001;
    }
    if (piVar2[8] != 0 || piVar2[9] != 0) {
      if (piVar2[8] != 0x30101) {
        return 0x80004001;
      }
      if (piVar2[9] != 0) {
        return 0x80004001;
      }
    }
    if (piVar2[6] != 1) {
      return 0x80004001;
    }
    if (piVar2[7] != 1) {
      return 0x80004001;
    }
    if (piVar2[0xe] != 0 || piVar2[0xf] != 0) {
      if (piVar2[0xe] != 0x30101) {
        return 0x80004001;
      }
      if (piVar2[0xf] != 0) {
        return 0x80004001;
      }
    }
    if (piVar2[0xc] != 1) {
      return 0x80004001;
    }
    if (piVar2[0xd] != 1) {
      return 0x80004001;
    }
    if (piVar2[0x14] != 0x303011b) {
      return 0x80004001;
    }
    if (piVar2[0x15] != 0) {
      return 0x80004001;
    }
    if (piVar2[0x12] != 4) {
      return 0x80004001;
    }
    if (piVar2[0x13] != 1) {
      return 0x80004001;
    }
    if (param_1[4] != 4) {
      return 0x80004001;
    }
    piVar2 = (int *)param_1[5];
    if (*piVar2 != 2) {
      return 0x80004001;
    }
    if (piVar2[1] != 6) {
      return 0x80004001;
    }
    if (piVar2[2] != 1) {
      return 0x80004001;
    }
    if (piVar2[3] != 0) {
      return 0x80004001;
    }
    if (param_1[2] != 3) {
      return 0x80004001;
    }
    piVar2 = (int *)param_1[3];
    if (*piVar2 != 5) {
      return 0x80004001;
    }
    if (piVar2[1] != 0) {
      return 0x80004001;
    }
    if (piVar2[2] != 4) {
      return 0x80004001;
    }
    if (piVar2[3] != 1) {
      return 0x80004001;
    }
    if (piVar2[4] != 3) {
      return 0x80004001;
    }
    bVar3 = piVar2[5] == 2;
  }
  if (!bVar3) {
    return 0x80004001;
  }
  return 0;
}

