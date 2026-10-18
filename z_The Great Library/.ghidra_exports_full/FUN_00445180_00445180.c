// FUN_00445180 @ 00445180 body=[[00445180, 004451e1]]


int FUN_00445180(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  int *piVar4;
  int local_c;
  int local_8;
  
  iVar3 = in_ECX[5];
  local_8 = 0;
  if (0 < iVar3) {
    piVar4 = (int *)(*in_ECX + 0xc);
    do {
      iVar1 = *piVar4;
      FUN_00445430(&param_1);
      if (local_c == *(int *)(iVar1 + 4)) {
        uVar2 = 0;
      }
      else {
        uVar2 = (uint)*(ushort *)(local_c + 0x10);
      }
      local_8 = local_8 + uVar2;
      piVar4 = piVar4 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return local_8;
  }
  return 0;
}

