// FUN_00b2b6a0 @ 00b2b6a0 body=[[00b2b6a0, 00b2b71a]]


int FUN_00b2b6a0(undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_8;
  
  puVar2 = param_2;
  iVar4 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  while( true ) {
    iVar3 = (*(code *)*param_1)(param_1,(int)&param_2 + 3,1,&local_8);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (local_8 != 1) break;
    uVar1 = (uint)param_2 >> 0x18;
    uVar5 = __allshl();
    puVar2[1] = puVar2[1] | (uint)((ulonglong)uVar5 >> 0x20);
    *puVar2 = *puVar2 | (uint)uVar5;
    iVar4 = iVar4 + 8;
    *param_3 = *param_3 >> 8 ^ (&DAT_013f36a0)[(*param_3 ^ uVar1) & 0xff];
    if (0x3f < iVar4) {
      return 0;
    }
  }
  return -0x7fffbffb;
}

