// FUN_0083de00 @ 0083de00 body=[[0083de00, 0083de60]]


void FUN_0083de00(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = FUN_009b7610();
  *(uint *)(unaff_ESI + 0x30) =
       (-(uint)((uint)*(byte *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x38) * 4
                                        ) + 0x31) + (iVar1 / 0xf) * -0xf + iVar1 != 0) & 0xfffffff6)
       + 0x14;
  return;
}

