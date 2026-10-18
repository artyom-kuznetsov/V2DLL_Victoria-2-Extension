// FUN_00a5fc80 @ 00a5fc80 body=[[00a5fc80, 00a5fd0c] [00a5fd10, 00a5fd50] [00a5fd54, 00a5fd66]]


undefined4 * FUN_00a5fc80(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  bool bVar7;
  char local_12c [256];
  uint local_2c [4];
  int local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  pbVar3 = DAT_00f0ff4c;
  if (DAT_00f0ff60 < 0x10) {
    pbVar3 = (byte *)&DAT_00f0ff4c;
  }
  pbVar6 = &DAT_00ded94d;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00a5fcd6:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00a5fcdb;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00a5fcd6;
    pbVar3 = pbVar3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00a5fcdb:
  if (iVar4 == 0) {
    ExceptionList = &local_10;
    local_1c = gethostname(local_12c,0xff);
    if (local_1c == 0) {
      local_2c[0] = local_2c[0] & 0xffffff00;
      pcVar5 = local_12c;
      local_18 = 0xf;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      FUN_00409350(local_12c,(int)pcVar5 - (int)(local_12c + 1));
      local_8 = 0;
      FUN_00408ed0(local_2c,0,0xffffffff);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
    }
  }
  ExceptionList = local_10;
  return &DAT_00f0ff4c;
}

