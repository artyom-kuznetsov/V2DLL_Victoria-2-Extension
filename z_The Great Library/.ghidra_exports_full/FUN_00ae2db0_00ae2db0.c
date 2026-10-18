// FUN_00ae2db0 @ 00ae2db0 body=[[00ae2db0, 00ae2e00]]


void FUN_00ae2db0(ushort param_1)

{
  ushort uVar1;
  int in_ECX;
  
  uVar1 = (*(short *)(in_ECX + 0x10) - param_1) - 1;
  if (uVar1 != 0) {
    FID_conflict__memcpy
              ((void *)(*(int *)(in_ECX + 0xc) + (uint)param_1 * 2),
               (void *)(*(int *)(in_ECX + 0xc) + (uint)(ushort)(param_1 + 1) * 2),(uint)uVar1 * 2);
    *(short *)(in_ECX + 0x10) = *(short *)(in_ECX + 0x10) + -1;
    return;
  }
  *(short *)(in_ECX + 0x10) = *(short *)(in_ECX + 0x10) + -1;
  return;
}

