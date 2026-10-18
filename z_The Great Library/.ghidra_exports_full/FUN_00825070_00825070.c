// FUN_00825070 @ 00825070 body=[[00825070, 00825137]]


undefined4 FUN_00825070(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  piVar4 = *(int **)(param_1 + 0x90);
  local_8 = 0;
  if (piVar4 != (int *)0x0) {
    FUN_00401000(0x443ba000);
    local_c = FUN_00b31c00();
    do {
      piVar2 = (int *)*piVar4;
      piVar4 = (int *)piVar4[2];
      iVar1 = piVar2[0xf];
      piVar2 = (int *)(**(code **)(*piVar2 + 0x30))(local_10,0);
      iVar3 = *piVar2;
      if (iVar3 == 0) {
        iVar3 = -1;
      }
      else if (iVar1 + 0x189373U < 0x39580e) {
        iVar3 = (iVar1 * 1000) / iVar3;
      }
      else {
        uVar5 = __allmul(iVar1,iVar1 >> 0x1f,1000,0);
        iVar3 = __alldiv(uVar5,iVar3,iVar3 >> 0x1f);
      }
      if (iVar3 < local_c) {
        local_8 = local_8 + 1;
      }
    } while (piVar4 != (int *)0x0);
  }
  iVar1 = *(int *)(param_1 + 0x98) / 3;
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 <= local_8);
}

