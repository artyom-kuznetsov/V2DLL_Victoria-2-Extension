// FUN_00a6f920 @ 00a6f920 body=[[00a6f920, 00a6f978]]


int FUN_00a6f920(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int *in_ECX;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  if (in_ECX != (int *)0x0) {
    iVar2 = 0;
    if (0 < *in_ECX) {
      pbVar3 = (byte *)in_ECX[3];
      pbVar5 = param_1;
      pbVar6 = pbVar3;
LAB_00a6f940:
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 == *pbVar5) {
          if (bVar1 != 0) {
            bVar1 = pbVar3[1];
            bVar7 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a6f960;
            pbVar3 = pbVar3 + 2;
            pbVar5 = pbVar5 + 2;
            if (bVar1 != 0) goto LAB_00a6f940;
          }
          iVar4 = 0;
        }
        else {
LAB_00a6f960:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        }
        if (iVar4 == 0) {
          return iVar2;
        }
        iVar2 = iVar2 + 1;
        pbVar3 = pbVar6 + 0x20;
        pbVar5 = param_1;
        pbVar6 = pbVar3;
      } while (iVar2 < *in_ECX);
    }
  }
  return -1;
}

