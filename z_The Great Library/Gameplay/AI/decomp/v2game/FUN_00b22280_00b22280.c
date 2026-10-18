// FUN_00b22280 @ 00b22280 body=[[00b22280, 00b222e0]]


void FUN_00b22280(void *param_1,int param_2)

{
  int iVar1;
  int unaff_EBX;
  undefined4 *unaff_ESI;
  size_t _Size;
  
  _Size = param_2 * unaff_EBX;
  if (unaff_ESI[6] + _Size < (uint)unaff_ESI[5]) {
    FID_conflict__memcpy((void *)(unaff_ESI[4] + unaff_ESI[6]),param_1,_Size);
    unaff_ESI[6] = unaff_ESI[6] + _Size;
    return;
  }
  iVar1 = PHYSFS_flush();
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(unaff_ESI[3] + 0x3c))(*unaff_ESI,param_1,param_2);
  return;
}

