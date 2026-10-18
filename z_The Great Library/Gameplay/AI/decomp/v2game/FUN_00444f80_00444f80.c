// FUN_00444f80 @ 00444f80 body=[[00444f80, 00444fe4]]


int FUN_00444f80(int param_1)

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
    param_1 = *(undefined4 *)(param_1 + 4);
    piVar4 = (int *)(*in_ECX + 0x14);
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

