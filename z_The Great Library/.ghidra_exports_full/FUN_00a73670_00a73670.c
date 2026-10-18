// FUN_00a73670 @ 00a73670 body=[[00a73670, 00a736aa]]


void FUN_00a73670(void)

{
  SOCKET SVar1;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0x662;
  unaff_ESI[2] = 0;
  *unaff_ESI = &PTR_FUN_00e43524;
  unaff_ESI[4] = in_ECX;
  unaff_ESI[5] = 0;
  *(undefined1 *)(unaff_ESI + 6) = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = in_EDX;
  *(undefined1 *)(unaff_ESI + 0xb) = 0;
  SVar1 = socket(2,1,0);
  unaff_ESI[3] = SVar1;
  return;
}

