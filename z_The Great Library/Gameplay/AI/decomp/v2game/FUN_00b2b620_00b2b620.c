// FUN_00b2b620 @ 00b2b620 body=[[00b2b620, 00b2b694]]


int FUN_00b2b620(undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int local_8;
  
  puVar3 = param_3;
  puVar2 = param_2;
  *param_2 = 0;
  iVar6 = 0;
  while( true ) {
    iVar4 = (*(code *)*param_1)(param_1,(int)&param_2 + 3,1,&local_8);
    if (iVar4 != 0) {
      return iVar4;
    }
    if (local_8 != 1) break;
    bVar5 = (byte)iVar6;
    iVar6 = iVar6 + 8;
    *puVar2 = *puVar2 | ((uint)param_2 >> 0x18) << (bVar5 & 0x1f);
    uVar1 = *puVar3;
    *puVar3 = uVar1 >> 8 ^ (&DAT_013f36a0)[(uVar1 ^ (uint)param_2 >> 0x18) & 0xff];
    if (0x1f < iVar6) {
      return 0;
    }
  }
  return -0x7fffbffb;
}

