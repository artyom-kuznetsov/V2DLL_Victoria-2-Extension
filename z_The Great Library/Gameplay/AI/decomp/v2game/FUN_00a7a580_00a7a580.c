// FUN_00a7a580 @ 00a7a580 body=[[00a7a580, 00a7a624]]


void FUN_00a7a580(undefined4 param_1,undefined1 param_2)

{
  undefined4 *unaff_ESI;
  
  FUN_00a5f0c0(unaff_ESI);
  *(undefined1 *)((int)unaff_ESI + 0xc9) = 0;
  unaff_ESI[0x22] = 0;
  unaff_ESI[0x23] = 0;
  unaff_ESI[0x24] = 0;
  unaff_ESI[0x1f] = 0;
  unaff_ESI[0x20] = 0;
  unaff_ESI[0x21] = 0;
  unaff_ESI[0x30] = 0;
  unaff_ESI[0x31] = 0;
  unaff_ESI[0x2b] = 0;
  unaff_ESI[0x2c] = 0;
  *unaff_ESI = &PTR_FUN_00e43930;
  unaff_ESI[6] = &PTR_LAB_00e43990;
  unaff_ESI[0xc] = &PTR_LAB_00e439a0;
  unaff_ESI[0x12] = &PTR_LAB_00e439b0;
  unaff_ESI[0x18] = &PTR_LAB_00e439c0;
  unaff_ESI[0x33] = param_1;
  *(undefined1 *)(unaff_ESI + 0x34) = param_2;
  unaff_ESI[0x2a] = 1;
  unaff_ESI[0x29] = 5;
  *(undefined2 *)(unaff_ESI + 0x25) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x96) = 0;
  return;
}

