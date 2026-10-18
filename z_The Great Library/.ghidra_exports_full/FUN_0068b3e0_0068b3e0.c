// FUN_0068b3e0 @ 0068b3e0 body=[[0068b3e0, 0068b469]]


void FUN_0068b3e0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  puVar1 = DAT_00f20c18;
  **(undefined4 **)(unaff_ESI + 0xb74) = DAT_00f20c14;
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(*(int *)(unaff_ESI + 0xb74) + 4) = DAT_00f20c1c;
    return;
  }
  DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
  uVar2 = DAT_00f20c1c;
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)0x0;
    *(undefined4 *)(*(int *)(unaff_ESI + 0xb74) + 4) = DAT_00f20c1c;
    return;
  }
  *DAT_00f20c18 = &PTR_FUN_00e38b28;
  *(undefined4 *)(*(int *)(unaff_ESI + 0xb74) + 4) = uVar2;
  return;
}

