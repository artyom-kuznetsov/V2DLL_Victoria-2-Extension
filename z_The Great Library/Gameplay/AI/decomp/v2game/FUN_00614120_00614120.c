// FUN_00614120 @ 00614120 body=[[00614120, 00614162]]


undefined4 FUN_00614120(void)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_EDI;
  
  iVar1 = unaff_EDI[1];
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(unaff_EDI + 3) != '\0') {
    *(undefined1 *)(iVar1 + 0x24) = 1;
    return 1;
  }
  iVar2 = *(int *)(iVar1 + 0x1c);
  unaff_EDI[1] = iVar2;
  if (iVar2 == 0) {
    *unaff_EDI = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x20) = 0;
  }
  if (iVar1 != 0) {
    FUN_0067a5c0();
  }
  unaff_EDI[2] = unaff_EDI[2] + -1;
  return 1;
}

