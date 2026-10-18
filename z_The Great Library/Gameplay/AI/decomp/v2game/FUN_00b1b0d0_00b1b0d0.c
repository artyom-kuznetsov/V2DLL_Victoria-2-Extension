// FUN_00b1b0d0 @ 00b1b0d0 body=[[00b1b0d0, 00b1b17c]]


int FUN_00b1b0d0(byte *param_1,uint param_2)

{
  ushort uVar1;
  int *in_ECX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte local_5;
  int local_4;
  
  local_5 = *param_1;
  uVar2 = (uint)*(ushort *)(in_ECX + 8);
  iVar5 = 0;
  local_4 = 0;
  uVar3 = 1;
  do {
    iVar4 = *in_ECX;
    if ((local_5 & (byte)(1 << ((byte)iVar5 & 0x1f))) == 0) {
      uVar1 = *(ushort *)(iVar4 + 4 + uVar2 * 0x10);
    }
    else {
      uVar1 = *(ushort *)(iVar4 + 6 + uVar2 * 0x10);
    }
    uVar2 = (uint)uVar1;
    iVar4 = iVar4 + uVar2 * 0x10;
    if ((*(short *)(iVar4 + 4) == -1) && (*(short *)(iVar4 + 6) == -1)) {
      if (uVar2 == 0x100) {
        local_4 = local_4 + 4;
      }
      else {
        if (uVar2 == 0x101) {
          return local_4;
        }
        local_4 = local_4 + 1;
      }
      uVar2 = (uint)*(ushort *)(in_ECX + 8);
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 8) {
      local_5 = param_1[uVar3];
      uVar3 = uVar3 + 1;
      iVar5 = 0;
    }
  } while (uVar3 <= param_2);
  return -1;
}

