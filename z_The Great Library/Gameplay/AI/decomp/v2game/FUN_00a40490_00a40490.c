// FUN_00a40490 @ 00a40490 body=[[00a40490, 00a40537]]


void * FUN_00a40490(void *param_1)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  uint *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e412;
  local_10 = ExceptionList;
  pvVar1 = (void *)unaff_EDI[1];
  pvVar3 = ExceptionList;
  if ((param_1 < pvVar1) && (pvVar3 = (void *)*unaff_EDI, pvVar3 <= param_1)) {
    ExceptionList = &local_10;
    if (pvVar1 == (void *)unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_00a405c0();
    }
    uVar2 = unaff_EDI[1];
    pvVar3 = (void *)((((int)param_1 - (int)pvVar3) / 0x74) * 0x74 + *unaff_EDI);
    local_8 = 0;
  }
  else {
    ExceptionList = &local_10;
    if (pvVar1 == (void *)unaff_EDI[2]) {
      ExceptionList = &local_10;
      pvVar3 = (void *)FUN_00a405c0();
    }
    uVar2 = unaff_EDI[1];
    local_8 = 1;
  }
  if (uVar2 != 0) {
    pvVar3 = (void *)FUN_00a40e20();
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x74;
  ExceptionList = local_10;
  return pvVar3;
}

