// FUN_00a89d00 @ 00a89d00 body=[[00a89d00, 00a89ea5]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00a89d00(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0;
    iVar1 = FUN_00a88400(param_1,param_2);
    if (iVar1 == -1) {
LAB_00a89d3e:
      _perror("Error dispatching incoming packets");
      return 0xffffffff;
    }
    if (iVar1 == 1) {
      return 1;
    }
  }
  DVar2 = timeGetTime();
  DAT_012586d0 = DVar2 - _DAT_01258b70;
  param_3 = param_3 + DAT_012586d0;
  do {
    uVar3 = DAT_012586d0 - *(int *)(param_1 + 0x14);
    if (86399999 < uVar3) {
      uVar3 = *(int *)(param_1 + 0x14) - DAT_012586d0;
    }
    if (999 < uVar3) {
      FUN_00a8ae30(param_1);
    }
    iVar1 = FUN_00a899f0(param_2,1);
    if (iVar1 == -1) {
LAB_00a89e8f:
      _perror("Error sending outgoing packets");
      return 0xffffffff;
    }
    if (iVar1 == 1) {
      return 1;
    }
    iVar1 = FUN_00a89250(param_2);
    if (iVar1 == -1) {
      _perror("Error receiving incoming packets");
      return 0xffffffff;
    }
    if (iVar1 == 1) {
      return 1;
    }
    iVar1 = FUN_00a899f0(param_2,1);
    if (iVar1 == -1) goto LAB_00a89e8f;
    if (iVar1 == 1) {
      return 1;
    }
    if (param_2 != (undefined4 *)0x0) {
      iVar1 = FUN_00a88400(param_1,param_2);
      if (iVar1 == -1) goto LAB_00a89d3e;
      if (iVar1 == 1) {
        return 1;
      }
    }
    DVar2 = timeGetTime();
    DAT_012586d0 = DVar2 - _DAT_01258b70;
    if ((uint)(DAT_012586d0 - param_3) < 86400000) {
      return 0;
    }
    iVar1 = FUN_00a8b400();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    DVar2 = timeGetTime();
    DAT_012586d0 = DVar2 - _DAT_01258b70;
  } while( true );
}

