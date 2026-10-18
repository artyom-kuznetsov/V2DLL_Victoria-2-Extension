// FUN_00b31550 @ 00b31550 body=[[00b31550, 00b316e3]]


void FUN_00b31550(int param_1,uint param_2,int param_3,uint *param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  byte *pbVar6;
  int local_8;
  
  iVar3 = 0;
  if (param_2 < 5) {
    return;
  }
  pbVar1 = (byte *)(param_1 + -4 + param_2);
  local_8 = -1;
  param_2 = *param_4 & 7;
  do {
    while( true ) {
      for (pbVar6 = (byte *)(iVar3 + param_1); (pbVar6 < pbVar1 && ((*pbVar6 & 0xfe) != 0xe8));
          pbVar6 = pbVar6 + 1) {
      }
      iVar3 = (int)pbVar6 - param_1;
      uVar4 = iVar3 - local_8;
      if (pbVar1 <= pbVar6) {
        if (3 < uVar4) {
          *param_4 = 0;
          return;
        }
        *param_4 = param_2 << ((char)uVar4 - 1U & 0x1f) & 7;
        return;
      }
      local_8 = iVar3;
      if (uVar4 < 4) break;
      param_2 = 0;
LAB_00b315fd:
      bVar2 = pbVar6[4];
      if ((bVar2 == 0) || (bVar2 == 0xff)) {
        uVar4 = CONCAT31(CONCAT21(CONCAT11(bVar2,pbVar6[3]),pbVar6[2]),pbVar6[1]);
        while( true ) {
          if (param_5 == 0) {
            uVar4 = (uVar4 - iVar3) - (param_3 + 5);
          }
          else {
            uVar4 = uVar4 + iVar3 + param_3 + 5;
          }
          if (param_2 == 0) break;
          cVar5 = (char)(uVar4 >> ((&DAT_00de84b0)[param_2] * -8 + 0x18U & 0x1f));
          if ((cVar5 != '\0') && (cVar5 != -1)) break;
          uVar4 = (1 << ((&DAT_00de84b0)[param_2] * -8 + 0x20U & 0x1f)) - 1U ^ uVar4;
        }
        pbVar6[4] = ~(((byte)(uVar4 >> 0x18) & 1) - 1);
        pbVar6[3] = (byte)(uVar4 >> 0x10);
        pbVar6[1] = (byte)uVar4;
        pbVar6[2] = (byte)(uVar4 >> 8);
        iVar3 = iVar3 + 5;
      }
      else {
        param_2 = (param_2 & 3) * 2 | 1;
        iVar3 = iVar3 + 1;
      }
    }
    uVar4 = param_2 << ((char)uVar4 - 1U & 0x1f);
    param_2 = uVar4 & 7;
    if ((param_2 == 0) ||
       ((((&DAT_00de84a8)[param_2] != '\0' &&
         (pbVar6[4 - (uint)(byte)(&DAT_00de84b0)[param_2]] != 0)) &&
        (pbVar6[4 - (uint)(byte)(&DAT_00de84b0)[param_2]] != 0xff)))) goto LAB_00b315fd;
    param_2 = (uVar4 & 3) * 2 | 1;
    iVar3 = iVar3 + 1;
  } while( true );
}

