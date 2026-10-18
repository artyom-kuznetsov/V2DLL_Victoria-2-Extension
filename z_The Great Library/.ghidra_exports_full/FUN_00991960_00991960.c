// FUN_00991960 @ 00991960 body=[[00991960, 00991a52] [00991a56, 00991a7c] [00991a80, 00991a9b] [00991a9f, 00991ac1] [00991ac5, 00991ad2]]


void FUN_00991960(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 ***pppuVar5;
  char *in_EDX;
  int iVar6;
  undefined4 local_88;
  uint local_74;
  undefined4 **local_6c [5];
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4f843;
  local_10 = ExceptionList;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  local_8 = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00408ed0(local_50,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_14[0] = 0x2f;
  iVar6 = 0;
  do {
    iVar3 = FUN_005484e0(local_34,local_14,1);
    if (iVar3 == -1) {
      local_18[0] = 0x5c;
      iVar3 = FUN_005484e0(local_34,local_18,1);
    }
    if (-1 < iVar3) {
      FUN_009895f0(iVar6 + iVar3);
      local_8._0_1_ = 2;
      uVar4 = FUN_009895f0(local_24);
      local_8._0_1_ = 3;
      FUN_00408ed0(uVar4,0,0xffffffff);
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_88);
      }
      pppuVar5 = (undefined4 ***)local_6c[0];
      if (local_58 < 0x10) {
        pppuVar5 = local_6c;
      }
      PHYSFS_mkdir(pppuVar5);
      iVar6 = iVar6 + iVar3 + 1;
      local_8 = CONCAT31(local_8._1_3_,1);
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c[0]);
      }
    }
  } while (iVar3 != -1);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  ExceptionList = local_10;
  return;
}

