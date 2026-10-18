// FUN_00967f50 @ 00967f50 body=[[00967f50, 00967f94]]


void FUN_00967f50(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  iVar2 = DAT_01258a98;
  if (0x1268 < (uint)unaff_ESI[1]) {
    iVar2 = DAT_01258a94;
  }
  if (iVar2 == 0) {
    *unaff_ESI = 0;
    return;
  }
  uVar1 = FUN_009c1d40(unaff_ESI[1],unaff_ESI[2]);
  *unaff_ESI = uVar1;
  return;
}

