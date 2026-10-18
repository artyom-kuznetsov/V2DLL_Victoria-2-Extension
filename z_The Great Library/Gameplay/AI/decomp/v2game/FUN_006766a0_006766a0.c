// FUN_006766a0 @ 006766a0 body=[[006766a0, 00676733] [00676737, 0067678c]]


void FUN_006766a0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 in_ECX;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4a0d4;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x84);
  local_8 = 0;
  local_18 = iVar1;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("RESIGN",6);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_14 = 1;
    piVar2 = (int *)FUN_00676240(iVar1,in_ECX,local_34);
  }
  local_8 = 0xffffffff;
  if (iVar1 != 0) {
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
  }
  FUN_00641630();
  FUN_006416a0();
  FUN_006480e0(piVar2);
  (**(code **)(*piVar2 + 0x28))();
  ExceptionList = local_10;
  return;
}

