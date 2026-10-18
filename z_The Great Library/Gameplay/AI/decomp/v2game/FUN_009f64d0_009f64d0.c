// FUN_009f64d0 @ 009f64d0 body=[[009f64d0, 009f64f8] [009f64fc, 009f654d]]


void FUN_009f64d0(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  undefined4 local_20;
  uint local_c;
  
  iVar2 = FUN_009f74c0(*(undefined2 *)(in_ECX + 0x3a));
  if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_20);
  }
  if ((*(uint *)(iVar2 + 0x10) == (uint)*(ushort *)(in_ECX + 0x38)) &&
     (uVar1 = *(ushort *)(in_ECX + 0x3a), uVar3 = FUN_009f77c0(), uVar1 == uVar3)) {
    return;
  }
  iVar2 = FUN_009f7c00(*(undefined2 *)(in_ECX + 0x3a),*(undefined2 *)(in_ECX + 0x38));
  FUN_009f5820(iVar2 + 1);
  *(uint *)(in_ECX + 0x34) = (uint)*(ushort *)(in_ECX + 0x38);
  *(undefined1 *)(in_ECX + 0x4d) = 0;
  *(undefined1 *)(in_ECX + 0x6c) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  return;
}

