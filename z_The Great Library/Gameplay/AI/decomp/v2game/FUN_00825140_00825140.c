// FUN_00825140 @ 00825140 body=[[00825140, 00825205]]


bool FUN_00825140(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  piVar1 = *(int **)(in_EAX + 0x90);
  local_8 = 0;
  while (piVar1 != (int *)0x0) {
    piVar3 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    if (*(int *)(piVar3[0xe] + 0x34) != 6) {
      FUN_00401000(0x44612000);
      local_c = FUN_00b31c00();
      iVar2 = piVar3[0xf];
      piVar3 = (int *)(**(code **)(*piVar3 + 0x30))(local_10,0);
      iVar4 = *piVar3;
      if (iVar4 == 0) {
        iVar4 = -1;
      }
      else if (iVar2 + 0x189373U < 0x39580e) {
        iVar4 = (iVar2 * 1000) / iVar4;
      }
      else {
        uVar5 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
        iVar4 = __alldiv(uVar5,iVar4,iVar4 >> 0x1f);
      }
      if (local_c <= iVar4) {
        local_8 = local_8 + 1;
      }
    }
  }
  return 3 < local_8;
}

