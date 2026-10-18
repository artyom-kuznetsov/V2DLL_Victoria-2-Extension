// FUN_009f6860 @ 009f6860 body=[[009f6860, 009f6899] [009f689d, 009f68d8] [009f68dc, 009f6931] [009f6935, 009f69cd]]


/* WARNING: Removing unreachable block (ram,0x009f6929) */

void FUN_009f6860(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  undefined4 local_20;
  uint local_c;
  
  FUN_00409350(&DAT_00ded94d,0);
  iVar2 = FUN_009f74c0(*(undefined2 *)(in_ECX + 0x3a));
  if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_20);
  }
  if (((int)(uint)*(ushort *)(in_ECX + 0x38) < *(int *)(iVar2 + 0x10)) ||
     (uVar1 = *(ushort *)(in_ECX + 0x3a), uVar3 = FUN_009f77c0(), uVar1 != uVar3)) {
    iVar2 = FUN_009f74c0(*(undefined2 *)(in_ECX + 0x3a));
    iVar2 = *(int *)(iVar2 + 0x10);
    if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_20);
    }
    iVar4 = FUN_009f7340(in_ECX,*(undefined2 *)(in_ECX + 0x3a),*(undefined2 *)(in_ECX + 0x38));
    if (iVar2 == iVar4) {
      uVar1 = *(ushort *)(in_ECX + 0x3a);
      uVar3 = FUN_009f77c0();
      if (uVar1 == uVar3) {
        iVar2 = FUN_009f74c0(*(undefined2 *)(in_ECX + 0x3a));
        *(short *)(in_ECX + 0x38) = (short)*(undefined4 *)(iVar2 + 0x10);
        return;
      }
      *(short *)(in_ECX + 0x3a) = *(short *)(in_ECX + 0x3a) + 1;
      *(undefined2 *)(in_ECX + 0x38) = 0;
      return;
    }
    iVar2 = FUN_009f7340(in_ECX,*(undefined2 *)(in_ECX + 0x3a),*(undefined2 *)(in_ECX + 0x38));
    if (iVar2 != -1) {
      iVar2 = FUN_009f7340(in_ECX,*(undefined2 *)(in_ECX + 0x3a),*(undefined2 *)(in_ECX + 0x38));
      iVar4 = FUN_009f7c00(*(undefined2 *)(in_ECX + 0x3a),*(undefined2 *)(in_ECX + 0x38));
      if ((int)((iVar4 - (uint)*(ushort *)(in_ECX + 0x38)) + iVar2) <= *(int *)(in_ECX + 0x28)) {
        iVar2 = FUN_009f7c00(*(undefined2 *)(in_ECX + 0x3a),(uint)*(ushort *)(in_ECX + 0x38));
        iVar4 = FUN_009f7340(in_ECX,*(undefined2 *)(in_ECX + 0x3a),*(undefined2 *)(in_ECX + 0x38));
        FUN_009f5820((iVar4 - (uint)*(ushort *)(in_ECX + 0x38)) + iVar2);
        *(uint *)(in_ECX + 0x34) = (uint)*(ushort *)(in_ECX + 0x38);
      }
    }
  }
  return;
}

