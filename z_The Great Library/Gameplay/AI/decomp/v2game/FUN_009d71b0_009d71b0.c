// FUN_009d71b0 @ 009d71b0 body=[[009d71b0, 009d7229]]


void FUN_009d71b0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_ESI;
  undefined1 *unaff_EDI;
  
  uVar3 = FUN_00aad56b(((uint)((ulonglong)((unaff_ESI[1] - *unaff_ESI) + 2) * 0xaaaaaaab >> 0x20) &
                       0xfffffffe) * 2);
  FUN_00a6f220(*unaff_ESI);
  iVar1 = unaff_ESI[1];
  iVar2 = *unaff_ESI;
  *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *unaff_EDI = 0;
  FUN_00409350(uVar3,((uint)((ulonglong)((iVar1 - iVar2) + 2) * 0xaaaaaaab >> 0x20) & 0xfffffffe) *
                     2);
  FUN_00aaea59(uVar3);
  return;
}

