// FUN_0080e4f0 @ 0080e4f0 body=[[0080e4f0, 0080e56b]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0080e4f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *unaff_ESI;
  int *unaff_EDI;
  float local_10 [3];
  
  FUN_007d9800(unaff_ESI,0);
  *unaff_ESI = CProvinceCollisionObject::vftable;
  unaff_ESI[0x4f] = param_1;
  unaff_ESI[0x50] = *unaff_EDI;
  unaff_ESI[0x51] = unaff_EDI[1];
  unaff_ESI[0x52] = param_2;
  *unaff_ESI = CProvinceWaterObject::vftable;
  local_10[0] = (float)*unaff_EDI;
  local_10[1] = 0.3;
  local_10[2] = (float)unaff_EDI[1];
  FUN_00a1e040(local_10);
  _DAT_012589e8 = _DAT_012589e8 + 1;
  return;
}

