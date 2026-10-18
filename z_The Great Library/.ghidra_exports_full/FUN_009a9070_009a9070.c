// FUN_009a9070 @ 009a9070 body=[[009a9070, 009a90fd] [009a9101, 009a9121] [009a9125, 009a912c]]


void FUN_009a9070(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_EDI;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_8;
  
  iVar2 = 0;
  *unaff_EDI = 0;
  unaff_EDI[1] = 0;
  unaff_EDI[2] = 0;
  unaff_EDI[3] = 0;
  FUN_00989510(&local_18,0x7c);
  if (0 < ((int)local_14 - (int)local_18) / 0x1c) {
    local_8 = 0;
    do {
      FUN_009a93e0(unaff_EDI);
      local_8 = local_8 + 0x1c;
      iVar2 = iVar2 + 1;
    } while (iVar2 < ((int)local_14 - (int)local_18) / 0x1c);
  }
  puVar1 = local_18;
  if (local_18 == (undefined4 *)0x0) {
    return;
  }
  while( true ) {
    if (puVar1 == local_14) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_18);
    }
    if (0xf < (uint)puVar1[5]) break;
    puVar1[5] = 0xf;
    puVar1[4] = 0;
    *(undefined1 *)puVar1 = 0;
    puVar1 = puVar1 + 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar1);
}

