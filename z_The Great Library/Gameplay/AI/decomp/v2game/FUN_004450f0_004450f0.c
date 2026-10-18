// FUN_004450f0 @ 004450f0 body=[[004450f0, 00445170]]


int FUN_004450f0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int iVar4;
  int *piVar5;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined1 local_c [4];
  int local_8;
  
  local_8 = in_ECX[5];
  iVar4 = 0;
  if (0 < local_8) {
    piVar5 = (int *)*in_ECX;
    iVar4 = 0;
    do {
      iVar1 = *piVar5;
      FUN_0093d080(local_c);
      iVar2 = local_10;
      if (local_10 == *(int *)(iVar1 + 4)) {
        uVar3 = 0;
      }
      else {
        local_14 = param_1;
        FUN_00445430(&local_14);
        if (local_18 == *(int *)(iVar2 + 0x14)) {
          uVar3 = 0;
        }
        else {
          uVar3 = (uint)*(ushort *)(local_18 + 0x10);
        }
      }
      iVar4 = iVar4 + uVar3;
      piVar5 = piVar5 + 7;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return iVar4;
}

