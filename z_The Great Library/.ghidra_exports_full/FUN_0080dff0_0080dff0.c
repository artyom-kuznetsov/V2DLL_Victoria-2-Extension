// FUN_0080dff0 @ 0080dff0 body=[[0080dff0, 0080e070]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0080dff0(undefined4 param_1,undefined4 param_2)

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
  *unaff_ESI = CProvinceObject::vftable;
  unaff_ESI[0x54] = 0;
  local_10[0] = (float)*unaff_EDI;
  local_10[1] = 0.0;
  local_10[2] = (float)unaff_EDI[1];
  FUN_00a1e040(local_10);
  _DAT_012589e4 = _DAT_012589e4 + 1;
  return;
}

