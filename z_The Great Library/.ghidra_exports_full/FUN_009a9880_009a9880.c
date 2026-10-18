// FUN_009a9880 @ 009a9880 body=[[009a9880, 009a9948] [009a994c, 009a995e]]


void FUN_009a9880(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *in_ECX;
  byte *pbVar3;
  undefined1 *unaff_ESI;
  bool bVar4;
  byte ****local_30 [5];
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  FUN_009ab9f0(*in_ECX,local_30,in_ECX + 1,param_1,param_2);
  local_8 = 0;
  if (local_1c < 0x10) {
    local_30[0] = (byte ****)local_30;
  }
  pbVar3 = (byte *)&DAT_00df0d5c;
  do {
    bVar1 = *(byte *)local_30[0];
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) {
LAB_009a9900:
      iVar2 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
      goto LAB_009a9905;
    }
    if (bVar1 == 0) break;
    bVar1 = *(byte *)((int)local_30[0] + 1);
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) goto LAB_009a9900;
    local_30[0] = (byte ****)((int)local_30[0] + 2);
    pbVar3 = pbVar3 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_009a9905:
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  if (iVar2 == 0) {
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    FUN_00408ed0();
  }
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

