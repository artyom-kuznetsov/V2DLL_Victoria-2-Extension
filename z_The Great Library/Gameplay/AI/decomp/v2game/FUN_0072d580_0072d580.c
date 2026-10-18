// FUN_0072d580 @ 0072d580 body=[[0072d580, 0072d63a] [0072d63e, 0072d64e]]


void FUN_0072d580(void)

{
  int iVar1;
  int in_ECX;
  undefined4 *unaff_ESI;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b43788;
  local_14 = ExceptionList;
  local_48 = 0;
  local_44 = 0;
  ExceptionList = &local_14;
  FUN_009a19f0(in_ECX,&local_48);
  iVar1 = *(int *)(in_ECX + 0x35c);
  if (((iVar1 == 0) || (*(char *)(iVar1 + 4) == '\0')) || (*(char *)(iVar1 + 5) == '\0')) {
    local_3c = local_48;
    local_40 = 0;
    local_38 = local_44;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00408ed0(in_ECX + 0x32c,0,0xffffffff);
    local_c = 0;
    *unaff_ESI = local_40;
    unaff_ESI[1] = local_3c;
    unaff_ESI[2] = local_38;
    FUN_00408ed0(local_34,0,0xffffffff);
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  ExceptionList = local_14;
  return;
}

