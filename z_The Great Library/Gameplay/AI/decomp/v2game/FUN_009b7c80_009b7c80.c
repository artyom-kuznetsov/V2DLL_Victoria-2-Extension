// FUN_009b7c80 @ 009b7c80 body=[[009b7c80, 009b7d29]]


undefined4 * FUN_009b7c80(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_009b7de0();
  iVar2 = 0;
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  puVar3 = DAT_00f20c18;
  puVar1 = (undefined4 *)FUN_009b7670();
  DAT_00f0f6b0 = 0;
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_00aae9af(4);
      if (puVar1 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
        DAT_00f20c18 = puVar3;
      }
      else {
        *puVar1 = &PTR_FUN_00e38b28;
        puVar3 = puVar1;
        DAT_00f20c18 = puVar1;
      }
    }
    if (iVar2 == DAT_00f20c14) break;
    if (DAT_00f0f6b0 == 0) {
      FUN_009b7700();
    }
    puVar1 = (undefined4 *)((DAT_00f0f6b0 + 1) / 0x270);
    DAT_00f0f6b0 = (DAT_00f0f6b0 + 1) % 0x270;
    iVar2 = iVar2 + 1;
  }
  return puVar1;
}

