// FUN_00565a70 @ 00565a70 body=[[00565a70, 00565b25] [00565b29, 00565b68]]


void FUN_00565a70(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5dff4;
  local_10 = ExceptionList;
  bVar5 = false;
  local_18 = (int *)0x0;
  ExceptionList = &local_10;
  iVar3 = FUN_00aae9af(0x114);
  iVar2 = DAT_01258808;
  local_8 = 0;
  local_1c = iVar3;
  if (iVar3 == 0) {
    local_18 = (int *)0x0;
  }
  else {
    DAT_01258808 = DAT_01258808 + 1;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    pcVar4 = (char *)(param_1 + 0x24);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(param_1 + 0x24),(int)pcVar4 - (param_1 + 0x25));
    local_8 = CONCAT31(local_8._1_3_,1);
    bVar5 = true;
    local_18 = (int *)0x1;
    local_18 = (int *)FUN_00562cd0(iVar3,local_38,iVar2,local_14);
  }
  local_8 = 0xffffffff;
  if (bVar5) {
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
  }
  (**(code **)(*local_18 + 0xc))(param_1);
  FUN_0068f390();
  ExceptionList = local_10;
  return;
}

