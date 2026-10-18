// FUN_00a4c820 @ 00a4c820 body=[[00a4c820, 00a4c887] [00a4c88b, 00a4c8a5] [00a4c8a9, 00a4c8bc] [00a4c8c0, 00a4c8e9] [00a4c8ed, 00a4c916] [00a4c91a, 00a4c943] [00a4c947, 00a4c96a] [00a4c96e, 00a4c988] [00a4c98c, 00a4c99f]]


void FUN_00a4c820(void)

{
  int iVar1;
  undefined4 *in_ECX;
  undefined **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  uint local_24;
  undefined4 local_14;
  uint local_10;
  
  local_3c = 0;
  *in_ECX = &PTR_FUN_00e414a8;
  local_40 = &PTR_FUN_00e41014;
  local_38 = 0;
  local_34 = 0;
  local_28 = 0;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = local_24 & 0xffffff00;
  D3DXFrameDestroy(in_ECX[0x2a],&local_40);
  iVar1 = in_ECX[0x4a];
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1 - (uint)*(byte *)(iVar1 + -1));
  }
  in_ECX[0x4a] = 0;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_24);
  }
  if (0xf < (uint)in_ECX[0x43]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x3e]);
  }
  in_ECX[0x43] = 0xf;
  in_ECX[0x42] = 0;
  *(undefined1 *)(in_ECX + 0x3e) = 0;
  if (0xf < (uint)in_ECX[0x3c]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x37]);
  }
  in_ECX[0x3c] = 0xf;
  in_ECX[0x3b] = 0;
  *(undefined1 *)(in_ECX + 0x37) = 0;
  if (0xf < (uint)in_ECX[0x35]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x30]);
  }
  in_ECX[0x35] = 0xf;
  in_ECX[0x34] = 0;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  if (0xf < (uint)in_ECX[0x28]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x23]);
  }
  in_ECX[0x28] = 0xf;
  in_ECX[0x27] = 0;
  *(undefined1 *)(in_ECX + 0x23) = 0;
  if (0xf < (uint)in_ECX[0xf]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[10]);
  }
  in_ECX[0xf] = 0xf;
  in_ECX[0xe] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[6] = 0;
  in_ECX[7] = 0xf;
  *(undefined1 *)(in_ECX + 2) = 0;
  return;
}

