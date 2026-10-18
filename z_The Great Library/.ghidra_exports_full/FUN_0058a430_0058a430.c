// FUN_0058a430 @ 0058a430 body=[[0058a430, 0058a4d4] [0058a4d8, 0058a4e7]]


void FUN_0058a430(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *unaff_ESI;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b512f8;
  local_10 = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  ExceptionList = &local_10;
  FUN_009a19f0(in_ECX,&local_18);
  uVar3 = local_14;
  uVar2 = local_18;
  iVar1 = *(int *)(in_ECX + 0x35c);
  if (((iVar1 == 0) || (*(char *)(iVar1 + 4) == '\0')) || (*(char *)(iVar1 + 5) == '\0')) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00408ed0(in_ECX + 0x32c,0,0xffffffff);
    local_8 = 0;
    *unaff_ESI = 0;
    unaff_ESI[1] = uVar2;
    unaff_ESI[2] = uVar3;
    FUN_00408ed0(local_34,0,0xffffffff);
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

