// FUN_00a89250 @ 00a89250 body=[[00a89250, 00a892d8]]


undefined4 FUN_00a89250(void)

{
  int iVar1;
  undefined4 *unaff_EDI;
  undefined4 local_10;
  undefined4 *local_c;
  
  local_10 = 0x1000;
  local_c = unaff_EDI + 0x1f2;
  iVar1 = FUN_00a8b360(*unaff_EDI,&local_10);
  while( true ) {
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    if (iVar1 == 0) {
      return 0;
    }
    unaff_EDI[0x5f2] = iVar1;
    iVar1 = FUN_00a88f20();
    if (iVar1 == -1) {
      return 0xffffffff;
    }
    if (iVar1 == 1) break;
    local_10 = 0x1000;
    local_c = unaff_EDI + 0x1f2;
    iVar1 = FUN_00a8b360(*unaff_EDI,&local_10);
  }
  return 1;
}

