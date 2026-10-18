// FUN_00a20b80 @ 00a20b80 body=[[00a20b80, 00a20c9e] [00a20cb4, 00a20cd2]]


void FUN_00a20b80(undefined4 param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  byte ****ppppbVar4;
  int iVar5;
  int in_ECX;
  char *pcVar6;
  bool bVar7;
  byte ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (param_2 == 0x1a) {
    ExceptionList = &local_10;
    FUN_009a1750(in_ECX + 8,0);
    ExceptionList = local_10;
    return;
  }
  if (param_2 == 0x14c) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (byte ***)((uint)local_2c[0] & 0xffffff00);
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_009a1750(local_2c,0);
    uVar2 = local_18;
    ppppbVar4 = (byte ****)local_2c[0];
    if (local_18 < 0x10) {
      ppppbVar4 = local_2c;
    }
    pcVar6 = "FRONTEND";
    do {
      bVar1 = *(byte *)ppppbVar4;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00a20c47:
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00a20c4c;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((int)ppppbVar4 + 1);
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00a20c47;
      ppppbVar4 = (byte ****)((int)ppppbVar4 + 2);
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00a20c4c:
    if (iVar5 == 0) {
      *(undefined4 *)(in_ECX + 0x50) = 1;
    }
    else {
      cVar3 = FUN_0040b360();
      if (cVar3 == '\0') {
        cVar3 = FUN_0040b360();
        *(uint *)(in_ECX + 0x50) = -(uint)(cVar3 != '\0') & 3;
      }
      else {
        *(undefined4 *)(in_ECX + 0x50) = 2;
      }
    }
    if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  else {
    if (param_2 == 0x14d) {
      ExceptionList = &local_10;
      FUN_009a1bb0(in_ECX + 0x4c);
      ExceptionList = local_10;
      return;
    }
    ExceptionList = &local_10;
    FUN_009a0f40();
  }
  ExceptionList = local_10;
  return;
}

