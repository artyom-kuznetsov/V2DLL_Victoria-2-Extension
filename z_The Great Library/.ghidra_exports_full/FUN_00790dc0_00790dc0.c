// FUN_00790dc0 @ 00790dc0 body=[[00790dc0, 00790e42] [00790e46, 00790e8e]]


void FUN_00790dc0(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  undefined4 local_44;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  uVar1 = DAT_01268ff0;
  puStack_10 = &LAB_00b43a20;
  local_14 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_c = 2;
  ExceptionList = &local_14;
  unaff_ESI[1] = DAT_01268fec;
  unaff_ESI[2] = uVar1;
  *unaff_ESI = 0;
  FUN_00408ed0(local_34,0,0xffffffff);
  local_c = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (unaff_ESI[10] != unaff_ESI[0xb]) {
    uVar1 = FUN_0079f110(unaff_ESI[0xb],local_44);
    FUN_0079ef90(local_44);
    unaff_ESI[0xb] = uVar1;
  }
  ExceptionList = local_14;
  return;
}

