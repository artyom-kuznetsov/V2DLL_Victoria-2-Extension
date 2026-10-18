// FUN_00b1fb50 @ 00b1fb50 body=[[00b1fb50, 00b1fb6c] [00b1fb70, 00b1fc33]]


undefined4 FUN_00b1fb50(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *in_EAX;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  bVar1 = *in_EAX;
  while (pbVar5 = param_1, bVar1 == 0x2f) {
    in_EAX = in_EAX + 1;
    bVar1 = *in_EAX;
  }
  do {
    bVar1 = *in_EAX;
    in_EAX = in_EAX + 1;
    if ((bVar1 == 0x3a) || (bVar1 == 0x5c)) goto LAB_00b1fc20;
    if (bVar1 == 0x2f) {
      *param_1 = 0;
      pbVar6 = &DAT_00df8140;
      pbVar3 = pbVar5;
      do {
        bVar2 = *pbVar3;
        bVar7 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_00b1fbb8:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00b1fbbd;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar7 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_00b1fbb8;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_00b1fbbd:
      if (iVar4 == 0) {
LAB_00b1fc20:
        FUN_00b1f840("Insecure filename");
        return 0;
      }
      pbVar3 = &DAT_00e3ba40;
      do {
        bVar2 = *pbVar5;
        bVar7 = bVar2 < *pbVar3;
        if (bVar2 != *pbVar3) {
LAB_00b1fbe8:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00b1fbed;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar7 = bVar2 < pbVar3[1];
        if (bVar2 != pbVar3[1]) goto LAB_00b1fbe8;
        pbVar5 = pbVar5 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_00b1fbed:
      if (iVar4 == 0) goto LAB_00b1fc20;
      bVar2 = *in_EAX;
      while (bVar2 == 0x2f) {
        in_EAX = in_EAX + 1;
        bVar2 = *in_EAX;
      }
      if (*in_EAX == 0) {
        return 1;
      }
      pbVar5 = param_1 + 1;
    }
    *param_1 = bVar1;
    param_1 = param_1 + 1;
    if (bVar1 == 0) {
      return 1;
    }
  } while( true );
}

