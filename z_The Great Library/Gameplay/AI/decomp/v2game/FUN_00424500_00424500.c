// FUN_00424500 @ 00424500 body=[[00424500, 0042452c] [00424530, 0042458c] [00424590, 004245af]]


undefined4 FUN_00424500(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int unaff_ESI;
  bool bVar6;
  undefined4 local_2c [5];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  pbVar2 = (byte *)(unaff_ESI + 0x14);
  if (0xf < *(uint *)(unaff_ESI + 0x28)) {
    pbVar2 = *(byte **)pbVar2;
  }
  pcVar5 = "ButtonMenuButton";
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00424550:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00424555;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00424550;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00424555:
  if (iVar3 != 0) {
    return 0;
  }
  ExceptionList = &local_10;
  FUN_009c2d80();
  uVar4 = FUN_009c2be0(local_2c,unaff_ESI);
  local_8 = 0;
  FUN_00408ed0(uVar4,0,0xffffffff);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return 1;
}

